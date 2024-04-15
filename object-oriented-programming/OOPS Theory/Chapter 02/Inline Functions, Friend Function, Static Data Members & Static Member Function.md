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
