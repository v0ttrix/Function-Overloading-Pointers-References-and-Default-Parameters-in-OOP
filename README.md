# C++ Function Overloading, Pointers, References, and Default Parameters

## Overview
Professional C++ demonstration showcasing core Object-Oriented Programming concepts including function overloading, pointer/reference parameter passing, and default parameters.

## Technical Skills Demonstrated

### Core C++ Concepts
- **Function Overloading**: Multiple functions with same name, different signatures
- **Pointer Parameters**: Pass-by-pointer with null safety checks
- **Reference Parameters**: Pass-by-reference (preferred method)
- **Default Parameters**: Optional function parameters with default values
- **Struct Manipulation**: Custom data types and operations
- **Type-based Overloading**: Function overloading based on parameter types

### Professional Practices
- **Modern C++17**: Using latest language standards
- **Comprehensive Documentation**: Detailed function and parameter documentation
- **Error Handling**: Null pointer checks and exception safety
- **Code Organization**: Clean separation of interface and implementation
- **Build System**: Professional Makefile with proper compilation flags
- **Memory Safety**: Safe pointer operations and bounds checking

## Project Structure
```
Project1/
├── main.cpp      - Main demonstration program
├── utils.h       - Function declarations and struct definitions
└── utils.cpp     - Function implementations
Makefile          - Build configuration
README.md         - Project documentation
```

## Building and Running

### Prerequisites
- C++17 compatible compiler (g++, clang++)
- Make build system

### Build Instructions
```bash
make                    # Build the project
./function_overloading_demo  # Run the demonstration
make clean             # Clean build artifacts
```

## Features Demonstrated

### 1. Function Overloading
- `max(int, int)` - Two parameter maximum
- `max(int, int, int)` - Three parameter maximum  
- `max(int[])` - Array maximum
- `max(int[], int[])` - Maximum across two arrays

### 2. Parameter Passing Methods
- **Pointer-based**: `swap(int*, int*)` - Traditional C-style
- **Reference-based**: `swap(int&, int&)` - Modern C++ style
- **Struct operations**: Both pointer and reference versions for custom types

### 3. Default Parameters
- `multiply(int, int, int = 1)` - Third parameter optional
- Demonstrates function signature ambiguity resolution

### 4. Type-based Overloading
- `multiply(int, int, int)` - Integer multiplication
- `multiply(double, double)` - Floating-point multiplication

## Code Quality Features
- **Const Correctness**: Proper use of const parameters
- **Null Safety**: Pointer validation before dereferencing
- **STL Integration**: Using `std::swap` for efficient operations
- **Exception Safety**: Try-catch blocks in main function
- **Modern Formatting**: Consistent indentation and naming

## Learning Outcomes
This project demonstrates understanding of:
- C++ function overloading resolution rules
- Memory management with pointers and references
- Professional C++ coding standards
- Build system configuration
- Documentation best practices

## Recruitment Readiness
- ✅ Compiles without warnings with strict flags (-Wall -Wextra)
- ✅ Demonstrates multiple advanced C++ concepts
- ✅ Professional code organization and documentation
- ✅ Modern C++ standards compliance
- ✅ Proper error handling and safety checks
