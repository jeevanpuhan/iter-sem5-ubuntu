#! /bin/bash
a=1;
for var in $@
do
echo -e "Argument $a:\t Argument name is is : $var\t Length: `expr length $var`"
a=$((a+1))
done

