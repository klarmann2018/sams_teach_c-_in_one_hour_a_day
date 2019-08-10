#!/bin/bash - 
#===============================================================================
#
#          FILE: chkscore.sh
# 
#         USAGE: ./chkscore.sh 
# 
#   DESCRIPTION: 
# 
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: bo lee
#  ORGANIZATION: 
#       CREATED: 12/11/2018 19:09
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error

read -p "Enter your score (0-100): " GRADE
if [ $GRADE -ge 85 ] && [ $GRADE -le 100 ];then
    echo "$GRADE is Excellent"
elif [ $GRADE -ge 70 ] && [ $GRADE -le 84 ] ; then
    echo "$GRADE is Pass"
else
    echo "$GRADE is Fail"
fi


