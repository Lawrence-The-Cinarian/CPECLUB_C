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
        if(*ptr >= 'a' && *ptr <= 'z') {
        *ptr = ((*ptr - 'a' + con.key) % 26) + 'a';
	}

        else if(*ptr >= 'A' && *ptr <= 'Z') {
        *ptr = ((*ptr - 'A' + con.key) % 26) + 'A';
    }

}
    printf("Encrypted Output: %s\n", con.cinelencrypt);

    return 0;
}
