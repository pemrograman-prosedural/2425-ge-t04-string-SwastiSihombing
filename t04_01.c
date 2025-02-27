// 12S24001 - Fredrick Laurensius Aritonang
// 12S24030 - Swasti Maristella Sihombing

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

  int main(int _argv, char **_argc) {

  char msk[60];
  int i;
  int ASCII;
  char ASCII2;

  scanf("%60s", msk);
  for (i=0; i< strlen(msk)- 2; i+= 3){
    sscanf(&msk[i],"%03d", &ASCII);
    ASCII2 = (char) ASCII;
    printf("%c", ASCII2);
  }

  printf("\n");

  return 0;

}
