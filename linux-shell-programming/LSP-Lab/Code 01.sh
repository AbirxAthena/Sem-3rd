##Greatest in Three Numbers

#!/bin/bash

echo "Enter three numbers"
read num1
read num2
read num3

if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]; then
    echo "First Number $num1 is the greatest!"
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]; then
    echo "Second Number $num2 is the greatest!"
else
    echo "Third Number $num3 is the greatest!"
fi
