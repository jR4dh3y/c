<h1><p align="center"> DSA IN C </p></h1>

1. [DSA](#dsa)
2. [ALGORITHMS AND FLOWCHARTS](#dsa)
1. [TIME COMPLEXITY](#time-complexity)
1. [2D ARRAYS](#2d-arrays)
1. SORTING ALGORITHMS
1. SEARCHING ALGORITHMS


## DSA
- A data structure ia a fundamental concept of computer science and software engineering.
- it is a way of organizing, storing, and managing data effectively to perform various operations efficiently.
- data structures provide a means to structute and organize data in a way that facilitates efficient access and modification and retrieval.
- dsa stands for "data  strructure algorithm".
- dsa involves the study of data structures which are used to store and manage data, and alfotithms which are step by step instructions to solve a specific problem.
- eg: bubble sort algorithm, binary search algorithm, seclection sort 


## TIME COMPLEXITY
- time complexity is a measure of the amount of time required to run an algorithm takes to run a function of the size of its input.
- it is often expressed using **big O notation**.
    ### O(1) - constant time
    - example: accessing an array element by index and arthamatic operations
    ### O(n) - linear time
    - example: scanning or searching a list or array or using a for loop
    ### O(n^2) - quadratic time
    - example: nested loops, selection sort, bubble sort
    ### O(log n) - logarithmic time
    



## 2D ARRAYS
- 2d arrays are also called as matrix.
- 2d arrays are used to store multiple values in a single variable.
- 2d arrays are declared as data_type array_name[rows][columns];
```C
//example of 2d array declaration
int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
printf("%d", arr[0][2]); //prints 3
```
```

## ARRAY
- in c, an array is a collection of elements of the same type stored in contiguous memory locations.
- eash element in the array is accessed using an index or subscript.
- arrays are used to store and manupulate multiple values in a single variable name.
### Declaration and Initializating of array
- data_type array_name[ array_size ] = {value1, value2, value3, ...};

```c 
//exampe of array declaration
int arr[5] = {1, 2, 3, 4, 5}; 
```
- array elements are accessed using index.
- index starts from 0 to size-1.
- you can access array elements using square brackets [] 


