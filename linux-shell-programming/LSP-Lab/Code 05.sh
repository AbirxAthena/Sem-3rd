##To Calculate Profit or Loss

#!/bin/bash
echo "Enter the cost Price:"
read cost
echo "Enter the Selling Price:"
read selling

profit_loss=$((selling - cost))

if [ $profit_loss -gt 0 ];
then
echo "This is a profit in buisness"
echo "Profit = $profit_loss "
elif [ $profit_loss -lt 0 ];
then
echo "This is a loss"
echo "Loss = $((0 - profit_loss)) "
else
echo "This makes no profit and no loss"
fi

