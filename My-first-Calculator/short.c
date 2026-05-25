#include "short.h"
#include <unistd.h>
#include <stdio.h>

int check() {//operand
int a, c;
int status;

  while(1) {
     printf("\t╔════════════════════════════════════════════════════╗\n");
     printf("\t║Enter Number>> ");
     fflush(stdout);
     status = scanf("%d", &a);
      if(status == 1) {
      printf("\t╚════════════════════════════════════════════════════╝\n");
      break;
      }
      else{

      printf("\t║Invalid Input! No Characters allowed\n");
      printf("\t║Restarting....\n");
      printf("\t╚════════════════════════════════════════════════════╝\n");
      sleep(2);
      while((c = getchar()) != '\n' && c != EOF);
      }
  }
return a;
}

int autocheck() {//for fnum && snum
int a, c;
int status;

  while(1) {
     printf("\t╔════════════════════════════════════════════════════╗\n");
     printf("\t║Enter Number for Calculation>> ");
     fflush(stdout);
     status = scanf("%d", &a);
      if(status == 1) {
      printf("\t╚════════════════════════════════════════════════════╝\n");
      break;
      }
      else{

      printf("\t║Invalid Input! No Characters allowed\n");
      printf("\t║Restarting....\n");
      printf("\t╚════════════════════════════════════════════════════╝\n");
      sleep(2);
      while((c = getchar()) != '\n' && c != EOF);
      }
  }
return a;
}

int choicecheck() {//choice
int a, c;
int status;

  while(1) {
     printf("\t╔════════════════════════════════════════════════════╗\n");
     printf("\t║Enter Number from the options>> ");
     fflush(stdout);
     status = scanf("%d", &a);
      if(status == 1) {
      printf("\t╚════════════════════════════════════════════════════╝\n");
      break;
      }
      else{

      printf("\t║Invalid Input! No Characters allowed\n");
      printf("\t║Restarting....\n");
      printf("\t╚════════════════════════════════════════════════════╝\n");
      sleep(2);
      while((c = getchar()) != '\n' && c != EOF);
      }
  }
return a;
}
