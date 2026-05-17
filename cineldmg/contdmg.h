#ifndef CONTDMG_H
#define CONTDMG_H

int result(int a) {
for(int i = 1; i <= a; i++) {
 for(int j = 1; j <= a; j++) {
 int mult = i * j;
 printf("Result: %d", mult);
for(int k = 0; k < 4; k++) {
 printf("\n");
   }
  }
 }
return 0;
}
#endif
