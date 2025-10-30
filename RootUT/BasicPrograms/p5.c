#include <stdio.h>

int compute(int a, int b) {
    for (int i = 0; i < 5; i++) {
        a++;
    }
    if (a == b) {
        return 1;
    }
    return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    return 0;
}