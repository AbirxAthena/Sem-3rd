##If the angles of Triangles is valid or not

#!/bin/bash

echo "Enter Angles of Triangles"
read a
read b
read c

sum=$((a + b + c))

if [ $sum -eq 180 ];
then
echo "These angles sum upto $sum and they are valid angles of a Triangle"
else
echo "These angles sum upto $sum and they are not valid angles of a Triangle"
fi
