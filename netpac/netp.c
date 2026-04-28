#include <stdio.h>
#include <unistd.h>

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
      int operators;
      int serialNumber[10];
      int Priority[10];
      char Packet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
do {
      puts("Cinari Sorting Firewall");

      //For Looping the program;
      puts("Instructions; You are to enter The Priority and Serial Numbers of your Packets for sorting and arrangement");
      puts("");
      for(int a = 0; a <= 9; a++) {
       printf("Enter Priority Number for Packet %c: ", Packet[a]);
       scanf("%d", &Priority[a]);
       printf("Enter Serial Number for Packet %c: ", Packet[a]);
       scanf("%d", &serialNumber[a]);
       puts("");

	sleep(1);
	}
	    //Bubble Sorting
	    for(int c = 0; c < 10; c++) {
       	     for(int b = 0; b < 9; b++) {
	      if(Priority[b] > Priority[b+1]) {
		int swap = Priority[b];
		Priority[b] = Priority [b+1];
		Priority[b+1] = swap;

		int swap2 = serialNumber[b];
		serialNumber[b] = serialNumber[b+1];
		serialNumber[b+1] = swap2;
		sleep(1/2);
	   }
        }
    }
		//Printing Out Arrangements
		for(int b = 0; b <= 9; b++) {
		puts("");
		printf("Sorting Packet.....\n");
		sleep(2);
		printf("Processing Packet......\n");
		sleep(2);
		printf("Packet Processed Successfully ✅\n");
		sleep(2);
		printf("| Packet %c | Priority %d | Serial Number %d |\n", Packet[b], Priority[b], serialNumber[b]);
		sleep(1);
        }
    }
while(operators != 0);
return 0;
}
