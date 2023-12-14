# Function
a block of code/starements that can be used repeatedly in a program

1. type of function
    - built-in function
    - user-defined function 
2. advantages of using functions
    - code reusability
    - code optimization
    - code modularity


## built-in function
functions that are already defined in the compiler
- example
    - printf()
    - scanf()
    - etc

## user defined function
a block of code that is defined by the user to perform a specific task.
- to create a user defined function, use the these three things
1. function declaration
2. function definition
2. function call
```c
// syntax for function declaration
return_type function_name (argument); //this can also be called a function prototype

// syntax for function definition
return_type function_name (arguments) {
    // body of the function
}

// function call
function_name(arguments);
```

```c
// example of function declaration
#include <stdio.h>
void my_function(int a, int b); // function declaration
void main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = my_function(a,b); // function call
    printf("%d",c);
}
void my_function(int a, int b){ // function definition
    return a+b;
}
```

## call by value/call by reference
- call by value
    - the value of the actual parameters is copied to the formal parameters
    - changes made to the formal parameters will not affect the actual parameters
- call by reference
    - the address of the actual parameters is copied to the formal parameters
    - changes made to the formal parameters will affect the actual parameters

```c
// call by value 
// opr. are performed on formal arguments and the actual arguments are not effected 

# include<stdio.h>
void swap(int,int);
void main(){
    int a,b; // a and b are actual arguments 
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("%d %d",a,b);
}
void swap(int x, int y){ // x and y are formal arguments 
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("%d %d",x,y);
//a and b are not effected by the swap function
// the value of a and b are copied to x and y
// the swap function is performed on x and y

}
```

### formal and actual arguments
- formal arguments
    - arguments that are pass in a function definition
- actual arguments
    - arguments that are pass in a function call


        
### call by value
In this type, the actual arguments will be passed to the formal arguments and operation will be done on Formula arguments. If any changes in the formal arguments, it does not have an effect on the actual arguments because the formal arguments are the photocopy of the actual arguments. Hence, when a function is called by the Call-by-value, it does not effect the actual content of the argument.
