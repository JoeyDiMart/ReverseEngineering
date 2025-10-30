#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int key = 23;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x == key) {
        printf("Correct!\n");
    }
    else {
        printf("Wrong!\n");
    }

    return 0;
}