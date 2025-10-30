#include <stdio.h>

int checkIfALessThanB(int a, int b) {
    if (a < b) {
        return 1;
    }
    return 0;
}

int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    const int sum = a + b;

    if (checkIfALessThanB(a, b) == 1) {
        if (sum != 100) {
            printf("Wrong numbers!");
        }
        else {
            printf("Correct!");
        }
    }


    return 0;
}