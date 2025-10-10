// File: arithmetic.cpp
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a = 15, b = 4;
    cout << "a + b = " << (a + b) << "\n";
    cout << "a - b = " << (a - b) << "\n";
    cout << "a * b = " << (a * b) << "\n";
    cout << "a / b = " << (double)a / b << "\n";
    cout << "a / b (int) = " << (a / b) << "\n";
    cout << "a % b = " << (a % b) << "\n";
    cout << "a ^ b (pow) = " << (long long)pow(a,b) << "\n";
    return 0;
}
 