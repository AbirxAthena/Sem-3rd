## Binding
Matching the Function call with the correct function defination by compiler.   

Two Types of Binding:      
+ **Static Binding** - Matches the function at the compile time. (Static/Early/Compile-Time Binding)
+ **Dynamic Binding** - Matches the function at the runtime. (Dynamic/Late/Runtime Binding) 

![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/cabece8f-db1d-4845-9c5f-903686494931)

|                                                  **Static Binding**                                                  |                                                 **Dynamic Binding**                                                 |
|:--------------------------------------------------------------------------------------------------------------------:|:-------------------------------------------------------------------------------------------------------------------:|
|                         It takes place at compile time which is referred to as early binding                         |                            It takes place at runtime so it is referred to as late binding                           |
| Execution of static binding is faster than dynamic binding because of all the information needed to call a function. | Execution of dynamic binding is slower than static binding because the function call is not resolved until runtime. |
|              It takes place using normal function calls, operator overloading, and function overloading.             |                                        It takes place using virtual functions                                       |
|                                         Real objects never use static binding                                        |                                           Real objects use dynamic binding                                          |

---

## Static Polymorphism
