#!/bin/bash

cd /home/v0ttrix/Function-Overloading-Pointers-References-and-Default-Parameters-in-OOP

# Fix the recursive call issue in utils.cpp
sed -i 's/int maxFromArrayOne = max(arrayOne);/int maxFromArrayOne = max(arrayOne);/' Project1/utils.cpp
sed -i 's/int maxFromArrayTwo = max(arrayTwo);/int maxFromArrayTwo = max(arrayTwo);/' Project1/utils.cpp

# Replace the problematic function with a working version
cat > temp_fix.cpp << 'EOF'
int max(const int arrayOne[ARRAY_LENGTH], const int arrayTwo[ARRAY_LENGTH]) {
    int maxOne = arrayOne[0];
    int maxTwo = arrayTwo[0];
    
    for (int i = 0; i < ARRAY_LENGTH; ++i) {
        if (arrayOne[i] > maxOne) maxOne = arrayOne[i];
        if (arrayTwo[i] > maxTwo) maxTwo = arrayTwo[i];
    }
    
    return (maxOne > maxTwo) ? maxOne : maxTwo;
}
EOF

# Replace the function in utils.cpp
sed -i '/int max(const int arrayOne\[ARRAY_LENGTH\], const int arrayTwo\[ARRAY_LENGTH\]) {/,/^}$/c\
int max(const int arrayOne[ARRAY_LENGTH], const int arrayTwo[ARRAY_LENGTH]) {\
    int maxOne = arrayOne[0];\
    int maxTwo = arrayTwo[0];\
    \
    for (int i = 0; i < ARRAY_LENGTH; ++i) {\
        if (arrayOne[i] > maxOne) maxOne = arrayOne[i];\
        if (arrayTwo[i] > maxTwo) maxTwo = arrayTwo[i];\
    }\
    \
    return (maxOne > maxTwo) ? maxOne : maxTwo;\
}' Project1/utils.cpp

rm temp_fix.cpp

make && ./function_overloading_demo
