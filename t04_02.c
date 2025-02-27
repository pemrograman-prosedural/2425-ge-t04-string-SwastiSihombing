// 12S24001 - Fredrick Laurensius Aritonang
// 12S24030 - Swasti Maristella Sihombing

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {
  char msk[60];
  int i;

  for(int i=0; i < 60; i++) {
    scanf("%c", msk[i]);
    if(msk[i] = "\n"){break;}
  }

  for (i = 0; i < strlen(msk) - 1; i++){
    printf("%03d", msk[i]);
  }

  printf("013");

  return 0;
}
