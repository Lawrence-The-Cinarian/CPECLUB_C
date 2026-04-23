#include <stdio.h>
#include <math.h>
#include "determinant.h"

int main(void) {
      int operators;//added just for the loop
      float fnum;//first number
      float snum;//second number
      float tnum;//third number
      float fonum;//fourth number
      float finum;//fifth number
      float sinum; //sixth number
      float D, Dx, Dy, x, y;
do {
	puts("Cramer's Linear Algebraic Calculator");
	puts("Instructions: You are to enter six known numbers for calculation of determinants");
	printf("Enter First Number: ");
	scanf("%f", &fnum);
	printf("Enter Second Number: ");
	scanf("%f", &snum);
	printf("Enter Third Number: ");
	scanf("%f", &tnum);
	printf("Enter Fourth Number: ");
	scanf("%f", &fonum);
	printf("Enter Fifth Number: ");
	scanf("%f", &finum);
	printf("Enter Sixth Number: ");
	scanf("%f", &sinum);

	D = solve(fnum, snum, tnum, fonum, finum, sinum);
	Dx = solve2(fnum, snum, tnum, fonum, finum, sinum);
	Dy = solve3(fnum, snum, tnum, fonum, finum, sinum);
        x = divide(Dx, D);
        y = divide(Dy, D);
	if(D == 0) {
		puts("No Unique Solution exists");
	}
		else {
		printf("Main D = %.2f\n", D);
		printf("Dx = %.2f\n", Dx);
		printf("Dy = %.2f\n", Dy);
		printf("x = %.2f\n", x);
		printf("y = %.2f\n", y);
	}
 }
while (operators != 0);
return 0;
}
