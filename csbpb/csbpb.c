#include <stdio.h>
#include <string.h>
#include "custom.h"


int main() {

	Contact savemy[10];
	Count saveme;
	char *ptr = &savemy[saveme].Address;
	int number;

for(;;) {
	printf("Enter 1 for Saving Contacts, Enter 2 for viewing saved contacts\n");
	printf("Enter Number: ");
	scanf("%d", &number);

		if(number == 1) {
	for(int i = 0; i < saveme.number; i++) {
	printf("Enter your Name: ");
	scanf("%99s", savemy[saveme].Name);
	printf("Enter your Phone Number: ");
	scanf("%99s", savemy[saveme].phoneNumber);


	printf("Name: %s | Phone Number: %s | Memory Location %p |\n", savemy[saveme].Name, savemy[saveme].phoneNumber, &savemy[saveme].Address);
 	}
}
	else if(number == 2) {
	for(int i = 0; i < saveme[10].number; i++) {
	     printf("Name: %s | Phone Number: %s | Memory Location %p |\n", savemy[saveme].Name, savemy[saveme].phoneNumber, &savemy[saveme].Address);
	}
}
	else puts("invalid option");
}
return 0;
}
