#!/bin/bash - 
#===============================================================================
#
#          FILE: mkcdrom.sh
# 
#         USAGE: ./mkcdrom.sh 
# 
#   DESCRIPTION: 
# 
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: YOUR NAME (), 
#  ORGANIZATION: 
#       CREATED: 12/11/2018 18:47
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error
DIR="/media/cdrom"
if [ ! -e $DIR ]
then
    mkdir -p $DIR
fi


