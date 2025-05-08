#include <iostream>
#include "utils.h"
using namespace std;

int main() {
    
    cout << "Question-1:" << endl;
    cout << "The max of 9 and 7 is " << max(9, 7) << endl;
    cout << "The max of 9, 15, and 71 is " << max(9, 15, 71) << endl;

    int arrayOne[ARRAY_LENGTH] = { 10, 2, 30, 4, 51 };
    cout << "The max of the array {10, 2, 30, 4, 51} is " << max(arrayOne) << endl;

    int arrayTwo[ARRAY_LENGTH] = { 8, 70, 16, 15, 41 };
    cout << "The max of the two given arrays is " << max(arrayOne, arrayTwo) << endl;

    cout << "\nQuestion-2:" << endl;

    int num1 = 12, num2 = 51;
    cout << "Before using the pointer swap function   num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(&num1, &num2);
    cout << "After using the pointer swap function    num1 = " << num1 << ", num2 = " << num2 << endl;

    cout << "Before using the reference swap function num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1, num2);
    cout << "After using the reference swap function  num1 = " << num1 << ", num2 = " << num2 << endl;

    cout << "\nQuestion-3:" << endl;

    Location location1 = { 25, 40 };
    Location location2 = { 50, 80 };
    cout << "Before using the pointer swap function: location1 = (" << location1.latitude << "," << location1.longitude
        << "), location2 = (" << location2.latitude << "," << location2.longitude << ")" << endl;

    swap(&location1, &location2);
    cout << "After using the pointer swap function: location1 = (" << location1.latitude << "," << location1.longitude
        << "), location2 = (" << location2.latitude << "," << location2.longitude << ")" << endl;

    cout << "Before using the reference swap function: location1 = (" << location1.latitude << "," << location1.longitude
        << "), location2 = (" << location2.latitude << "," << location2.longitude << ")" << endl;

    swap(location1, location2);
    cout << "After using the reference swap function: location1 = (" << location1.latitude << "," << location1.longitude
        << "), location2 = (" << location2.latitude << "," << location2.longitude << ")" << endl;
    cout << "\nQuestion-4:" << endl;
    cout << "The product of 4 * 15 * 7 is " << multiply(4, 15, 7) << endl;
    cout << "The product of 0.5 * 4.5 is " << multiply(0.5, 4.5) << endl;

    //cout << "The product of 2 * 3 is " << multiply(2, 3) << endl; *///Cant work because of function overload

    // b.Can you add another third function that has the same name and has two arguments : multiply(int, int)
    // and call it as follows multiply(2, 3) ? Why or why not? Add your answer as a comment in your code. (1 pt.).
    // .......
    // ANSWER: No you cannot add another multiply(). This is because of function overload. There is more than one instance of multiply()
    // .......

    return 0;
}