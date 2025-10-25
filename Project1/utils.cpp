/**
 * Utility Functions Implementation
 * Professional C++ implementation demonstrating OOP concepts
 */

#include "utils.h"
#include <algorithm>
#include <utility>

/**
 * Returns maximum of two integers
 * @param x First integer
 * @param y Second integer  
 * @return Maximum value
 */
int max(int x, int y) {
    return (x > y) ? x : y;
}

/**
 * Returns maximum of three integers using function overloading
 * @param x First integer
 * @param y Second integer
 * @param z Third integer
 * @return Maximum value
 */
int max(int x, int y, int z) {
    return max(max(x, y), z);
}

/**
 * Returns maximum value in an array
 * @param array Input array of integers
 * @return Maximum value in array
 */
int max(const int array[ARRAY_LENGTH]) {
    int maxValue = array[0];
    for (int i = 1; i < ARRAY_LENGTH; ++i) {
        if (array[i] > maxValue) {
            maxValue = array[i];
        }
    }
    return maxValue;
}

/**
 * Returns maximum value between two arrays
 * @param arrayOne First array
 * @param arrayTwo Second array
 * @return Maximum value across both arrays
 */
int max(const int arrayOne[ARRAY_LENGTH], const int arrayTwo[ARRAY_LENGTH]) {
    int maxOne = arrayOne[0];
    int maxTwo = arrayTwo[0];
    
    for (int i = 0; i < ARRAY_LENGTH; ++i) {
        if (arrayOne[i] > maxOne) maxOne = arrayOne[i];
        if (arrayTwo[i] > maxTwo) maxTwo = arrayTwo[i];
    }
    
    return (maxOne > maxTwo) ? maxOne : maxTwo;
}

/**
 * Swaps two integers using pointers
 * Demonstrates pointer parameter passing and dereferencing
 * @param num1 Pointer to first integer
 * @param num2 Pointer to second integer
 */
void swap(int* num1, int* num2) {
    if (num1 && num2) {  /* Null pointer check for safety */
        std::swap(*num1, *num2);
    }
}

/**
 * Swaps two integers using references
 * Demonstrates reference parameter passing (preferred method)
 * @param num1 Reference to first integer
 * @param num2 Reference to second integer
 */
void swap(int& num1, int& num2) {
    std::swap(num1, num2);
}

/**
 * Swaps two Location structs using pointers
 * @param location1 Pointer to first location
 * @param location2 Pointer to second location
 */
void swap(Location* location1, Location* location2) {
    if (location1 && location2) {  /* Null pointer check */
        std::swap(*location1, *location2);
    }
}

/**
 * Swaps two Location structs using references
 * @param location1 Reference to first location
 * @param location2 Reference to second location
 */
void swap(Location& location1, Location& location2) {
    std::swap(location1, location2);
}

/**
 * Multiplies integers with default parameter
 * Demonstrates default parameter usage (z defaults to 1)
 * @param x First integer
 * @param y Second integer
 * @param z Third integer (default = 1)
 * @return Product of all parameters
 */
int multiply(int x, int y, int z) {
    return x * y * z;
}

/**
 * Multiplies two double values
 * Demonstrates function overloading based on parameter types
 * @param x First double
 * @param y Second double
 * @return Product of the two doubles
 */
double multiply(double x, double y) {
    return x * y;
}
