#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int getShift() {
    srand(time(NULL));
    int shift = (rand() % 62) + 1;
    return shift;
}


int check(char* alphabet, char* input, char* key, int shift) {
    size_t input_length = strlen(input);
    size_t alphabet_length = strlen(alphabet);
    char calculated_key[input_length + 1];

    for (size_t i = 0; i < input_length; i++) {
        char curr = input[i];
        size_t alpha_pos = 0;
        int found = 0;

        for (size_t j = 0; j < alphabet_length; j++) {
            if (curr == alphabet[j]) {
                alpha_pos = j;
                found = 1;  // found the character in the custom alphabet
                break;
            }
        }
        if (!found) {
            return 0;
        }

        size_t new_index = (alpha_pos + (size_t)shift) % alphabet_length;
        calculated_key[i] = alphabet[new_index];
    }
    calculated_key[input_length] = '\0';

    return (strcmp(key, calculated_key) == 0) ? 1 : 0;
}


int main() {
    char custom_alphabet[63] = "ehlupa^toXHDgIyj&VJZCW$!)LS@FKmxRkQAiMdTPcnUN(w*OvfrE#zYq%BsGb";
    char input[20];
    char key[20];
    printf("Enter a string: ");
    scanf("%19s", input);

    int shift = getShift();
    printf("%d\n", shift);\

    printf("Enter the key: ");
    scanf("%19s", key);

    int checked = check(custom_alphabet, input, key, shift);

    if (checked) {
        printf("Correct!");
    }
    else {
        printf("Incorrect!");
    }

    return 0;
}