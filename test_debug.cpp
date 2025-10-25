#include <iostream>
#include "Project1/utils.h"
using namespace std;
int main() {
    int a1[] = {10, 2, 30, 4, 51};
    int a2[] = {8, 70, 16, 15, 41};
    cout << "Array 1 max: " << max(a1) << endl;
    cout << "Array 2 max: " << max(a2) << endl;
    cout << "Both arrays max: " << max(a1, a2) << endl;
    return 0;
}
