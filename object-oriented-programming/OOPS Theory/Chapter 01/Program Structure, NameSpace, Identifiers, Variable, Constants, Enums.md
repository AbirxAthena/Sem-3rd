### Program Structure
The OOP program structure is pretty straight forward and basic   
It Generally Includes 4 things, Those Are:
+ Header File (Generally `#include<iostream>` is used)
+ Class Declaration (As the Name Suggest it is used to Declare Class and it's Data)
+ Class Member Function Defination (It Means to define or program a Member function of the class)
+ Main Function (Main function which does all the work in the file)

  
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/e91c4be4-90f5-403c-88ac-8a3867b02e3c)


### NameSpace
+ It Defines the Scope of the Identifiers Used in a Program.
+ Using Directives Includes the NameSpace in the Program.
+ std is a NameSpace Where ANSI C++ standard functions library are defined.
+ using and namespace are the Keywords in C++.

#### For Example:
```
#include <iostream>
using namespace std; //here we are using std ANSI C++ library

int main()
{
cout << "Hello World";
}
```

### Identifiers
These are Variables, Functions, Class, Array etc created by the Programmer.   
There is no limit for Naming Length in C++   
Here are Some Rules for Making an Identifier:
+ It Shouldn't Match Any Keyword.
+ It Shouldn't Start with any Numeric Value.
+ It Shouldn't Be only Numbers.
+ Only Letters, Digits and Underscore are Permitted.
+ It is Case Sensitive so Both are Distinct or Unique.

### Variables
Variables are Basic unit of a storage in a program, It is a Name Given to A Memory Location.   
The Value Stored in Variables can be Changed During Program Execution.   
Here are Some Rules for Making an Variable:
+ It Shouldn't Match Any Keyword.
+ It Shouldn't Start with any Numeric Value.
+ It Shouldn't Be only Numbers.
+ No Special Characters is Allowed
+ Only Letters, Digits and Underscore must be Used.
+ It is Case Sensitive so Both are Distinct or Unique.

For Example:    
+ Variable declaration-       
 int time, speed; // Declaring integer variables      
 speed = 80; //Variable initialization       
+ Variable definition-         
 double price = 50.5;//Variable declaration with initialization       

### Constants
Constants are Fixed Values that do not Change during the Program Execution.         
There are Two Types of Constants.   
+ Literal Constants
+ Symbolic Constants
Literal Constants are of 4 Types        
1. Integer Constants (56, -35(Decimals) 064(octal) etc)
2. Real Constants (-0.75, 064e3 etc)
3. Character Constant (A, 8, $, etc)
4. String Constant (Ajmer, 12141, etc)

There are two ways of Creating Symbolic Constants in C++
1. Using Qualifier Const.   
e.g. const int size = 10 ;  
2. Using Enum Keyword.    
e.g. enum {X, Y , Z};

### Enum
It is an Enumerated Data Type which is a User Defined type.   
it provides a way for attaching Names to Numbers.    
it Provides an Alternative means for Creating Symbolic Constants.    
it automatically enumerates a list of words by Assignming them values 0,1,2,.....       

For Example: 
```
enum shape { circle, square, triangle} ;
enum colour{red=4, blue, green, yellow};
enum position {off, on};
colour background ; // background is of type colour
background = red;
cout<<background; //print 4
cout<<yellow; //print 7
```
In this the Shape Colour and position become new name types.    
CPP Doesn't Allow int value to be automatically converted to an enum.    

