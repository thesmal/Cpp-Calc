#include <iostream>
#include <string>
#include "mathfunctions.hpp"

using namespace std;


int main() {
    cout << "What do you want to do? enter '+', '-', '*', '/', '^'." << endl; 
    char operation;
    cin >> operation;

    double x, y;
    cout << "enter the first number.\n";
    cin >> x;
    cout << "enter the second number.\n";
    cin >> y;
    cout << calc(x, operation, y) << endl;
    return 0;
}
