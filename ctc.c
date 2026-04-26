#include <stdio.h>
#include <string.h>


int main() {

	int choice; //Choice Of Question
	double input; //Question
        double output; //Answer
        const double BTC_TO_USDT = 75000; /*BTC TO USDT OR USDT TO ETH*/
        const double ETH_TO_USDT = 2000; /*ETH TO USDT OR USDT TO ETH*/
        const double CN_TO_CUSD = 40000; /*CN TO CUSD OR CUSD TO CN*/
	const double CN_TO_BTC = 0.53;
        const double CN_TO_ETH = 20;
do {
   printf("Welcome to Cinel's Crypto Converter\n");
   printf("Enter Number for Conversion: ");
   scanf("%lf", &input);
    if(input <= 0) {
   printf("Invalid Input\n");
  }
   printf("\n");
   printf("(1) BTC TO USDT\n");
   printf("(2) USDT TO BTC\n");
   printf("(3) ETH TO USDT\n");
   printf("(4) USDT TO ETH\n");
   printf("(5) CN TO CUSD\n");
   printf("(6) CUSD TO CN\n");
   printf("(7) CN TO ETH\n");
   printf("(8) ETH TO CN\n");
   printf("(9) CN TO BTC\n");
   printf("(10) BTC TO CN\n");
   printf("\n");
   printf("Enter Number for Currency: ");
   scanf("%d", &choice);
    if(choice <= 0 || choice >= 11) {
   printf("Invalid Input\n");
  return choice;
  }
   switch(choice) {
	case 1:
 	   output = input * BTC_TO_USDT;
	break;
	case 2:
           output = input / BTC_TO_USDT;
	break;
	case 3:
           output = input * ETH_TO_USDT;
        break;
	case 4:
           output = input / ETH_TO_USDT;
        break;
	case 5:
           output = input * CN_TO_CUSD;
        break;
	case 6:
           output = input / CN_TO_CUSD;
        break;
        case 7:
           output = input * CN_TO_ETH;
        break;
       case 8:
           output = input / CN_TO_ETH;
        break;
        case 9:
           output = input * CN_TO_BTC;
        break;
        case 10:
           output = input / CN_TO_BTC;
        break;
	default:
	printf("Invalid Input\n");
   }
   printf("Amount: %.9f\n", output);
   printf("\n");
   printf("****************************************************************\n");
   printf("\n");
}
while(choice != 0);
return 0;
}
