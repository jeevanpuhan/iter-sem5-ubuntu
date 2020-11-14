#! /bin/bash
a=1;
for var in $@
do
echo "Argument $a Argument name is is : $var  length: `expr length $var`"
a=$((a+1))
done

