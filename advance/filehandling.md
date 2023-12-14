# file Handling in C
file handling in c involves oprations such as creating,opening,reading,writing and closing a file. the C standard library provides functions and types for file handling in the <stdio.h> header.
## Opening a file
a file is opened using the fopen() function defined in the stdio.h header file as follows:
```c
variable = fopen("{file path+filename+extension}","{mode}");
```
    