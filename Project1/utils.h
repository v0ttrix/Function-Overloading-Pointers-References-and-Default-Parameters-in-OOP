/**
 * Utility Functions Header
 * Demonstrates C++ OOP concepts: Function Overloading, Pointers, References, Default Parameters
 * 
 * This header showcases professional C++ programming practices including:
 * - Function overloading with different parameter types and counts
 * - Pointer and reference parameter passing
 * - Default parameter values
 * - Proper struct definitions and usage
 */

#ifndef UTILS_H
#define UTILS_H

/* Constants */
constexpr int ARRAY_LENGTH = 5;

/**
 * Location struct representing geographical coordinates
 * Demonstrates struct usage in C++ with proper member naming
 */
struct Location {
    double latitude;
    double longitude;
    
    /* Default constructor for initialization */
    Location(double lat = 0.0, double lon = 0.0) : latitude(lat), longitude(lon) {}
};

/* Function Overloading Demonstrations */

/**
 * Max function overloads - demonstrates function overloading with different signatures
 */
int max(int x, int y);
int max(int x, int y, int z);
int max(const int array[ARRAY_LENGTH]);
int max(const int arrayOne[ARRAY_LENGTH], const int arrayTwo[ARRAY_LENGTH]);

/**
 * Swap function overloads - demonstrates pointer vs reference parameter passing
 */
void swap(int* num1, int* num2);           /* Pointer-based swap */
void swap(int& num1, int& num2);           /* Reference-based swap */
void swap(Location* location1, Location* location2);  /* Pointer-based struct swap */
void swap(Location& location1, Location& location2);  /* Reference-based struct swap */

/**
 * Multiply function overloads - demonstrates default parameters and type overloading
 */
int multiply(int x, int y, int z = 1);     /* Default parameter demonstration */
double multiply(double x, double y);       /* Type-based overloading */

#endif /* UTILS_H */
