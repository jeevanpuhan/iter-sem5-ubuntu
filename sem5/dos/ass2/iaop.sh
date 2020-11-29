#! /bin/bash
echo "Enter first number: "
read n1
echo "Enter second number: "
read n2

echo "Addition of $n1 and $n2 		= `expr $n1 + $n2`"
echo "Subtraction of $n1 and $n   	= `expr $n1 - $n2`"
echo "Multiplication of $n1 and $n2 	= `expr $n1 \* $n2`"
echo "Division of $n1 and $n2 		= `expr $n1 / $n2`"
echo "Remainder of $n1 and $n2 		= `expr $n1 % $n2`"
