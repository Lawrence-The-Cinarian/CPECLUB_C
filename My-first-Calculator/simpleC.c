#include "Calculator_Brain/main.h"
#include "mathfunc.h"
#include "short.h"
#include <stdio.h>
#include <math.h>

short simpleC() {
  short operand;
  double answer; //for answers to the inputs
  double fnum; //for representation of first number
  double snum; //for representation of second number
  short choice;//for choices during switch/case creation
  /*This is to loop the program so don't you run it again, to cancel use CTRL+C*/

  do{
  printf("\t╔════════════════════════════════════════════════════╗\n");
  printf("\t║         Welcome To Cinari Lab's Calculator         ║\n");
  printf("\t╚════════════════════════════════════════════════════╝\n");
  printf("\n");
  printf("\t╔════════════════════════════════════════════════════╗\n");
  printf("\t║Use 1 for using a NO. for square/roots, cubes/square║\n");
  printf("\t║Use 2 for using two NOs for Basic operations        ║\n");
  printf("\t╚════════════════════════════════════════════════════╝\n");
  operand = check();
  printf("\n");
  
  if(operand <= 0 || operand >= 3) {
   printf("\t╔════════════════════════════════════════════════════╗\n");
   printf("\t║                   Invalid Input                    ║\n");
   printf("\t╚════════════════════════════════════════════════════╝\n");
   }

  else if(operand == 1) {
   printf("\t╔════════════════════════════════════════════════════╗\n");
   printf("\t║Step 1: Enter NO. For Calculation                   ║\n");
   printf("\t║Step 2: Enter NO. in the options for calculations   ║\n");
   printf("\t║                   (1) Square Root                  ║\n");
   printf("\t║                   (2) Cubic Root                   ║\n");
   printf("\t║                   (3) Square                       ║\n");
   printf("\t║                   (4) Cubic                        ║\n");
   printf("\t╚════════════════════════════════════════════════════╝\n");
   printf("\n");
   fnum = autocheck();
   printf("\n");
   choice = choicecheck();
   printf("\n");
   
    if(choice >= 1 && choice <= 4) {
      switch(choice) {
        case 1:
          if(fnum < 0) {
        printf("\t╔════════════════════════════════════════════════════╗\n");
        printf("\t║                Invalid Calculation                 ║\n");
        printf("\t╚════════════════════════════════════════════════════╝\n");
        printf("\n");
        return choice;
          }
        answer = sqrt(fnum);
        break;

        case 2:
          if(fnum < 0) {
        printf("\t╔════════════════════════════════════════════════════╗\n");
        printf("\t║                Invalid Calculation                 ║\n");
        printf("\t╚════════════════════════════════════════════════════╝\n");
        printf("\n");
        return choice;
          }
         answer = cbrt(fnum);
        break;

        case 3:
        answer = sqre(fnum);
        break;

        case 4:
        answer = cube(fnum);
        break;

        default:
        printf("\t╔════════════════════════════════════════════════════╗\n");
        printf("\t║                   Invalid Input                    ║\n");
        printf("\t╚════════════════════════════════════════════════════╝\n");
        printf("\n");
      }
      printf("\t╔════════════════════════════════════════════════════╗\n");
      printf("\t║Ans: %.2f\n", answer);
      printf("\t╚════════════════════════════════════════════════════╝\n");
      printf("\n");
    }
    else {
      printf("\t╔════════════════════════════════════════════════════╗\n");
      printf("\t║                 PROGRAM TERMINATED                 ║\n");
      printf("\t╚════════════════════════════════════════════════════╝\n");
      printf("\n");
      return choice;
      }
  }
  else if(operand == 2) {
    printf("\t╔════════════════════════════════════════════════════╗\n");
    printf("\t║Step 1: Enter Two NOs for Calculations              ║\n");
    printf("\t║Step 2: Enter NO. in the options for calculations   ║\n");
    printf("\t║                   (1) Addition                     ║\n");
    printf("\t║                   (2) Subtraction                  ║\n");
    printf("\t║                   (3) Multiplication               ║\n");
    printf("\t║                   (4) Division                     ║\n");
    printf("\t╚════════════════════════════════════════════════════╝\n");
    printf("\n");
    fnum = autocheck();
    printf("\n");
    snum = autocheck();
    printf("\n");
    choice = choicecheck();
    printf("\n");
    
    if(choice >=1 && choice <= 4) {
      switch(choice) {
        case 1:
        answer = add(fnum, snum);
        break;

        case 2:
        answer = sub(fnum, snum);
        break;

        case 3:
        answer = mul(fnum, snum);
        break;

        case 4:
        if(snum == 0) {
      printf("\t╔════════════════════════════════════════════════════╗\n");
      printf("\t║                 Mathematical Error                 ║\n");
      printf("\t╚════════════════════════════════════════════════════╝\n");
          printf("\n");
          return choice;
        }
          answer = div(fnum, snum);
        break;

        default:
          printf("\t╔════════════════════════════════════════════════════╗\n");
          printf("\t║                   Invalid Input                    ║\n");
          printf("\t╚════════════════════════════════════════════════════╝\n");
          printf("\n");
          return choice;
      }
        printf("\t╔════════════════════════════════════════════════════╗\n");
        printf("\t║Ans: %.2f\n", answer);
        printf("\t╚════════════════════════════════════════════════════╝\n");
        printf("\n");
    }
    else {
      printf("\t╔════════════════════════════════════════════════════╗\n");
      printf("\t║                 PROGRAM TERMINATED                 ║\n");
      printf("\t╚════════════════════════════════════════════════════╝\n");
      printf("\n");
      return choice;
      }
    }
  }
    while(operand != 0);
  return 0;
}
