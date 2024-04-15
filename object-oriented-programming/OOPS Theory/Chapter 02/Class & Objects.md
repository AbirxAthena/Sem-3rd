## Class
A Class is a user-defined Data Type, That we can use in our program.   
It is used to create Objects Constructor or a "BluePrint" for Creating Objects.   

Syntax:  
To Create a Class use `class` Keyword.   

For Example:   
```
class Chapter{
public:
int unit;
string chaptername;
};
```
## Object
Object is a Run-Time Entity Generally created by Class.   
They May Represent Real Life Entities Like Bank, Person, Datasheet etc.   

+ Object is a Variable of Type Class

Syntax:    
class_name obj1; obj2; obj3;    

### Data Members and Member Functions
+ **Data Members:** Variables Declared inside the Class.   
+ **Member Function:** Function Declared inside the Class.  

Generally,    
Data Member = `Private`    
Member Function = `Public`   

### Access Specifiers

+ **Private:** Only Accessed Within the Class. By Default Members are Private
+ **Public:** Can Be Accessed outside of the Class too.

Syntax:
```
class Chapter{
private:
int lesson;
string summary;
public:
int unit;
string chaptername;
};
```

+ Member Function can be Declared Outside/Inside of Class, Body of Fun Remains Same but Header Changes.

+ **Define Inside:**
Can Be Replaced by Actual Function.

Example:  
```
class result
{
int marks;
float percentage;
public:
void input(int score, int result)
{
marks=score;
percentage=result;
}
void output(void)
{
cout<<"Marks="<<marks<<"\n";
cout<<"Percentage"<<percentage;
}
```

+ **Define Outside:**
Can Be done with scope resolution operator.

Syntax:   
return_type class_name::function_name(arguments)
{
function body
}

Example:
```
class result
{
int marks;
float percentage;
public:
void input(int score, int result);
void output(void);
};
void result::input(int score, int result)
{
marks=score;
percentage=result;
]
void result::output(void)
{
cout<<"Marks="<<marks<<"\n";
cout<<"Percentage"<<percentage;
}
