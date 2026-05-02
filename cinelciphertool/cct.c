#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int key;
    char cinelencrypt[100];

    printf("Enter your message: ");
    scanf("%99s", cinelencrypt);

    printf("Enter key: ");
    scanf("%d", &key);

    for(char *ptr = cinelencrypt; *ptr != '\0'; ptr++) {
        *ptr = *ptr + key;
    }

    printf("Encrypted Output: %s\n", cinelencrypt);

    return 0;
}
