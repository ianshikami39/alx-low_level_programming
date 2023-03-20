#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * File: 3-function_like_macro.h
 * Desc: Defines a function-like macro ABS(x)
 * that computes the absolute value of a number x
 * the ternary operator is used to check if x is less than 0
 * if x is less than 0, the macro returns -x
 * if x is greater than or equal or equal to 0, the macro returns x
 */
#define ABS(x) ((x) < 0 ? -(x) : (x))

#endif
