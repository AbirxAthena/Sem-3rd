# De Morgan's Theorems
De Morgan's theorems are a set of two fundamental rules in Boolean algebra, named after the mathematician and logician Augustus De Morgan. These theorems describe the relationship between the logical operations of NOT, AND, and OR.

## First Theorem
+ $\overline{A.B} = \overline{A} + \overline{B}$
+ NAND = Bubble OR   

     
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/5099c88d-31c4-48bd-b6bf-f037e09fb97d)


#### This Images Shows:
+ The Left hand side here suggest a NAND gate with 2 inputs (A and B).
+ and The Right side suggests or shows OR gates with 2 Inverted Inputs ($\overline{A}$ and $\overline{B}$).
+ The "OR" Gate here is called as Bubble OR.
+ **This Shows that Both of these Gates even after having Different Inputs Can Produce Same Outputs.**

**The Truth Table is Here as Follows:**

| A | B | $\overline{A.B}$ | $\overline{A}$ | $\overline{B}$ | $\overline{A} + \overline{B}$ |
|---|---|------------------|----------------|----------------|-------------------------------|
| 0 | 0 | 1                | 1              | 1              | 1                             |
| 0 | 1 | 1                | 1              | 0              | 1                             |
| 1 | 0 | 1                | 0              | 1              | 1                             |
| 1 | 1 | 0                | 0              | 0              | 0                             |

## Second Theorem
+ $\overline{A+B} = \overline{A} . \overline{B}$
+ NOR = Bubbled AND

![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/a93b8a56-94a1-432b-9cc0-1524558ddb3a)

#### This Images Shows:
+ The Left hand side here suggest a NOR gate with 2 inputs (A and B).
+ and The Right side suggests or shows AND gates with 2 Inverted Inputs ($\overline{A}$ and $\overline{B}$).
+ The "AND" Gate here is called as Bubbled AND.
+ **This Shows that Both of these Gates even after having Different Inputs Can Produce Same Outputs.**

**The Truth Table is Here as Follows:**

| A | B | $\overline{A+B}$ | $\overline{A}$ | $\overline{B}$ | $\overline{A} . \overline{B}$ |
|---|---|------------------|----------------|----------------|-------------------------------|
| 0 | 0 | 0                | 1              | 1              | 0                             |
| 0 | 1 | 0                | 1              | 0              | 0                             |
| 1 | 0 | 0                | 0              | 1              | 0                             |
| 1 | 1 | 1                | 0              | 0              | 1                             |
