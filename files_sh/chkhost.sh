#!/bin/bash - 
#===============================================================================
#
#          FILE: chkhost.sh
# 
#         USAGE: ./chkhost.sh 
# 
#   DESCRIPTION: 
# 
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: bo lee
#  ORGANIZATION: 
#       CREATED: 12/11/2018 18:53
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error
ping -c 3 -i 0.2 -S 3 $1 &> /dev/null
if [ $? -eq 0 ]
then
    echo "Host $1 is On-line."
else
    echo "Host $1 is Off-line."
fi

