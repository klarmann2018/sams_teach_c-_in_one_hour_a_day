#!/bin/bash - 
#===============================================================================
#
#          FILE: Checkkeys.sh
# 
#         USAGE: ./Checkkeys.sh 
# 
#   DESCRIPTION: 
# 
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: bo lee
#  ORGANIZATION: 
#       CREATED: 12/12/2018 16:11
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error
read -p "请输入一个字符，并按Enter 键确认: " KEY
case "$KEY" in
    [a-z]|[A-Z])
        echo "您输入的是字母。"
        ;;
    [0-9])
        echo "您输入的是数字。"
        ;;
    *)
        echo "您输入的是 空格，功能键或其他控制字符。"
esac


