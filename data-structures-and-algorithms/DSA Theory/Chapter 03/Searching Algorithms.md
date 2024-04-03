# Searching Algorithms
Searching is an application which helps in finding a data in the Collection of data, Searching can be done in many datatypes Arrays, Trees, List etc.  
It's primary task is to find if a particular data exists or not inside that Collection of data, and also to retrives the data or to Find it's Location.  
It is used as an application of Data Analysis,Desicion Making Process, Information Retrival and More.  

## Linear Search:       
+ It is the simplest searching algorithm used.
+ It is a Sequential searching algorithm.         
+ Is is done by starting from the start and then comparing data till the exact data is matched.  
+ It cannot work on Mainly Larger Datatypes because it takes alot of Time and Also Lot of Recourses.   

**Process of Linear Search**
+ Let's Start From the Beginning.
+ It Uses a for Loop and start Searching and Matches the Element of that Array.
+ If it doesn't match it moves ahead.
+ And that's how it is Matched.
+ If no Element is Found till the End of the Array Then it will Give no Return.   

**Example**
#### Let's Take a Array: [60, 90, 10, 30, 50, 40]       
#### And Key: 30

+ So, Let's Start From the Start which is = Array[0].
+ Key is Compared to First Element (60 = 30, No).
+ So the Key Moves to Second Element (Array[1]) & Compares it (90 = 30, No).
+ Again Moves to the Third Element (Array[2]) & Compares it (30 = 30, Yes).
+ So it will Return the Value of that Index where Element is Found (In this case = 2).

#### Key is at the Index = 2

### <u> **Complexity of Linear Search:** </u>  
#### Best Time Complexity: $O(1)$  
#### Worst Time Complexity: $O(N)$  
#### Average Time Complexity: $O(N)$  
#### Auxiliary Space: $O(1)$  

**Advantages of Linear Search:**  
= It is easy to Understand and Implement.  
= It works Best on Small Size Collection of Data.    
= It Doesn't Matter Whether the Collection is Sorted or Not.   
= It Doesn't Require Additional Memory Allocation

**Disadvantages of Linear Search:**  
= It's Time Complexity is O(N) Which Makes it Very Slow.    
= It's Not Well Suited for Larger Datasets.    

**When to use Linear Search?**     
= When We Are Dealing with Smaller Datasets.     
= When Searching in [contiguous memory](https://pastemd.netlify.app/pastes/tF4R22euoWRVDp1BJD3e).

### Algorithm for Linear Search
```
LinearSearch(arr[], target)
1. Set found to false.
2. Initialize index to -1.
3. Iterate through each element in the array arr[]:
     a. If the current element is equal to the target:
          i. Set found to true.
          ii. Set index to the index of the current element.
          iii. Break out of the loop.
4. If found is true:
     - Return the index of the target element.
5. Else:
     - End.
```

## Binary Search:       
+ It is used when the Array or the Collection is Sorted.
+ It works on Divide and Conquer Method.
+ It Usually Divides the Time Complexity of the Searching.

**Process of Binary Search**
+ Let's Start From the Beginning.
+ It uses to Divide the Array from the Middle and Name That Element "Mid"
+ Then The Mid is Compared with the Key. [If the Mid Checks Out We Got Our Index].
+ Otherwise The Mid is then Compared with the Key.
+ + If the Mid is Greater than the Key the Right Remaining Part is Selected.
+ + If the Mid is Smaller than the Key the Left Remaining Part is Selected.
+ This process is continued until the key is found or the total search space is exhausted.

**Example**
#### Let's Take a Array: [2, 3, 5, 7, 10, 19, 25, 87, 90, 93]       
#### And Key: 7

+ Step 1: 
Set the array as [2, 3, 5, 7, 10, 19, 25, 87, 90, 93].     
Set the key as 7.     
Set the left pointer to the first index of the array (0).     
Set the right pointer to the last index of the array (9).     
Calculate the mid index as (left + right) / 2, which is initially (0 + 9) / 2 = 4.     
+ Step 2: 
Compare the key (7) with the element at the mid index (10).     
Since 7 is less than 10, the search range reduces to the left half of the array.     
+ Step 3: 
Update the right pointer to mid - 1, which is 3.     
Calculate the new mid index as (left + right) / 2 = (0 + 3) / 2 = 1.     
+ Step 4:      
Compare the key (7) with the element at the new mid index (3).     
Since 7 is greater than 3, the search range reduces to the right half of the array.     
+ Step 5: 
Update the left pointer to mid + 1, which is 2.     
Calculate the new mid index as (left + right) / 2 = (2 + 3) / 2 = 2.     
+ Step 6:
Compare the key (7) with the element at the new mid index (5).     
Since 7 is greater than 5, the search range reduces to the right half of the array.     
+ Step 7:
Update the left pointer to mid + 1, which is 3.     
Update the mid index as (left + right) / 2 = (3 + 3) / 2 = 3.     
+ Step 8:
Compare the key (7) with the element at the new mid index (7).     
Since the key matches the element at the mid index, the search is successful.     
+ Step 9:
The key 7 is found at index 3 in the array.     

### <u> **Complexity of Linear Search:** </u>  
#### Best Time Complexity: $O(1)$  
#### Worst Time Complexity: $O(log N)$  
#### Average Time Complexity: $O(log N)$  
#### Auxiliary Space: $O(1)$  

**Advantages of Binary Search:**  
= It is Very Fast in Terms of Searching.    
= Faster than Many Searching Like Exponential Search Etc with Same Time Complexity.    
= It works Best on the Outer Storage Like Harddisk Etc.
= Works Best on Larger DataTypes

**Disadvantages of Binary Search:**  
= The Array or The Collection of Data Need to Be Sorted.     
= The Collection must be Stored in a [contiguous memory](https://pastemd.netlify.app/pastes/tF4R22euoWRVDp1BJD3e).    
= The Array Must be Comparable So it Can be Sorted.    

### Algorithm for Binary Search
```
BinarySearch(arr[], target)
1. Set left to 0 and right to the length of the array - 1.
2. While left is less than or equal to right:
     a. Set mid to the midpoint between left and right: (left + right) / 2.
     b. If the element at mid is equal to the target:
          i. Return mid as the index of the target.
     c. If the element at mid is greater than the target:
          i. Set right to mid - 1.
     d. If the element at mid is less than the target:
          i. Set left to mid + 1.
3. If the target is not found after the loop:
     - End
```
