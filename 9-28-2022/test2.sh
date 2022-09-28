#usr/bin/bash
filename="file.txt"
n=1
while IFS="
" read -r line; 
do
   
   if [ n = 6 ]; then
      echo $line
   fi
   n=$((n+1));

done


