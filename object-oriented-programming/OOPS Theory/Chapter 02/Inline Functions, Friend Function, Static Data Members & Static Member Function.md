## Inline Function
+ Inline Functions are the Function Which are Expanded in line when Invoked
+ Solution for small functions are Inline Functions
+ Compiler -> Function call -> Function Code

Syntax:   
```
inline function-header{
function body;
}
```
Example:
```
inline float area (int length, int breadth)
{
return(length*breadth)
}
c=area(10,20); //Invoke Function
```

+ Only sends Request, Not Command
+ Compliler can Reject & Compile like Normal Function
+ Won't Work, if
  + A loop, switch or a goto exists
  + contains static variable
  + function are recursive
## Friend Function
+ Can be declared with `friend` keyword inside a class
+ It can be common between two classes
+ Characterstics
  + Invokes like Normal Function, Not with object of the Class
  + Can Access private members of class
  + declared anywhere in the class
  + has Object as arguments
  
Example:    
```
class MyClass {
private:
    int data;

public:
    MyClass(int d) : data(d) {}

    // Declaration of friend function
    friend void displayData(const MyClass&);
};

// Definition of friend function
void displayData(const MyClass& obj) {
    cout << "Data from MyClass: " << obj.data << endl;
}

int main() {
    MyClass obj(5);
    displayData(obj); // Calling friend function to access private data of MyClass
    return 0;
}
```
## Static Data Members
+ Declared with `static` Keyword
+ Features
+ + Initialized to Zero at first
  + Only one copy of member is Created & Shared
  + Only Visible for Class but Stays for Entire Program
+ While defining value can be assigned `int item :: count=10;`

Example:
```
class item
{
static int count; //count is static
int number;
public:
void getdata(int a)
{ number=a;
count++; }
void getcount(void)
{ cout<<”count:” <<count<<“\n”; }
};
int item :: count ; //definition of static data member
int main( )
{
item a,b,c; // count is initialized to zero
a.getcount( ); // display count
b.getcount( );
c.getcount( ):
a.getdata( 10):
b.getdata( 20);
c.getdata( 30);
cout<<“After reading data”<<“\n”;
a.getcount( ); // display count
b.getcount( );
c.getcount( ):
return 0;
}
```
## Static Member Function
+ Member Function Declared with `static` Keyword
+ Feature/Properties
+ + Can only Access other Static Data Members & Member Functions
  + Invoked using Class Name

Example:
```
class test
{
int x;
static int y;
public:
void set_xy(int a)
{ x=a; y++; }
void show_x(void)
{ cout<<“x=”<<x<<“\n”; }
static void show_y(void)
{ cout<<“y=”<<y; }
};
int test :: y; //define static data member
int main()
{
test t1, t2;
t1.set_xy(10);
t2.set_xy(20);
t1.show_x();
t2.show_x();
test::show_y(); // calling static function
ret
```
