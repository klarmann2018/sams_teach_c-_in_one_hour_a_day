#!/bin/bash - 
#===============================================================================
#
#          FILE: CheckHosts.sh
# 
#         USAGE: ./CheckHosts.sh 
# 
#   DESCRIPTION: 
# 
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: YOUR NAME (), 
#  ORGANIZATION: 
#       CREATED: 12/11/2018 20:42
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error
HLIST=$(cat ./ipadds.txt)
for IP in $HLIST
do
    ping -c 3 -i 0.2 -W 3 $IP &> /dev/null
    if [ $? -eq 0 ] ; then
        echo "Host $IP is On-line."
    else
        echo "Host $IP is Off-line."
    fi
done

