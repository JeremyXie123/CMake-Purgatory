#include <iostream>
#include "Adder/adder.h" // Include the header so the program knows add is a function that will be defined before it's called

using namespace std;
int main() {
    cout << "Hello World!" << endl;
    cout << add(72.1 , 73.8) << endl;
    return 0;
}