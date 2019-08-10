#!/bin/bash - 
#===============================================================================
#
#          FILE: Guess.sh
# 
#         USAGE: ./Guess.sh 
# 
#   DESCRIPTION: 
# 
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: bo lee
#  ORGANIZATION: 
#       CREATED: 12/11/2018 21:10
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error
PRICE=$(expr $RANDOM % 1000)
TIMES=0
echo "商品实际价格为0-999，猜猜看是多少？"
while true
do
    read -p "请输入您猜测的价格数目：" INT
    let TIMES++
    if [ $INT -eq $PRICE ] ; then
        echo "恭喜您答对了，实际价格是 $PRICE"
        echo "您总共猜 $TIMES 次"
        exit 0
    elif [ $INT -gt $PRICE ] ; then
        echo "太高了！"
    else
        echo "太低了！"
    fi
done

