#include <iostream>
using namespace std;
int main() {
    int x = 10, y = 20;
    cout << boolalpha; // mostra true/false
    cout << "x == y -> " << (x == y) << "\n";
    cout << "x != y -> " << (x != y) << "\n";
    cout << "x < y  -> " << (x < y) << "\n";
    cout << "x <= y -> " << (x <= y) << "\n";
    cout << "x > y  -> " << (x > y) << "\n";
    cout << "x >= y -> " << (x >= y) << "\n";
    return 0;
}