#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "netcon.h"

/*
 * I was tasked to create a Network Packet Filter (Simulated) which will
 * be used in making Serial Numbers with lower numbering the main priority to be
 * executed first.
 * For Example; A packet Serial Number has 300 and the priority was 1,
 * B packet has has Serial Number has 75 ad the priority was 11, A packet
 * will be processed first before the second one
 * The Process I followed will be communicated in this comment
 */

int main(void) {

	paclib packpro;
	char Packet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

      puts("");
      puts("Cinari Sorting Firewall");
      puts("");
      //For Looping the program;
      puts("Instructions; You are to enter The Priority and Serial Numbers of your Packets for sorting and arrangement");
      puts("");
      for(int a = 0; a <= 9; a++) {
       printf("Enter Priority Number for Packet %c: ", Packet[a]);
       scanf("%d", &packpro.Priority[a]);
       printf("Enter Serial Number for Packet %c: ", Packet[a]);
       scanf("%d", &packpro.serialNumber[a]);
       puts("");

	sleep(1);
	}
	    //Bubble Sorting
	  for(int c = 0; c < 9; c++) {
	    for(int b = 0; b < 9; b++) {
	      if(packpro.Priority[b] > packpro.Priority[b+1]) {
		int swap = packpro.Priority[b];
		packpro.Priority[b] = packpro.Priority[b+1];
		packpro.Priority[b+1] = swap;

		int swap2 = packpro.serialNumber[b];
		packpro.serialNumber[b] = packpro.serialNumber[b+1];
		packpro.serialNumber[b+1] = swap2;

		int swap3 = Packet[b];
		Packet[b] = Packet[b+1];
		Packet[b+1] = swap3;
	   }
       }
  }

		sleep(1);

		//Printing Out Arrangements
		for(int b = 0; b <= 9; b++) {
		puts("");
		printf("Sorting Packet.....\n");
		sleep(1);
		printf("Processing Packet......\n");
		sleep(1);
		printf("Packet Processed Successfully ✅\n");
		sleep(1);
		printf("| Packet %c | Priority %d | Serial Number %d |\n", Packet[b], packpro.Priority[b], packpro.serialNumber[b]);
		sleep(1);
	   }
return 0;
}
