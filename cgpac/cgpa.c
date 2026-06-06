#include <stdio.h>
#include <unistd.h>

int main(void) {
	int operand, opt;
	double ans[10], out;
	char letter[11] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	puts("FUTO's CGPA CALCULATOR");
	puts("Note: You are present your semester results, Anywhere you see A it means first semester GPA and B second semester GPA");
	puts("Choose the option that best fit you");
	puts("(1) Calculation for the present year(standalone)");
	puts("(2) Calculation of Results till the present year you are in?");
	puts("(3) Total CGPA till graduation");
	printf("Enter Option: ");
	scanf("%d", &operand);
	
	if(operand == 1) {
	for(int i = 0; i < 2; i++) {
	   printf("Enter Your GPA for %c: ", letter[i]);
	   scanf("%lf", &ans[i]);
	   out = ans[i] / i;
          }
          puts("Calculating.......");
          sleep(2);
          printf("CGPA: %.2lf\n", out);
          }
          
        else if(operand == 2) { 
        for(int i = 0; i < 10; i++) {
        printf("Enter your GPA for %c: ", letter[i]);
        scanf("%lf", &ans[i]);
        puts("Enter 0 to continue, Enter 1 to cancel and calculate");
        printf("Enter: ");
        scanf("%d", &operand);
        if(operand == 0) continue;
        else if(operand == 1) {
        puts("TERMINATED"); 
        out = ans[i] / i;
        break;
        }
        }
        puts("Calculating.......");
        sleep(2);
        printf("CGPA: %.2lf\n", out);
        }
        else if(operand == 3) { puts("YOU"); }
        else return 0;
return 0;
}
