# ARRAY
collection of similar data type element stored in a single variable
## array declaration
it is similar to variable declaration but here we mention the size of the array.
- syntax: `datatype arrayname[size];
## array initialization
user can able to assign the values to the array while declaring the array by using {} braces.
```c
int arr[5]={1,2,3,4,5};
```

## array processing
storing the value to the array or accessing the value from the array is called array processing. It is done by using looping statements. Mostly we use for loop 

```c
//storing the value to the array
int a[5];
for(int i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
```
```c
//printing the array
int a[5];
for(int i=0;i<5;i++)
{
    printf("%d",a[i]);
}
```
## array operations
- inserting
- deleting
- searching
- sorting
- merging

    ## inserting
    inserting the element to a particular position in the array is called inserting.

    ## deleting 
    deleting the element from the array is called deleting. after deleting the element the array will automatically shift.

    ## searching
    searching the element in the array is called searching. we can use linear search or binary search.

    ## sorting
    arranging the array elements in acending or decending order 
    - bubble sorting
    - selection sorting
    - insertion sorting 
    - quick sorting
    - heap sorting

    ### bubble sorting 
    number of iterations n-1, compare 2 elements 
