## Operators in C++
All C Operators are Valid in CPP also, In Addition to them CPP introduces new Operators:
+ Insertion Operator. [<<]
+ Extraction Operator. [>>]
+ Scope Resolution Operator. [::]
+ Pointer to Member Declarator. [::*]
+ Pointer to Member Operator. [->* , .*]
+ Memory Allocation Operator. [new]
+ Memory Release Operator. [delete]

### Insertion Operators
It Directs information from the right to the object on it's left     

For Example:     
cout >> "Hello World!"     

### Extraction Operators
It Extracts information from the Keyboard and assigns it to the Variable on it's Right
     
For Example:         
     
int Abir;    
cin >> Abir;         

### Scope Resolution Operators     
It allows access to the global version of a variable.          

For Example:     
if we don't use "using namespace std"     
we'll use      
std::cout << "AbirxGpt";     

### Pointer Operators
1. Pointer to member declarator(::*)- To declare a pointer to a member of a class.
2. Pointer to member operator(->*)- To access a member using a pointer to the object and a pointer to that member.
3. Pointer to member operator(.*)- To access a member using a object name and a pointer to that member.

### Memory Allocation Operators
It Allocates memory at a runtime     

For Example:     
int *p=new int; //it allocates memory for integers     
*p = 25     

### Memory Allocation Operators
It Releases memory at a runtime     

For Example:
int *p=new int; //it allocates memory for integers     
*p = 25     
delete p // Deallocates the memory allocated to the pointer p     
