#! /bin/bash
a=`diff $1 $2`
len=`echo ${#a}`
if (( $len == 0 ))
then
echo "Both file having same content"
rm $2
echo "$2 is deleted"
else
echo "Both file have different content"
fi
