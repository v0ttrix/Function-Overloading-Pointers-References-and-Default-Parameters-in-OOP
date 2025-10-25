#!/bin/bash

echo "Improving C++ Function Overloading Project for recruitment readiness..."

PROJECT_DIR="/home/v0ttrix/Function-Overloading-Pointers-References-and-Default-Parameters-in-OOP"
cd "$PROJECT_DIR"

# Create professional Makefile
cat > Makefile << 'EOF'
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g
TARGET = function_overloading_demo
SRCDIR = Project1
OBJDIR = obj

SOURCES = $(SRCDIR)/main.cpp $(SRCDIR)/utils.cpp
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

$(shell mkdir -p $(OBJDIR))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(TARGET)

.PHONY: all clean
EOF

# Create improved utils.h with better documentation
cat > Project1/utils.h << 'EOF'
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
EOF

# Create improved utils.cpp with better implementation
cat > Project1/utils.cpp << 'EOF'
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
    return max(max(arrayOne), max(arrayTwo));
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
EOF

# Create improved main.cpp with better structure and documentation
cat > Project1/main.cpp << 'EOF'
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
EOF

echo "Building improved project..."
make clean && make

if [ $? -eq 0 ]; then
    echo "✓ Project improved and built successfully!"
    echo "✓ Professional C++ practices implemented"
    echo "✓ Ready for recruitment portfolio"
    echo ""
    echo "Run './function_overloading_demo' to test"
else
    echo "Build failed - checking issues..."
fi
