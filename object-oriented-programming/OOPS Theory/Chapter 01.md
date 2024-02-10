# OOP CHAPTER 01

### Procedure Oriented Programming
- Primary focus on functions
- it consists of writing a list of instructions for the computer to follow and organizing into them in groups known as functions
- each function may have it's own local data
#### Characterstics of P-O P
- Emphasis on doing things.
- Large programmes are divided into smaller programmes known as functions.
- Most share global data.
- Employes top down approach in program design.
### Object Oriented Programming
OOP treats data as a critical element in the program development and also it do not allows the data to flow freely in the system. it ties data to the function operating on it and saves it from modification by outside programmes
it allows breaking of a problem into smaller entities called as objects. and then build data and fuction around these objects
the data of an object can only be accessed by the functions associated with that object, but functions can access the functions of another object.
#### Characterstics of OOP
- Emphasis on data rather than procedure.
- Large programmes are divided into objects.
- Follows bottom up approach.
- New functions and data can be added when required.
- Data is hidden and cannot be access by external functions.
- Data structures are designed as such they characterize the objects.

### Procedure Oriented Programming v/s Object Oriented Programming

| Procedure Oriented Programming | Object Oriented Programming |
|------|---------------|
| the basic unit of the program is functions or procedures. Programs are built around these functions, which operate on data.    | the basic unit is objects. Objects encapsulate both data and the functions that operate on that data.            |
| data and functions are separate entities. Functions operate on data that may be global or passed as parameters.    | Objects contain both the data they manipulate and the functions (methods) that operate on that data.            |
| POP focuses on functions and algorithms.    | OOP focuses on objects and their interactions.             |
| POP, inheritance and polymorphism are typically not supported.    | OOP supports inheritance and polymorphism. Objects can inherit attributes and behaviour.    |

### Basic Concepts of OOP
There are some concept which are extensively used in the whole language and OOP
These are:

- Objects
- Classes
- Inheritance
- Polymorphism
- Data Binding
- Message passing
- Encapsulation & Abstraction

#### Objects
Objects are basic run time entities in an object oriented programming system.
they may represent a Person, a Banking Data or a Server or a Table of accounts etc., that a program has to handle
they can also be user defined such as vector, time and lists.
` programming problems samjhi jaati hai objects aur unke beech ke nature ko samajh kar `
Objects take space and have address like structure have in C language.

![alt text](https://programmingknow.com/wp-content/uploads/2021/09/ways-of-object-representation-in-c-picture.jpg)


#### Classes.
We know that object have data and code to manupulate the data,Now the whole batch of data and code can be made user defined if they're in a Class or with the help of the class.
` Objects are the Variables of Type Class `
if once we define a class, we can create numerous number of object with that class and define them into that class. Each object associates to the data defined by its class.
For Example:
```
Circle, Triangle and Square are member of the class Shapes. So the class are user defined data types but they work as a functions
and we can Denote the class by simply giving the syntax
`
Shapes Rectangle;
`
will create an object rectangle of shape class
```

#### Data Abstraction and Encapsulation.
**Encapsulation** is basically wrapping or bundling of the data and methods that work on that data together. also restricting the data from the outside functions. Like putting something in a box we can access the whole box but can't see what's inside of that box.

**Abstraction** basically hides the complex details and only shows what's necessary parts to the outside world. it's like a TV remote we just have to use it doesn't have to understand how TV remote actually works we just need to know how to use TV remote.
` Since the Class use Data Abstraction they're also called as Abstract Data Types `

#### Inheritance.
it basically means inheriting the objects and function from one class to another. the new class or what we called a child class automatically gets all the features of the *Parent class or Base Class*
Inheritance is like passing down traits from parents to children.

#### Polymorphism.
it's meaning is taking more than one form in Greek but not going there we can say, an work or operation can produce multiple behaviours based on the types of data used in operation
For Example: In the Addition, For two Numbers it will generate a sum but if the operandes are string then it will produce a third string by [concatenation](https://static.javatpoint.com/meaning/images/concatenate.png)

#### Dynamic Binding.
Dynamic binding means the code associated with the given procedure is unknown till the time of the call at run time
it refers to the linking of a procedure call to the code to be executed
it means that the specific method to be executed for a given function call is determined while the program is running, based on the actual type of the object. This allows for flexibility and adaptability in code, as the decision about which method to call is made dynamically based on the context during runtime. 

#### Message Passing
Message passing is a way for objects to communicate with each other in object-oriented programming. Instead of directly accessing or modifying another object's data, one object sends a message to another object, requesting it to perform a certain action or provide information. This communication typically involves invoking methods or functions of the receiving object.









