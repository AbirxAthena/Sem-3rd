## Inheritance
+ The Mechanism to make New Class from Old Class is called Inheritance.
+ It helps program to saves Time and Effort
+ Base Class = Parent Class
+ New Class = Child Class
+ Private Section of Class never Inherits

+ **There are 5 Types of Inheritance:**
  + Single Inheritance
  + Multilevel Inheritance
  + Multiple Inheritance
  + Hybrid Inheritance
  + Hierarchial Inheritance


### Single Inheritance
In this, Class is Inherited from Single Class and have a Single Class.   
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/10644fbc-da3c-4bfd-b29b-e4838881fec5)

Syntax :
```
class derived-class-name : visibility-mode base-class-name
{
members of derived class.
};
```

**Visibility Mode (private/protected/public):**
if,    
private --> public & protected becomes private    
protected --> protected & public becomes protected    
public --> protected stays protected and public becomes public    


### Multilevel Inheritance
If, a Class, Gets derieved from Any Other Class, i.e. Multilevel Inheritance    
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/df6590c2-c337-4392-81e9-0ee65f564f1e)

There can be any number of levels.

### Multiple Inheritance
If, a Class, Gets derieved from Any Two Class    
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/7abbc89d-1dc6-49f9-bf63-e12517366960)

Syntax:      
```
class derived_class : visibility_mode Base_class_1, visibility_mode
Base_class_2, - - - - - - - visibility_mode Base_class_n
{
Members of derived class
};
```

### Hierarchial Inheritance
When Base Class is Inherited by Two or More Class       
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/dbdcab5d-8a92-4397-a000-132bee3da846)



Syntax:       
Same as Single Inheritance but for Two Different Child Classes     

### Hybrid Inheritance
The Combination of Two or More Types of Inheritance (Except Single)        

For Example:     
Combination of Multiple and Multilevel Inheritance.        

![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/5479225e-b928-47a5-ba18-81d208f72484)
