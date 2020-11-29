#! /bin/bash
echo "Enter first number: "
read n1
echo "Enter second number: "
read n2

echo "Addition of $n1 and $n2 		= `echo $n1 + $n2 | bc`"
echo "Subtraction of $n1 and $n   	= `echo $n1 - $n2 | bc`"
echo "Multiplication of $n1 and $n2 	= `echo $n1 \* $n2 | bc`"
echo "Division of $n1 and $n2 		= `echo $n1 / $n2 | bc`"
echo "Remainder of $n1 and $n2 		= `echo $n1 % $n2 | bc`"
