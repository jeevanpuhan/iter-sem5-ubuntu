#! /bin/bash
echo "Enter the day:"
read d
case $d in
mon)
echo "We don't have Dos class on monday";;
tue)
echo "Tuesday dos class from 1-2pm";;
wed)
echo "wednesday having dos lab from 1-3pm";;
thu)
echo "We don't have class on thursday";;
fri)
echo "friday dos class timing is from 8-9am";;
sat)
echo "saturday have dos class from 11-12am";;
sun)
echo "sunday is holiday";;
*)
echo "holiday or enter a valid day";;
esac
