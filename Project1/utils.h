#pragma once

#define ARRAY_LENGTH	5

// Struct for representing a geographical location
struct Location {
    double latitude, longitude;
};

// Function declarations for Question 1
int max(int x, int y);
int max(int x, int y, int z);
int max(int arrayOne[ARRAY_LENGTH]);
int max(int arrayOne[ARRAY_LENGTH], int arrayTwo[ARRAY_LENGTH]);

// Function declarations for Question 2
void swap(int* num1, int* num2);
void swap(int& num1, int& num2);

// Function declarations for Question 3
void swap(Location* location1, Location* location2);
void swap(Location& location1, Location& location2);

// Function declarations for Question 4
int multiply(int x, int y, int z = 1);
double multiply(double x, double y);

//int multiply(int x, int y); function overload