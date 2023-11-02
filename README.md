
# _printf Project

**Author: Kyle Headley and Benjamin Carter**




## Description
This program features a custom implementation of the C standard library function printf(). This function, _printf(), is designed to replicate the basic functionalities of the standard printf() function, allowing users to output formatted data to the standard output.




## Features

The _printf() function can handle the following conversion specifiers:
* %c: Characters
* %s: Strings
* %%: Percent sign
* Additional specifiers can be easily integrated by adding to the print_t array.
* The function manages a variable number of arguments using the standard C stdarg.h library.


## File List

#### _printf.c
<details>
<summary>Click Me</summary>

## Function Descriptions

#### int (*check_format(const char *format))(va_list)
This function pointer is used to select the correct printing function based on the format specifier provided.

* format: The string containing potential format specifiers following a %.
* Return: A pointer to the function that corresponds to the format specifier, or NULL if the specifier is invalid.

#### int _printf(const char *format, ...)
This is the main function that mimics the standard printf() behavior.

* format: The format string that contains the text to be written to stdout. It can optionally contain embedded format specifiers that are replaced by the values specified in subsequent additional arguments.
* Return: The number of characters printed (excluding the null byte used to end output to strings).

</details>




