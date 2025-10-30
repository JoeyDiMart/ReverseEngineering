#include <stdio.h>
#include <string.h>

int check(char *serial) {
    if (strlen(serial) != 3) {
        return 0;
    }
    if ((serial[0] ^ 0xA) != 'F') {
        return 0;
    }
    if (serial[0] + 0x3 != serial[1]) {
        return 0;
    }
    if ((serial[2] ^ 0x46) != 0xA) {
        return 0;
    }
    return 1;
}

int main() {

    char input[20];
    printf("Enter the serial: ");
    scanf("%19s", input);

    if (check(input)) {
        printf("The serial is valid\n");
    }
    else {
        printf("The serial is not valid\n");
    }

     return 0;
}