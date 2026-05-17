#ifndef CONTDMG_H
#define CONTDMG_H

int result(int a) {
for(int i = 1; i <= a; i++) {
 for(int j = 1; j <= a; j++) {
 int mult = i * j;
 printf("%4d", mult);
   }
  printf("\n");
  }
return 0;
}
#endif
