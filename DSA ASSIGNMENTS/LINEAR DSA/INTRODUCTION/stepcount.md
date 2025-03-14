# 1.CONSTANT COMPLEXITY

Algorithm : Accessing array elements using an index.

Step 1: Start

Step 2: Declare an array with n elements

Step 3: Display an array element using its index

Step 4: End

Program Step Count

For declaration and display the step count is O(1)  for each step.

Complexity : Since it is a constant operation, the complexity is O(1)

2.LINEAR COMPLEXITY

Algorithm: Sum of Array Elements

Step 1: Start

Step 2: Initialize a variable sum to 0.

Step 3: For each element i from 0 to n-1 , add the value of arr[i] to sum.

**Step 4:** Return the value of sum.

**Step 5:** End

Program Step Count

**Step 2 :** for initialization, the program step count is O(1) since it is a constant operation.

**Step 3 :** for the "for loop", the program step count is O(n) since it runs n times.

**Step 4 :** returning the value of sum is a constant operation therefore the program step count is O(1).

## **Complexity : The loop runs n times , so total complexity is O(n).**



# **3.QUADRATIC COMPLEXITY**

Algorithm: A nested loop

**Step 1:** Start

**Step 2:** For each i from 0 to n-1 do:

**Step 3:** For each j from 0 to n-1 do:

**Step 4:** Display the value of j. 

**Step 5:** End

Program Step Count

**Step 2:** for initialization of “i”,the step count is O(1) since it is a constant operation then condition’s step count is O(n) since it runs n times.

**Step 3:** for initialization of “j”,the step count is O(1) since it is a constant operation then condition’s step count is O(n) since it runs n times.

**Step 4:** for output, the program step count is O(1) since it is a constant operation.

Complexity : Since the the inner loop runs n times for each iteration of the outer loop, total complexity is O(nxn) hence O(n2).

# **4.LOGARITHMIC COMPLEXITY**

Algorithm : Binary Search

**Step 1:** Start

**Step 2:** Declare variables, arr,left,right,mid and key.

**Step 3:** While left <= right do:

**Step 3:** Calculate mid as left + (right - left) / 2. 

**Step 4:** If arr[mid] == key: 

**Step 5:** Return mid (the index where the key is found). 

**Step 6:** Else If arr[mid] < key: 

**Step 7:** Set left = mid + 1. 

**Step 8:** Else: 

**Step 9:** Set right = mid - 1. 

**Step 10:** Return -1 (if the key is not found).

**Step 11:** End

Program Step Count

**Step 2:** While left <= right do:
    • Time Complexity: This step involves a loop that runs as long as the range between left and right is valid, and this depends on how the search space is reduced at each iteration.
        ◦ For each iteration of the loop, the search space is halved. This results in a logarithmic reduction of the search space. 
        ◦ In the worst case, the loop runs log₂(n) times where nn is the size of the array. 
So, the overall time complexity for this step is O(log ⁡n)O(\log n).

**Step 2.1: Calculate mid as left + (right - left) / 2
    • Time Complexity: O(1)O(1)
This is a simple calculation that happens in constant time. 

**Step 2.2: If arr[mid] == key
    • Time Complexity: O(1)O(1)
This is a comparison between the middle element and the key. It is done in constant time. 

**Step 2.3: Else If arr[mid] < key
    • Time Complexity: O(1)O(1)
This is another comparison to decide whether to search in the left or right half. This step is done in constant time. 

**Step 2.3.1: Set left = mid + 1
    • Time Complexity: O(1)O(1)
This is a simple assignment operation that takes constant time.

**Step 2.4: Else
    • Time Complexity: O(1)O(1)
This is the case where arr[mid] > key, and again, it takes constant time to evaluate. 

**Step 2.4.1: Set right = mid - 1
    • Time Complexity: O(1)O(1)
This is another assignment operation that takes constant time. 

Step 3:Return -1 (if the key is not found)
    • Time Complexity: O(1)O(1)
This is the final return statement, which occurs when the loop terminates, and it takes constant time. 

**Step 4:** End
    • Time Complexity: O(1)O(1)
The end of the algorithm also takes constant time. 
Overall Time Complexity:
    • The main loop runs O(log⁡ n)O(\log n) times, as the search space is halved with each iteration. 
    • Within each iteration, every operation (calculation, comparison, assignment) takes constant time O(1)O(1). 
Thus, the overall time complexity of the binary search algorithm is: O(log ⁡n)
This makes binary search highly efficient for searching in sorted arrays, as it significantly reduces the number of steps compared to a linear search, which would have O(n)O(n) time complexity.




