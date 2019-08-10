#!/bin/bash - 
#===============================================================================
#
#          FILE: Example.sh
# 
#         USAGE: ./Example.sh 
# 
#   DESCRIPTION: 
# 
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: YOUR NAME (), 
#  ORGANIZATION: 
#       CREATED: 12/11/2018 19:27
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error
read -p "Enter The Users Password : " PASSWD
for UNAME in `cat users.txt`
do
    id $UNAME &> /dev/null
    if [ $? -eq 0 ]
    then
        echo "Already exists"
    else
        useradd $UNAME &> /dev/null
        echo "$PASSWD" | passwd --stdin $UNAME &> /dev/null
        if [ $? -eq 0 ]
        then 
            echo "$UNAME , Create success"
        else
            echo "$UNAME , Create failure"
        fi
    fi
done

