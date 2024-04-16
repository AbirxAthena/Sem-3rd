Let's Start with a Program having Class
```cpp
#include <iostream>
using namespace std;

class score
{
int fours,sixes;
public:
void input(int a, int b)
{
fours=a;
sixes=b;
}
void output(void)
{
cout<<"Fours = "<<fours<<"\n";
cout<<"Sixes = "<<sixes<<"\n";
}
};

int main()
{
score t1,t2;
t1.input(8,9);
t2.input(10,12);
t1.output();
t2.output();
return 0;
}

Output:
Fours = 8
Sixes = 9
Fours = 10
Sixes = 12
```
In this Program We used a Object Creation    
And Input and Output for Fours and Sixes in a Match of both teams.      


## Array of Objects
We Know that array is like a bundle or Collection of Elements of Same Datatype.   
So Array of Objects is like A collcection of Elements of Class Type     

For Example:     
```C++
class employee
{
char name[20];
int age;
public:
void getdata();
void showdata();
};

//Class “employee” used to create different categories of employees.

employee faculty[3]; // array of faculty
employee staff[5]; // array of staff
faculty[i].getdata(); // input data for ith faculty
staff[i].getdata(); // input data for ith staff
faculty[i]. putdata(); // display data of ith faculty
staff[i].putdata(); // display data of ith staff
```

## Reference Variables
+ Provides A Alternative Name for Previously Defined Variable
+ Syntax:
  + datatype & reference_name=variable_name;
+ Both Refers to the Same Memory Locations

Example:     
`int x = 10;`    
`int &y = x;`

Applications:    
~ In Passing Arguments to Functions. 
For Example:      
```C
void swap(int x, int y) //swap values of two variables
{ int t=x; x=y;
y=t;}
int main()
{
int a=5, b=10;
swap(a,b); // function call by value
cout<<a<<b; // print 5 and 10
return 0;
}
void swap(int &x, int &y) //swap values of two variables
{ int t=x;
x=y; y=t;}
int main()
{
int a=5, b=10;
swap(a,b); // function call by reference
cout<<a<<b; // print 10 and 5
return 0;
}
```
