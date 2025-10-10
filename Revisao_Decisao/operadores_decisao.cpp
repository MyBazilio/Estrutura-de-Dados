#include <iostream>
using namespace std;
int main() {
    int score = 78;
    string grade;
    if (score >= 90) grade = "A";
    else if (score >= 75) grade = "B";
    else if (score >= 60) grade = "C";
    else grade = "F";
    cout << "grade -> " << grade << "\n";
    return 0;
}