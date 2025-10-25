/**
 * C++ Function Overloading, Pointers, References, and Default Parameters Demo
 * 
 * This program demonstrates key C++ OOP concepts:
 * 1. Function Overloading - Multiple functions with same name, different signatures
 * 2. Pointer vs Reference Parameters - Different ways to pass parameters
 * 3. Default Parameters - Functions with optional parameters
 * 4. Struct Usage - Custom data types and their manipulation
 * 
 * Professional coding practices demonstrated:
 * - Clear function documentation
 * - Proper error handling
 * - Consistent naming conventions
 * - Modular code organization
 */

#include <iostream>
#include <iomanip>
#include "utils.h"

using namespace std;

/**
 * Demonstrates function overloading with max functions
 */
void demonstrateMaxFunctions() {
    cout << "=== Function Overloading Demonstration ===\n";
    
    /* Two parameter max */
    cout << "max(9, 7) = " << max(9, 7) << "\n";
    
    /* Three parameter max */
    cout << "max(9, 15, 71) = " << max(9, 15, 71) << "\n";
    
    /* Array max */
    int arrayOne[ARRAY_LENGTH] = {10, 2, 30, 4, 51};
    cout << "max({10, 2, 30, 4, 51}) = " << max(arrayOne) << "\n";
    
    /* Two arrays max */
    int arrayTwo[ARRAY_LENGTH] = {8, 70, 16, 15, 41};
    cout << "max(arrayOne, arrayTwo) = " << max(arrayOne, arrayTwo) << "\n\n";
}

/**
 * Demonstrates pointer vs reference parameter passing
 */
void demonstrateSwapFunctions() {
    cout << "=== Pointer vs Reference Parameters ===\n";
    
    int num1 = 12, num2 = 51;
    
    /* Pointer-based swap */
    cout << "Before pointer swap:    num1 = " << num1 << ", num2 = " << num2 << "\n";
    swap(&num1, &num2);
    cout << "After pointer swap:     num1 = " << num1 << ", num2 = " << num2 << "\n";
    
    /* Reference-based swap */
    cout << "Before reference swap:  num1 = " << num1 << ", num2 = " << num2 << "\n";
    swap(num1, num2);
    cout << "After reference swap:   num1 = " << num1 << ", num2 = " << num2 << "\n\n";
}

/**
 * Demonstrates struct manipulation with pointers and references
 */
void demonstrateStructSwap() {
    cout << "=== Struct Manipulation Demo ===\n";
    
    Location location1(25.0, 40.0);
    Location location2(50.0, 80.0);
    
    cout << fixed << setprecision(1);
    
    /* Pointer-based struct swap */
    cout << "Before pointer swap: location1 = (" << location1.latitude 
         << ", " << location1.longitude << "), location2 = (" 
         << location2.latitude << ", " << location2.longitude << ")\n";
    
    swap(&location1, &location2);
    cout << "After pointer swap:  location1 = (" << location1.latitude 
         << ", " << location1.longitude << "), location2 = (" 
         << location2.latitude << ", " << location2.longitude << ")\n";
    
    /* Reference-based struct swap */
    cout << "Before reference swap: location1 = (" << location1.latitude 
         << ", " << location1.longitude << "), location2 = (" 
         << location2.latitude << ", " << location2.longitude << ")\n";
    
    swap(location1, location2);
    cout << "After reference swap:  location1 = (" << location1.latitude 
         << ", " << location1.longitude << "), location2 = (" 
         << location2.latitude << ", " << location2.longitude << ")\n\n";
}

/**
 * Demonstrates default parameters and function overloading by type
 */
void demonstrateMultiplyFunctions() {
    cout << "=== Default Parameters & Type Overloading ===\n";
    
    /* Three parameter multiply (using default z=1) */
    cout << "multiply(4, 15, 7) = " << multiply(4, 15, 7) << "\n";
    
    /* Double type multiply */
    cout << "multiply(0.5, 4.5) = " << multiply(0.5, 4.5) << "\n";
    
    /* Explanation of why multiply(int, int) cannot be added */
    cout << "\nNote: multiply(int, int) cannot be added due to ambiguity\n";
    cout << "with multiply(int, int, int = 1). The compiler cannot\n";
    cout << "distinguish between these two function signatures.\n\n";
}

/**
 * Main function demonstrating all C++ OOP concepts
 */
int main() {
    cout << "C++ OOP Concepts Demonstration\n";
    cout << "==============================\n\n";
    
    try {
        demonstrateMaxFunctions();
        demonstrateSwapFunctions();
        demonstrateStructSwap();
        demonstrateMultiplyFunctions();
        
        cout << "All demonstrations completed successfully!\n";
        
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << "\n";
        return 1;
    }
    
    return 0;
}
