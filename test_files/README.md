# Test Directory for _printf

This directory contains test files for the custom `_printf` function. These tests are designed to verify the functionality and correctness of the `_printf` implementation across various use cases and input scenarios.

## Getting Started

These test files are standalone C programs that use the `_printf` function from the parent project. To run these tests, you will need to compile them with the source files that contain the `_printf` implementation.

### Prerequisites

- A C compiler (such as `gcc`)
- Source files from the `_printf` project

### Compiling the Tests

To compile an individual test file, use the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.h _printf.c _putchar.c print_c.c print_s.c print_d.c print_percent.c test_file.c -o test_file
```

Replace `test_file.c` with the actual name of the test file you wish to compile.

If you have a Makefile set up, you can also use that to automate the testing process.

## Test Files

The test files are named according to the functionality they are testing or their sequence in testing. Below is the list of test files available:

- `dtest.c`: Tests decimal conversion specifier `%d`.
- `itest.c`: Tests integer conversion specifier `%i`.
- `main_test.c`: General test for various specifiers and edge cases.
- `main_test2.c`: Additional tests for different combinations of format specifiers.
- `test.c`: Basic functionality tests for the `_printf` function.
- `testfile.c`: A file with a series of miscellaneous tests.

## Running the Tests

After compiling a test file, you can run the test by executing the resulting binary:

```sh
./test_file
```

## Contributing Tests

If you would like to contribute additional tests, please ensure they follow the existing naming conventions and are placed within this directory. Provide a brief comment at the top of the test file describing what it tests for.

## Reporting Issues

If you encounter any issues while running these tests, please report them on the main project repository's issue tracker with a detailed description of the problem and the test file name.

Thank you for helping us improve the `_printf` function!

