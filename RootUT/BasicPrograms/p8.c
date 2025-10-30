#include <stdio.h>
#include <string.h>

int check(char* string, char* target) {
    if (strcmp(string, target) == 0) {
        return 1;
    }
    return 0;
}

int main() {

    char input[20];
    char target[20] = "Hello";

    printf("Enter a String: ");
    scanf("%19s", input);

    if (check(input, target)) {
        printf("Correct!\n");
    }
    else {
        printf("Incorrect\n");
    }

    return 0;
}