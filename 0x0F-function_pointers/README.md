This project explores the concept of function pointers in C. Function pointers allow you to dynamically call functions at runtime, which is particularly useful for creating callback mechanisms and implementing dynamic behavior.

OVERVIEW

This project demonstrate how to use function pointers effectively. I’ve implemented several examples to showcase their usage.

FILES

0-print_name.c - prints a name.

1-array_iterator.c - executes a function given as a parameter on each element of an array.

2-int_index.c - searches for an integer.

3-main.c - contain your main function only.

3-op_functions.c - contain the 5 following functions:
op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

3-get_op_func.c - should contain the function that selects the correct function to perform the operation asked by the user.

3-calc.h - contains all the function prototypes and data structures used by the program.
