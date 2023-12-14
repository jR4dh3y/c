# Structure 
- user defined data_type.
- using structure we can define a data type which holds the value of different data types.

## creating a structure
to create a user defined datatype which holds the value of different data types we use structure.

- define a structure
- declare a variable of structure type
- initialize the members of structure
- access the members of structure

syntax:
```c
struct structure_name  {

    data_type member1;  // members of structure
    data_type member2;
};
```
example:
```c
struct student {

    int roll_no;
    char name[20];
    float marks;
};
```
# union
same as structure but the memory is shared by all the members of union and only one type of member can be accessed at a time.
