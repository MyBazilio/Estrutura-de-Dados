#include <stdio.h>
int main() {
    int score = 78;
    char grade;
    if (score >= 90) grade = 'A';
    else if (score >= 75) grade = 'B';
    else if (score >= 60) grade = 'C';
    else grade = 'F';
    printf("grade -> %c\n", grade);
    return 0;
}