# Sorting Algorithms
A Sorting Algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.            

For Example: The below list of characters is sorted in increasing order of their ASCII values. That is, the character with a lesser ASCII value will be placed first than the character with a higher ASCII value.       
Unsorted Array: [234, 346, 55, 56, 76, 935, 2, 12]            
Sorted Array:   [2, 12, 55, 56, 76, 234, 346, 935]                 

## Bubble Sort:       
+ It is the Simplest sorting algorithm used.         
+ Is is done by repeatedly swapping the adjacent element in the array till the Array is sorted
+ It can't be worked on large datas cause of it's average & worst-case time complexity is very high.

**Process of Bubble Sort**
+ First Let's start from the beginning.
+ Compare the first two Elements in the array, If the First Element is Greater than Second Swap them
+ Compare the Second and Third Element now, Again  if the Second is greater than Third Swap them
+ by Doing this After First Pass the Largest Element will be in the End of the Array.
+ Now Again Start the Pass but leave the Last Element as it is already at the end & is the largest.
+ by this we can sort the whole array

**Example**
#### Let's Take a Array: [5, 2, 8, 3, 1]

+ First pass:

> Compare 5 and 2. Since 5 > 2, swap them: [2, 5, 8, 3, 1]  
> Compare 5 and 8. No swap needed.  
> Compare 8 and 3. Since 8 > 3, swap them: [2, 5, 3, 8, 1]  
> Compare 8 and 1. Since 8 > 1, swap them: [2, 5, 3, 1, 8]  
+ Second pass:  

> Compare 2 and 5. No swap needed.  
> Compare 5 and 3. Since 5 > 3, swap them: [2, 3, 5, 1, 8]  
> Compare 5 and 1. Since 5 > 1, swap them: [2, 3, 1, 5, 8]  
+ Third pass:  

> Compare 2 and 3. No swap needed.  
> Compare 3 and 1. Since 3 > 1, swap them: [2, 1, 3, 5, 8]  
+ Fourth pass:  

> Compare 2 and 1. Since 2 > 1, swap them: [1, 2, 3, 5, 8]   

#### Now, the list is sorted: [1, 2, 3, 5, 8].  

<u> **Complexity of Bubble Sort:** </u>  
Time Complexity: $O(N^2)$  
Auxiliary Space: $O(1)$  

**Advantages of Bubble Sort:**  
= It is easy to Understand and Implement.  
= It works the same of Pretty Much everything.  
= It doesn't Require Additional Memory Space.  
= It is a stable sorting algorithm.  

**Disadvantages of Bubble Sort:**  
= It's Time Complexity is Very High so it's not Really Good for Larger Data Sets.  
= It is a comparison based Algorithm so it Needs a Comparison Operator for the Data.  

### Algorithm for Bubble Sort
```
1. Start
2. Repeat steps 3-6 for each pass from 1 to n-1 (where n is the number of elements in the array)
3.   Set swapped to false
4.   Repeat steps 5-7 for each pair of adjacent elements from 0 to n-pass-1
5.     If array[i] > array[i+1], then
6.       Swap array[i] and array[i+1]
7.       Set swapped to true
8.   If swapped is false, then
9.     Exit loop (the array is sorted)
10.  End Repeat
11. End Repeat
12. End
```
## Insertion Sort:
+ It is One of the Simplest sorting algorithm used.
+ Is is done by Building Sorted List one Element at a time.
+ One Element is removed from the List and Then it is Inserted to it's Correct Position after Comparing.

**Process of Insertion Sort**
+ Imagine we Have a Deck of Cards and we want to Sort it from smallest to largest.
+ First we will Take the Second Card (The First card is considered as sorted).
+ Then we will Compare it to the cards in our Left hand if the card is smaller than the first it is put to the left side.
+ otherwise it will go to the Right Side.
+ We will do this for all the remaining Elements in the array and by Making space for every element in it's Correct Position.

**Example**
#### Initial array: [7, 3, 9, 5, 4]

+ Step 1: Start with the second element (3).
> Compare 3 with 7. Since 3 < 7, 7 shifts to the right.  
> Place 3 in the correct position, before 7.  
> Array after step 1: [3, 7, 9, 5, 4]  

+ Step 2: Move to the third element (9).  
> Compare 9 with 7. Since 9 > 7, no swap needed.  
> 9 remains in its position.  
> Array after step 2: [3, 7, 9, 5, 4]  

+ Step 3: Move to the fourth element (5).  
> Compare 5 with 9. Since 5 < 9, 9 shifts to the right.  
> Compare 5 with 7. Since 5 < 7, 7 shifts to the right.  
> Place 5 in the correct position, before 7 and after 3.  
> Array after step 3: [3, 5, 7, 9, 4]  
  
+ Step 4: Move to the fifth element (4).  
> Compare 4 with 9. Since 4 < 9, 9 shifts to the right.  
> Compare 4 with 7. Since 4 < 7, 7 shifts to the right.  
> Compare 4 with 5. Since 4 < 5, 5 shifts to the right.  
> Place 4 in the correct position, before 5 and after 3.  

+ Array after step 4: [3, 4, 5, 7, 9]  
#### Now, the array is sorted: [3, 4, 5, 7, 9].  


<ins>**Complexity of Insertion Sort:**</ins>  
Time Complexity: $O(N^2)$  
Auxiliary Space: $O(1)$  

**Advantages of Insertion Sort:**  
= It is easy to Understand and Implement.  
= It doesn't Require Additional Memory Space, As it works directly on the Input.
= It is a stable sorting algorithm.
= It is Efficient for Smaller Lists and Mostly Sorted Lists.

**Disadvantages of Insertion Sort:**  
= It's Time Complexity is Very High so it's not Really Good for Larger Data Sets.  
= Not Suitable for Reverse Sorting of the Lists

### Algorithm for Bubble Sort
```
1. Start
2. Repeat steps 3-7 for each element i from 1 to n-1 (where n is the number of elements in the array)
3.   Set current element as array[i]
4.   Set j as the index of the element before i
5.   Repeat step 6 while j is greater than or equal to 0 and array[j] is greater than the current element
6.     Shift array[j] to the right by one position (array[j+1] = array[j])
7.     Decrement j by 1
8.   Set array[j+1] as the current element
9. End Repeat
10. End Repeat
11. End
```

## Selection Sort: 
+ It is Efficient & Simple sorting algorithm.
+ Is is done by Repeatedly Selecting the Smallest/Largest Element From the unsorted list.   
+ Then it is Put in the Sorted Spot of the Element.

**Process of Selection Sort**
+ First we select whole array as unsorted.
+ Then we take the first array as the `minimum`.
+ Then we compare it to next element and if it's less than first element then it is set as `minimum`.
+ or if it's not less than it compares to the next element than that.
+ After every iteration the minimum is moved to the first place where it is started.
+ After every iteration we start from the next element (for example: i=1 we use arr[0], for i=1 we use arr[1])

**Example**
#### Initial array: [7, 2, 8, 6, 3]

+ Step 1: Find the smallest element in the entire array and swap it with the first element.
> The smallest element is 2.
> The Process of Finding smallest Element is:   
> > arr = [7, 2, 8, 6, 3]   
> > so first Element is 7 marked as `minimum`    
> > 7 < 2 so now 2 is marked as `minimum`    
> > 2 < 8 is not true so moved onto next comparison    
> > 2 < 6 is not true also so next    
> > 2 < 3 is also not true.    
> > so "2" is the `minimum`

> Swap 2 with 7.   
> Array after step 1: [2, 7, 8, 6, 3]   

+ Step 2: Consider the subarray starting from the second element ([7, 8, 6, 3]) and find the smallest element.
> The smallest element is 3.
> Swap 3 with 7.
> Array after step 2: [2, 3, 8, 6, 7]

+ Step 3: Consider the subarray starting from the third element ([8, 6, 7]) and find the smallest element.
> The smallest element is 6.
> Swap 6 with 8.
> Array after step 3: [2, 3, 6, 8, 7]

+ Step 4: Consider the subarray starting from the fourth element ([8, 7]) and find the smallest element.
> The smallest element is 7.
> Swap 7 with 8.
> Array after step 4: [2, 3, 6, 7, 8]
#### Now, the array is sorted: [2, 3, 6, 7, 8].


<ins>**Complexity of Selection Sort:**</ins>  
Time Complexity: 	$O(n^2)$    
Space Complexity:	$O(1)$

**Advantages of Selection Sort:**  
= It is easy to Understand and Implement.   
= Works well with small datasets.     
 
**Disadvantages of Insertion Sort:**  
= It's Time Complexity is Very High so it's not Really Good for Larger Data Sets.    
= Not Stable Sorting algorithm.    
= Not adapt to the Data input.    

### Algorithm for Bubble Sort
```
1. Start
2. Repeat steps 3-6 for each index i from 0 to n-1 (where n is the number of elements in the array)
3.   Set min_index to i
4.   Repeat steps 5-6 for each index j from i+1 to n-1
5.     If array[j] < array[min_index], then
6.       Set min_index to j
7.   Swap array[i] with array[min_index]
8. End Repeat
9. End
```

