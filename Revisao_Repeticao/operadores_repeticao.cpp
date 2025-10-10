#include <iostream>
using namespace std;
int main() {
    int n = 10, total = 0;
    for (int i = 1; i <= n; ++i) total += i;
    cout << "sum of 1..10 = " << total << "\n";
    int a = 0, b = 1;
    cout << "fibs: ";
    for (int i = 0; i < 10; ++i) {
        cout << a << (i<9 ? ", " : "\n");
        int next = a + b; a = b; b = next;
    }
    return 0;
}