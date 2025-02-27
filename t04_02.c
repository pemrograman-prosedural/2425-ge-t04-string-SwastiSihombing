// 12S24001 - Fredrick Laurensius Aritonang
// 12S24030 - Swasti Maristella Sihombing

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {
  char msk[60];
  int i;

  fgets(msk, 60, stdin);

  for (i = 0; i < strlen(msk) - 1; i++){
    printf("%03d", msk[i]);
  }

  return 0;
}
