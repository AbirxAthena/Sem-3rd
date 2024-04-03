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
