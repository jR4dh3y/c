# Recursion
Recursion is a process in which a function call itself.

the recursive function are of two types 
1. direct recursion
2. indirect recursion

### direct recursion
When a function call itself, this type of recursion is direct. In this type there is only one function involved. 
Example:
```c
void fun()
{
    // some code
    fun();
    // some code
}
int main()
{
    fun();
    return 0;
}
```

### indirect recursion
When a function call another function and that function call the first function, this type of recursion is indirect. In this type there are more than one function involved.

Example:
```c
void fun1()
{
    // some code
    fun2();
    // some code
}
void fun2()
{
    // some code
    fun1();
    // some code
}
int main()
{
    fun1();
    return 0;
}
```
