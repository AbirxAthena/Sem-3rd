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
 
**Disadvantages of Selection Sort:**  
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
## Quick Sort: 
+ It is the Algorithm based on Divide and Conquer Approach.
+ An array is divided into SubArrays by selecting a Pivot element.   
+ The left and right SubArrays are also divided using the same approach. 
+ This process continues until each subarray contains a single element.

**Process of Quick Sort**
+ Pick an Element Called Pivot from the array.(Can be any Element at random).
+ Then Use the Comparison so that we can rearrange the array as the Smaller element than Pivot Comes in Left Side and Same as this Larger comes in the Right Side of the Pivot.
+ Then we Recursuvely perform this same action on the subarrays made by dividing the pivot by itself.
+ When all subarrays are sorted then we will combine then to get to the Final Sorted array.

**Example1**
#### Initial array: [9, 4, 3, 8, 6, 7, 5]

+ Step1: Let's Choose a Pivot. (we choose as 5).
+ Step2: Sort the Array as Elements Smaller than 5 Goes in Left and Largers goes in Right Side of 6.
> After that Array would be like: [4, 3, 5, 8, 6, 7, 9]     
> Process of Sorting this type would be like:      
> > First We Take the First Element in the array and Compare it to the Pivot.      
> > 9<5, No so we'll Take this as Higher Pointer & Move on to the Next Element.       
> > 4<5, Yes so we'll Swap 9 with 4.      
> > Array: [4, 9, 3, 8, 6, 7 ,5]         
> > Moving on Next 3<5, Yes so we'll Again swap with Higher Pointer.         
> > Array: [4, 3, 9, 8, 6, 7 ,5]         
> > Moving Ahead we didn't Find any Smaller Element than 5.         
> > So we'll Swap 5 with 9.        
> > Array: [4, 3, 5, 8, 6, 7, 9]          
> By This we Sorted the Array with Pivot.           
+ Step3: Then the Array gets Divided at the Pivot Point into Two Parts. ([4, 3] & [8, 6, 7, 9]).         
+ Step4: We'll perform the Same From Step 1 on Both of these Subarrays.        
+ Step5: Arrays We get after taking Pivot as First Element: [3, 4] & [6, 7, 8, 9].           

#### Now, the array is sorted: [3, 4, 5, 6, 7, 8, 9].

<ins>**Complexity of Quick Sort:**</ins>  
<ins>Time Complexity:</ins>
                  Worst:     $n^2$       
                  Best:      $nlog n$       
                  Average:   $nlog n$       
                
<ins>Space Complexity:</ins>	$log n$

**Advantages of Quick Sort:**  
= It is a divide-and-conquer algorithm that makes it easier to solve problems.
= Works well with Large datasets.     
= Only requires small amount of Memory to Perform.    
 
**Disadvantages of Quick Sort:**  
= Has worst Case Time Complexity When Pivot is poorly Choosen.
= Not Stable Sorting algorithm.    
= Not A good Choice for Small Data Sets.    

### Algorithm for Quick Sort
```
1. Procedure quickSort(arr[], low, high)
2.     If low < high Then
3.         pivotIndex = partition(arr, low, high)
4.         quickSort(arr, low, pivotIndex - 1)
5.         quickSort(arr, pivotIndex + 1, high)
6.     End If
7. End Procedure

8. Function partition(arr[], low, high)
9.     pivot = arr[high]
10.    i = low - 1
11.    For j = low to high - 1
12.        If arr[j] <= pivot Then
13.            i++
14.            swap arr[i] with arr[j]
15.        End If
16.    End For
17.    swap arr[i + 1] with arr[high] (placing pivot in its correct position)
18.    Return i + 1 (returning the index of the pivot)
19. End Function

```

## Merge Sort: 
+ It is also Based on Divide and Conquer Rule.
+ Here the Problem is Divided into SubProblems and then they are Solved.
+ Then those Solution are Combined to join them into one.

**Process of Merge Sort**
+ First we Take an array and divide it from the middle.
+ Then we Take Those Sub arrays and same Divide them from Middle again.
+ And we Do that Until the Array Gets Separated into Sub Arrays with Single Element.
+ Then these arrays are combined and then also get sorted within joining arrays.
+ Then those arrays are also Merged into bigger arrays and also sorted and joined and Sorted Further.

**Example:**
#### Array [7, 2, 4, 9, 5, 10, 1].

+ Step 1: Divide
> Divide the array into smaller sub-arrays until each sub-array has only one element.     
> Initial array: [7, 2, 4, 9, 5, 10, 1]     
> Divide into sub-arrays: [7], [2], [4], [9], [5], [10], [1]

+ Step 2: Merge (and Sort)
> Merge and sort adjacent sub-arrays to create larger sorted sub-arrays.    
> Merge [7] and [2]: Result: [2, 7]    
> Merge [4] and [9]: Result: [4, 9]    
> Merge [5] and [10]: Result: [5, 10]    
> Merge [1] and [4, 9]: Result: [1, 4, 9]    
> Merge [2, 7] and [5, 10]: Result: [2, 5, 7, 10]    
> Merge [1, 4, 9] and [2, 5, 7, 10]:     
> Result: [1, 2, 4, 5, 7, 9, 10]     

#### Final Sorted Array:
#### The final sorted array is [1, 2, 4, 5, 7, 9, 10].

<ins>**Complexity of Merge Sort:**</ins>  
<ins>Time Complexity:</ins>
                  Worst:     $O(n log n)$       
                  Best:      $O(n log n)$       
                  Average:   $O(n log n)$       
                
<ins>Space Complexity:</ins>	$O(n)$


**Advantages of Merge Sort:**  
= It is a divide-and-conquer algorithm that makes it easier to solve problems. 
= Works well with Large datasets.       
= Has Guaranteed Worst Time Complexity of O(nlog n).   
= It is a Stable Sorting Algorithm
 
**Disadvantages of Merge Sort:**  
= Requires Additional Memory Space for working.      
= It is not Very Optimised For Smaller Datasets.     

### Algorithm for Quick Sort
```
MergeSort(arr[], low, high)
1. If low is less than high:
2.     Set middle as (low + high) / 2
3.     Call MergeSort(arr, low, middle)  // Recursively sort the left half
4.     Call MergeSort(arr, middle + 1, high) // Recursively sort the right half
5.     Merge(arr, low, middle, high)  // Merge the sorted halves

Merge(arr[], low, middle, high)
1. Create temporary arrays leftArr[] and rightArr[]
2. Set leftArr[] to contain elements from arr[low] to arr[middle]
3. Set rightArr[] to contain elements from arr[middle+1] to arr[high]
4. Initialize variables: i to low, j to middle + 1, k to low
5. While i is less than or equal to middle and j is less than or equal to high:
6.     If leftArr[i] <= rightArr[j]:
7.         Set arr[k] to leftArr[i]
8.         Increment i by 1
9.     Else:
10.        Set arr[k] to rightArr[j]
11.        Increment j by 1
12.    Increment k by 1
13. Copy remaining elements of leftArr[] and rightArr[], if any, into arr[]
```
## Heap Sort: 
+ It is Based on Heap Structure or Like a Tree Structure.
+ It is very Similar to Selection Sort where First Minimum is Chosen.
+ In this first Maximum element is Chosen and it is put into the position.
+ And by this process We sort the Array.

**Process of Heap Sort**
+ Build a heap from the given input array.
+ Swap the root element of the heap (which is the largest element) with the last element of the heap.
+ Remove the last element of the heap (which is now in the correct position).
+ Heapify the remaining elements of the heap.
+ Repeat the following steps until the heap contains only one element:
+ The sorted array is obtained by reversing the order of the elements in the input array.

**Example:**
It's a Bit Hard To understand it with the Text so we will use Images as the Example for this

#### Array [1, 12, 9, 5, 6, 10].
+ Step1: We'll Build A Tree From the Array.
+ ![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/4d0f45e5-a733-4ecd-814a-f95f39ae2aeb)
+ Step2: We'll Heapify the Tree.
+ ![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/07115ef8-6555-4a6b-8801-552b68ab1ced)
+ Step3: We'll Swap the Root to the Last Node.
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/a4349e0d-46bb-48ba-9306-06635ae794f2)
+ Step4: Then We'll remove it and Put it into the Array and Heapify the Remaining Tree.
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/a97604da-2cd4-48e7-a00e-a69cc2566bfc)
+ Step5: Repeat the Same Process Again and Again until we get [Last Node = Root]
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/a44248e4-34f1-48af-8f69-4ea2bc57092b)

#### Sorted Array: [1, 5, 6, 9, 10 ,12].
**Important Note: Here in Example I Directly Put the Element I Removed into Last Position of Array, so No need to Reverse it**

<ins>**Complexity of Heap Sort:**</ins>  
<ins>Time Complexity:</ins>
                  Worst:     $O(n log n)$       
                  Best:      $O(n log n)$        
                  Average:   $O(n log n)$             
                
<ins>Space Complexity:</ins>	$O(1)$


**Advantages of Heap Sort:**  
= It is very Simple to understand as an Algorithm.     
= It Has Constant time Complexity so that it is very good for Larger Datasets.       
= Memory Usage Can be Minimal.
 
**Disadvantages of Heap Sort:**  
= Heap sort is costly.       
= Heap sort is Unstable Sorting Algorithm.        
= Not very efficient when working with highly complex data.    

