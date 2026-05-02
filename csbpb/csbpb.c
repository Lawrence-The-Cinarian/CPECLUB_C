#include <stdio.h>
#include <string.h>
#include "custom.h"


int main() {

	Contact savemy[2];
	int count = 10;
	char *ptr = &savemy[count].Address;
	int number;

for(;;) {
	printf("Enter 1 for Saving Contacts, Enter 2 for viewing saved contacts\n");
	printf("Enter Number: ");
	scanf("%d", &number);

		if(number == 1) {
	for(int i = 0; i < count; i++) {
	printf("Enter your Name: ");
	scanf("%99s", savemy[count].Name);
	printf("Entet your Phone Number: ");
	scanf("%99s", savemy[count].phoneNumber);


	printf("Name: %s | Phone Number: %s | Memory Location %p |\n", savemy[count].Name, savemy[count].phoneNumber, &savemy[count].Address);
 	}
}
	else if(number == 2) {
	for(int i = 0; i < count; i++) {
	     printf("Name: %s | Phone Number: %s | Memory Location %p |\n", savemy[count].Name, savemy[count].phoneNumber, &savemy[count].Address);
	}
}
	else puts("invalid option");
	}

return 0;
}
