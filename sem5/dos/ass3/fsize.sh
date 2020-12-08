#! /bin/bash
echo -e "Filename \t  size in byte"
for i in $@
do
echo -e "$i \t \t \t`wc -c <$i`"
done

