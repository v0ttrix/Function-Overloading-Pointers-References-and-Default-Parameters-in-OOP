#include "utils.h"
#include <iostream>
using namespace std;

int max(int x, int y) {
    return (x > y) ? x : y;
}

int max(int x, int y, int z) {
    return max(max(x, y), z);
}

int max(int arrayOne[ARRAY_LENGTH]) {
    int maxNum = arrayOne[0];
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        if (arrayOne[i] > maxNum) {
            maxNum = arrayOne[i];
        }
    }
    return maxNum;
}

int max(int arrayOne[ARRAY_LENGTH], int arrayTwo[ARRAY_LENGTH]) {
    int maxNum1 = max(arrayOne);
    int maxNum2 = max(arrayTwo);
    return max(maxNum1, maxNum2);
}


void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swap(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}


void swap(Location* location1, Location* location2) {
    double tempLat = location1->latitude;
    location1->latitude = location2->latitude;
    location2->latitude = tempLat;

    double tempLong = location1->longitude;
    location1->longitude = location2->longitude;
    location2->longitude = tempLong;
}

void swap(Location& location1, Location& location2) {
    double tempLat = location1.latitude;
    location1.latitude = location2.latitude;
    location2.latitude = tempLat;

    double tempLong = location1.longitude;
    location1.longitude = location2.longitude;
    location2.longitude = tempLong;
}


int multiply(int x, int y, int z) {
    return x * y * z;
}

double multiply(double x, double y) {
    return x * y;
}

//int multiply(int x, int y) {//function overload
//    int product = x * y; 
//	return product; 
//}