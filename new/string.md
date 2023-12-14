# string
collection of characters enclosed in single quotes or double quotes. there is no separate datatype for storing string so we can store string in char array.
- the format specifier for string is %s.
there are 3 ways to get the string

1. using scanf() function

    using format specifier %s in scanf() function we can get the string from the user.

    disadvantage: scanf() function will stop reading the string when it encounters space.

    syntax: `scanf("%s", str);`
1. using gets() function

    gets() function will read the string until he presses enter (it encounters newline character).

    note: after the version of turbo c11 gets() function is removed from the c standard library.
    
    disadvantage: gets() function will not check the size of the string. so there is a chance of buffer overflow.

    syntax: `gets(char *str);`
1. using scanf() with XOR

    scanf() function will stop reading the string when it encounters space. so we can use XOR operator to read the string until it encounters newline character.
    
    syntax: `scanf("%[^\\n]", str);`



## built-in functions in string.h

1. strlen() function -

    strlen() function will return the length of the string.

    syntax: `strlen(str);`

2. strcpy() function -

    strcpy() function will copy the string from source to destination.

    syntax: `strcpy(dest, src);`

4. scrncpy() function -

    scrncpy() function will copy the string from source to destination upto n characters.

    syntax: `strncpy(dest, src, n);`

3. strcat() function -

    strcat() function will concatenate the string from source to destination.

    syntax: `strcat(dest, src);`

5. strncat() function -

    strncat() function will concatenate the string from source to destination upto n characters.

    syntax: `strncat(dest, src, n);`

6. strcmp() function - 

    strcmp() function will compare the string from source to destination.

    syntax: `strcmp(str1, str2);`

7. strncmp() function -

    strncmp() function will compare the string from source to destination upto n characters.

    syntax: `strncmp(str1, str2, n);`

8. strchr() function -
    
    strchr() function will return the pointer to the first occurrence of the character in the string.
    
    syntax: `strchr(str, ch);`

9. strrchr() function -
    
    strrchr() function will return the pointer to the last occurrence of the character in the string.
    
    syntax: `strrchr(str, ch);`

10. strstr() function -
        
    strstr() function will return the pointer to the first occurrence of the string in the string.
        
    syntax: `strstr(str, substr);`


