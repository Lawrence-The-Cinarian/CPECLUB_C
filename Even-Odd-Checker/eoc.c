//eoc means Even-Odd-Chevker
#include <stdio.h> //Standard Input Output Library
#include <math.h>  //Mathematics Library


int main() {

	int num; // The variable for num which represents "Input Number" int is just a data type
    do { //For Looping the Program pressing CTRL+C to stop running
	puts("╔════════════════════════════════════╗");
	puts("║ This is the Even Odd Checker File  ╝"); // Introduction file
	printf("║Enter Number to check: "); // Where to Enter Number to check for Even or Odd Outputs
	scanf("%d", &num);
	puts("╚════════════════════════════════════╝");
	/* Conditionals indicating if the number is divisible by 2 if so
	 * then it puts "The Number is Even"
	 * if the number is not divisible by 2 is puts "The Number is Odd"
	 */

	if(num % 2 == 0) {
	puts("╔════════════════════════╗");
	puts("║   The Number is Even   ║");
	puts("╚════════════════════════╝");
   }
	else {
	puts("╔════════════════════════╗");
	puts("║   The Number is Odd    ║");
	puts("╚════════════════════════╝");
  }
}
while(num != 0);
return 0;
}
