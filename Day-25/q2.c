#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("Common characters are: ");

    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == '\n')
            continue;

        for(j = 0; str2[j] != '\0'; j++) {
            if(str2[j] == '\n')
                continue;

            if(str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}