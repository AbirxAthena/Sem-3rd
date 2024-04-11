## Type Casting & Conversion
Type Casting is basically changing one data type into another data type.   
There are two type of Type Casting
+ **Implicit: The Casting in which Type is converted to Wider Type by The Compliler**

1. char->int, long, float, double, long double
2. short-> int, long, float, double, long double
3. int-> long, float, double, long double
4. long-> float, double, long double
5. float-> double, long double
6. double->long double

+ **Explicit: It can't be done by Compiler and Has to be done Forcefully (There may be loss in this)**      
It's like doing the Same but to a smaller or shorter Range Datatype      
For Example:
```
float var = 25.86;
cout<<int(var); //print 25
```

## Control Structures
These are Basically Program Which have a Condition they Run on and Can be controlled by Their Conditions.     
Their Types are:      
1. If Statement
2. If Else Statement
3. Switch
4. While Loop
5. Do/While Loop
6. For Loop

### If Statement
in this there is a single condition given if that is true it will run the code inside it otherwise it will skip this.     

Syntax:    
```
if(condition)
{
Statements;
}
```
### If Else Statement
It is basically Modified Version of If statement in which we can give more than one condition so it can choose two ways to do a program.      

Syntax:  
```
if(condition)
{
statements1;
}
else
{
statements2;
}
```

### Switch
It is basically used when we have multiple cases and we want to avoid using Multiple times if, else & else if statements.      

Syntax:     
```
Switch(expr) //expr must be int type
{
case value-1:
      action1;
      break;
case value-2:
      action2;
      break;
case value-3:
      action3;
      break;
default:
      action4;
}
```

# While Loop  
These are Entry Controlled Loops    
It Works on a Block of code as long as the Condition Given is True.     

Syntax:
```
while(condition)
{
statements;
}
```

### Do/While Loop
These Are Exit Controlled Loop       
It works till the Condition Meet it's Final Point in Given While Condition.     

Syntax:    
```
do
{
statemnets;
}while(condition);
```

### For Loop
It is the most used loop in Programmes    
It is Entry Controlled Loop And is used when action need to be repeated for given times.

Syntax:
```
for(expression1; expression2; expression3;)
{
statements;
}
```

Example:
```
int main() {
  int i = 0;
  for( i=0; i<10 ;i++)
{
cout << "Hello this is AbirxGpt \n";
}
  return 0;
}

```

## Arrays
These are Collection of same type of Elements.    
It's Elements are Stored in a [Contiguous Memory](https://pastemd.netlify.app/pastes/tF4R22euoWRVDp1BJD3e) Location.   
There are Different Types of Arrays.    
1. 1-D arrays
2. 2-D arrays
3. Multi Dimensional arrays

Declaration of 1-D Array:  
int arr[5]; //This will store 5 int Elements

Initialization of 1-D Array:     
+ **Compile Time Initialization**        
int arr[] = {5, 6 ,9, 8}; //compiler automatically compute the size        
int num[5] = {10,15}; //initialize first two elements and remaining to 0.        
char city[5] = {‘A’};// initialize first element and remainingto NULL.

+ **Run Time Initialization**        
int arr[5];
for(int i =0; i<5; i++)
cin>>arr[i];

Declaration of 2-D Array:  
int arr[2][5]; //This will store 2x5=10 int Elements

Initialization of 2-D Array:     
int arr[2][3] = {1,2,3,4,5,6}; //initialize first 3 into first row and remaining into last       
                                   or      
int arr[2][3] = {{1,2,3},{1,2,3}}; //Same thing basically        
                                   or    
int arr[][3] = {{1, 2, 3}, {4, 5, 6}}; //first dimension can be blank      

**Multi-Dimensional Arrays**- Arrays with three or more dimensions.        
    
For Example: int x[2][3][5]; //it can store about 2*3*5=30 elements;

## Pointers
