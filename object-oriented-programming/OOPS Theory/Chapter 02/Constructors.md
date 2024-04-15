## Constructors
A Special Member Function Creating Objects of It's Class

+ **Features:**
+ Name is same as class name.
+ Doesn't have Return Type not even Void.
+ Should be Declared in the Public Section.
+ Object Created --> Invokes Automatically.

- ***Types of Constructors:***
- **Default** - Doesn't Return Any Arguments.
- **Parameterized** - Takes One or More Arguments.
- **Copy** - Copy Objects from Another Objects.
- **Dynamic** - Allocate only Sufficient Amount at the time of Creating Object.

#### Default Constructor
No Default Constructor --> compiler defines itself.    
Defining Other Constructor --> Default Should be Defined.   

Example:
```
class lesson
{
int a,b;
public:
marks()
{
a=0;
b=0;
}
};
marks x; // Default constructor automatically called and initialize a and b to zero for the object x.
```

#### Parameterized Constructor
Example:
```
class lesson
{
int a,b;
public:
marks()
{}
marks(int x, int b); //parameterized constructor
{
a=x;
b=y;
}
};
marks x1(90,100); //parameterized constructor called
int num1,num2;
cout<<"Enter The Number of 1 and 2 Subject";
cin>>num1>>num2;
marks x1(num1,num2); //dynamic initialization of object.
```
#### Copy Constructor
Reference to an Object --> same class as an argument    

Example:   
```
class product
{
int code;
public:
product(){ } // default constructor
product(int x) //parameterized constructor
{ code=x; }
product(product &y) //copy constructor
{ code=y.code; } //copy the value
void display(void)
{ cout<<code<<“\n”; }
};

int main()
{
product p1(10); // parameterized constructor called
product p2(p1); //copy constructor called
product p3=p1; //again copy constructor called
p1.display();
p2.display();
p3.display();
return 0;
}
```

#### Dynamic Constructors
Example:
```
class string
{
char *name;
int length;
public:
string ( ) //default constructor
{
length=0;
name= new char[length+1]; // one extra for ‘\0’
}
string( char *s) //dynamic constructor
{
length=strlen(s);
name=new char[length+1];
strcpy(name,s);
}
void display(void)
{ cout<<name<<“\n”; }
};
```

