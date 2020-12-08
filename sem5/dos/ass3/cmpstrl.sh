#! /bin/bash
echo "Enter the string 1:"
read str1
echo "Enter the string 2:"
read str2
len1=`expr length "$str1"`
len2=`expr length "$str2"`
diff=`expr $len1-$len2|bc`
echo "difference of length of $len1 and $len2 is : $diff"

