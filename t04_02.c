// 12S24001 - Fredrick Laurensius Aritonang
// 12S24030 - Swasti Maristella Sihombing

#include <stdio.h>
#include <string.h>


int main(int _argv, char **_argc) {
 
      char input[100];
      
      fgets(input, sizeof(input), stdin);
  
  
      input[strcspn(input, "\n")] = '\0';
  
      for (int i = 0; i < strlen(input); i++) {
          printf("%03d", (int)input[i]);
      }
      
      printf("013\n");
      return 0;
    }
