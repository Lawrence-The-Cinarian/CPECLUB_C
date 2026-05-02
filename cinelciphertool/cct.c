#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cctheader.h"

int main(void) {


	ciphon con;

    printf("Enter your message: ");
    scanf("%99s", con.cinelencrypt);

    printf("Enter key: ");
    scanf("%d", &con.key);

    for(char *ptr = con.cinelencrypt; *ptr != '\0'; ptr++) {
        *ptr = *ptr + con.key;
    }

    printf("Encrypted Output: %s\n", con.cinelencrypt);

    return 0;
}
