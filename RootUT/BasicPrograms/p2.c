#include <stdio.h>
#include <string.h>

int main() {
    char c[9] = "Root";  // 9 not 8 for the \0 null temrinator for end of string
    char d[] = "Club";
    strcat(c, d);

    printf("%s\n", c);
    return 0;
}