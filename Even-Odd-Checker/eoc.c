#include <stdio.h>
#include <math.h>


int main() {

	int num;
	puts("This is the Even Odd Checker File\n");
	printf("Enter Number to check: ");
	scanf("%d", &num);

	if(num % 2 == 0) {
	puts("The Number is Even");
 }
	else puts("The Number is Odd");
return 0;
}
