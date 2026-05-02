#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cctheader.h"

int main(void) {

	ciphon con;

    printf("╔≐════════════════════════════════════════╗\n");
    printf("║            Cinel's Cipher Tool          ║\n");
    printf("╚═════════════════════════════════════════╝\n");


    printf("╔≐════════════════════════════════════════╗\n");
    printf("║ Enter your message: ");
    scanf("%99s", con.cinelencrypt);
    printf("╚═════════════════════════════════════════╝\n");

    printf("╔≐════════════════════════════════════════╗\n");
    printf("  Enter key: ");
    scanf("%d", &con.key);
    printf("╚═════════════════════════════════════════╝\n");

    for(char *ptr = con.cinelencrypt; *ptr != '\0'; ptr++) {
        if(*ptr >= 'a' && *ptr <= 'z') {
        *ptr = ((*ptr - 'a' + con.key) % 26) + 'a';
	}

        else if(*ptr >= 'A' && *ptr <= 'Z') {
        *ptr = ((*ptr - 'A' + con.key) % 26) + 'A';
    }

}
    printf("╔≐════════════════════════════════════════╗\n");
    printf("  Encrypted Output: %s\n", con.cinelencrypt);
    printf("╚═════════════════════════════════════════╝\n");

    return 0;
}
