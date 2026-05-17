#include <stdio.h>
#include "contdmg.h" //Created Header File containing the function result();

int main(void) {

int genesis;

puts("Cinel's Dynamic Multiplication Grid");
printf("Enter Number to display DMG: ");
scanf("%d", &genesis);
result(genesis); // Function created to reduce and spread work evenly

return 0;
}

