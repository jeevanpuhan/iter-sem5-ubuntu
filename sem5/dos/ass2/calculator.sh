#! /bin/bash
case $2 in
+)
echo "Addition of $1 and $3 is : `expr $1+$3|bc`";;
-)
echo "Subtraction of $1 and $3 is : `expr $1-$3|bc`";;
x)
echo "Multiplication of $1 and $3 is : `expr $1*$3|bc`";;
/)
echo "Division of $1 and $3 is : `expr $1/$3|bc`";;
%)
echo "Remainder of $1 and $3 is : `expr $1%$3|bc`";;
^)
echo "Power of $1 and $3 is : `expr $1^$3|bc`";;
*)
echo "Invalid Input";;
esac
