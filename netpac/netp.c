#include <stdio.h>
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
      int serialNumber[10];
      int Priority[10];
      char Packet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
      
      puts("Cinari Firewall");
      puts("Instructions; You are to enter The Priority and Serial Numbers of your Packets for sorting and arrangement");
      puts("");
      for(int ps = 0; ps <= 10; ps++) {
       printf("Enter Priority Number for Packet %c: ", Packet[ps]);
       scanf("%d", &Priority[ps]);
       printf("Enter Serial Number for Packet %c: ", Packet[ps]);
       scanf("%d", &serialNumber[ps]);
       puts("");
      }
      

return 0;
}
