//eoc means Even-Odd-Chevker
#include <stdio.h> //Standard Input Output Library
#include <math.h>  //Mathematics Library


int main() {

	int num; // The variable for num which represents "Input Number" int is just a dats type
	puts("This is the Even Odd Checker File\n"); // Introduction file
	printf("Enter Number to check: "); // Where
	scanf("%d", &num);

	/* Conditionals indicating if the number is divisible by 2 if so 
	 * then it puts "The Number is Even"
	 * if the number is not divisible by 2 is puts "The Number is Odd"
	*/

	if(num % 2 == 0) {
	puts("The Number is Even");
 }
	else puts("The Number is Odd");
return 0; 
}
