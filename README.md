
# _printf Project

**Author: Kyle Headley and Benjamin Carter**




## Description
This Project was a mini-recreation of printf. 




## Features

The _printf() function can handle the following conversion specifiers:
* %c: Characters
* %s: Strings
* %%: Percent sign
* Additional specifiers can be easily integrated by adding to the print_t array.
* The function manages a variable number of arguments using the standard C stdarg.h library.


## File List

### _printf.c
<details>
<summary>Program Info</summary>

## Program Description
This program features a custom implementation of the C standard library function printf(). This function, _printf(), is designed to replicate the basic functionalities of the standard printf() function, allowing users to output formatted data to the standard output.

### Function Descriptions

#### int (*check_format(const char *format))(va_list)
This function pointer is used to select the correct printing function based on the format specifier provided.

* format: The string containing potential format specifiers following a %.
* Return: A pointer to the function that corresponds to the format specifier, or NULL if the specifier is invalid.

#### int _printf(const char *format, ...)
This is the main function that mimics the standard printf() behavior.

* format: The format string that contains the text to be written to stdout. It can optionally contain embedded format specifiers that are replaced by the values specified in subsequent additional arguments.
* Return: The number of characters printed (excluding the null byte used to end output to strings).

### Usage
To use the _printf() function in your code, include the header file main.h and call _printf() with the desired format string and arguments, just as you would with the standard printf() function.
```c
#include "main.h"

int main(void) {
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, World!");
    _printf("Percent: %%\n");
    return 0;
}
```



</details>

### _putchar.c
<details>
<summary>Program Info</summary>

## Program Description

This simple module contains the _putchar() function, which is a custom implementation that writes a single character to standard output (stdout).

## Function Descriptions

#### int _putchar(char c)
This function takes a character as an argument and writes it to standard output.

* @c: The character to be written to stdout.
* Return: On success, returns 1. On error, returns -1 and the appropriate error is set to indicate the cause of the error.

### Usage 
To use the _putchar() function in your code, include its header file (if it's not standalone) and call _putchar() with the desired character to be printed.
```c
#include "header_file.h" // Replace with the actual header file name if applicable

int main(void) {
    _putchar('H');
    _putchar('e');
    _putchar('l');
    _putchar('l');
    _putchar('o');
    _putchar('\n');
    return 0;
}
```

</details>



