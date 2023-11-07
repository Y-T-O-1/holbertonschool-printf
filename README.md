
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

### `_printf.c`
<details>
<summary>Program Info</summary>

## Program Description
This program features a custom implementation of the C standard library function `printf()`. This function, `_printf()`, is designed to replicate the basic functionalities of the standard `printf()` function, allowing users to output formatted data to the standard output.

### Function Descriptions

#### `int (*check_format(const char *format))(va_list)`
This function pointer is used to select the correct printing function based on the format specifier provided.

* `format:` The string containing potential format specifiers following a `%`.
* Return: A pointer to the function that corresponds to the format specifier, or NULL if the specifier is invalid.

#### `int _printf(const char *format, ...)`
This is the main function that mimics the standard printf() behavior.

* `format:` The format string that contains the text to be written to stdout. It can optionally contain embedded format specifiers that are replaced by the values specified in subsequent additional arguments.
* Return: The number of characters printed (excluding the null byte used to end output to strings).

### Usage
To use the `_printf()` function in your code, include the header file `main.h` and call `_printf()` with the desired format string and arguments, just as you would with the standard `printf()` function.
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

### `_putchar.c`

<details>
<summary>Program Info</summary>

## Program Description

This simple module contains the `_putchar()` function, which is a custom implementation that writes a single character to standard output `(stdout).`

## Function Descriptions

#### `int _putchar(char c)`
This function takes a character as an argument and writes it to standard output.

* `@c:` The character to be written to `stdout.`
* Return: On success, returns 1. On error, returns -1 and the appropriate error is set to indicate the cause of the error.

### Usage 
To use the `_putchar()` function in your code, include the header file `main.h` and call `_putchar()` with the desired character to be printed.
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

### `print_c`

<details>
<summary>Program Info</summary>

## Program Description

This program is responsible for handling character conversion (%c) in our custom `_printf()` function implementation. It's designed to print a single character passed to the `_printf()` function when it encounters the `%c` format specifier.

## Function Description

#### `int print_c(va_list c)`
A function that prints a single character.
* `@c:` A va_list argument that points to the character to be printed.
* Returns: Always 1 upon successful printing.

### Usage 

To use `print_c` within the `_printf()` function, include `main.h` and simply pass a character to `_printf()` with the `%c` format specifier. The `print_c` function will be called internally to print the character.

```c
#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'A');
    return 0;
}

```

</details>

### `print_percent`

<details>
<summary>Program Info</summary>

## Program Description

This part of the repository contains the `print_percent` function, a component of the custom `_printf()` function, which handles the printing of the percent symbol (%%) in a formatted string.

## Function Description 

#### `int print_percent(va_list percent)`
* `percent:` This parameter is not used since the percent symbol does not require an argument. It is there to maintain the function prototype compatibility with `va_list.`
* Returns: Always 1 to indicate one character (%) printed.

### Usage

The `print_percent` function is implicitly called by the `_printf()` function whenever the format specifier `%%` is encountered. It is not designed to be called directly in user code but is instead a utility function for `_printf()`'s internal operation.

```c
_printf("Display 100%% completed\n");
```

</details>

### `print_d`

<details>
<summary>Program Info</summary>

## Program Description

The `print_d` function is a custom implementation designed to extend the functionality of the `_printf()` function, allowing it to handle integer format specifiers. This function is tailored to convert an integer argument into its ASCII representation and output it to the standard output.

## Function Description

#### `int print_d(va_list arg)`
* `arg`: A `va_list` argument that represents a variadic argument list passed to the `_printf()` function. `print_d` specifically processes integer arguments.
* Returns: The total count of characters that have been printed to the standard output.

### Usage

`print_d` is internally invoked by the `_printf()` function when an integer format specifier (`%d` or `%i`) is detected within the format string. It is not meant to be called directly by the user, but is integrated into the `_printf()` to process and print integer values.

```c
_printf("The value is: %d\n", 42);
```

In this usage example, `_printf` will parse the format string, recognize the `%d` specifier, and internally call `print_d` to print `The value is: 42` to the standard output.

</details>





