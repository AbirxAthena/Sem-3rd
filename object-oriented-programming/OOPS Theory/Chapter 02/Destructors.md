## Destructors
**Destrutors are used in a Program to Destroy Objects Created by the Class**

+ **Features:-**
+ Invoked Implicitly by Compiler.
+ Nor Takes Any Argument or Returns any Arguments
+ It is also same name as class but starts with (~)

**= Use of Destructors to Free Memory allocated so it can be re-used as new in another Program**         
**= Memory allocated to object --> new operator**      
**= Memory de-allocated to object --> delete operator**         

Example:
```
class school
{
char *t;
public:
school(int rank)
{
t=new char[rank]
cout<<"length of array ="<<rank<<" \n created";
}
~school()
{
delete t;
cout<<"\n Memory Deallocated";
};
int main()
{
school s(15)
return 0;
}
```
