echo -e "filename \t linecount \t wordcount \t charcount"
echo -e "$1 \t\t `wc -l<$1` \t\t `wc -w<$1` \t\t `wc -c<$1`"
