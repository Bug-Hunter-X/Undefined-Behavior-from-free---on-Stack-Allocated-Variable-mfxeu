# Undefined Behavior in C: Freeing Stack Memory

This repository demonstrates a simple C program that exhibits undefined behavior due to the misuse of the `free()` function. The code attempts to free memory allocated on the stack, which is not managed by `malloc()` and leads to unpredictable results.

## The Bug

The bug lies in the `free(ptr)` line.  The variable `x` is allocated on the stack, not the heap. Therefore, calling `free()` on its address results in undefined behavior, possibly leading to a crash, memory corruption, or seemingly correct execution that may break later.