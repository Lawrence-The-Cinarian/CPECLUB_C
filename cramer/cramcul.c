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
      float D, Da, Db, a, b;
do {
	printf("\v╔══════════════════════════════════════════════════════════════════════════════════╗\n");
	printf("║                    Cramer's Linear Algebraic Calculator                          ║\n");
	printf("╚══════════════════════════════════════════════════════════════════════════════════╝\n");
	printf("╔══════════════════════════════════════════════════════════════════════════════════╗\n");
	printf("║ Instructions: You are to enter six known numbers for calculation of determinants ║\n");
	printf("╚══════════════════════════════════════════════════════════════════════════════════╝\n");
	printf("╔══════════════════════════════════════════════════════════════════════════════════╗\n");
	printf("║ Enter First Number (Co-Efficient Of a): ");
	scanf("%f", &fnum);
	printf("║ Enter Second Number (Co-Efficient Of b): ");
	scanf("%f", &snum);
	printf("║ Enter Third Number (Constant): ");
	scanf("%f", &tnum);
	printf("║ Enter Fourth Number (Co-Efficient Of a): ");
	scanf("%f", &fonum);
	printf("║ Enter Fifth Number (Co-Efficient Of b): ");
	scanf("%f", &finum);
	printf("║ Enter Sixth Number (Constant): ");
	scanf("%f", &sinum);
	printf("╚══════════════════════════════════════════════════════════════════════════════════╝\n");

	D = solve(fnum, snum, tnum, fonum, finum, sinum);
	Da = solve2(fnum, snum, tnum, fonum, finum, sinum);
	Db = solve3(fnum, snum, tnum, fonum, finum, sinum);
        a = divide(Da, D);
        b = divide(Db, D);
	if(D == 0) {
		printf("╔══════════════════════════════════════════════════════════════════════════════════╗\n");
		printf("║                             No Unique Solution exists                            ║\n");
		printf("╚══════════════════════════════════════════════════════════════════════════════════╝\n");
	}
		else {
		printf("╔══════════════════════════════════════════════════════════════════════════════════╗\n");
		printf("║ Main D = %.2f\n", D);
		printf("║ Da = %.2f\n", Da);
		printf("║ Db = %.2f\n", Db);
		printf("║ a = %.2f\n", a);
		printf("║ b = %.2f\n", b);
		printf("╚══════════════════════════════════════════════════════════════════════════════════╝\n");
		printf("\n");
	}
 }
while (operators != 0);
return 0;
}
