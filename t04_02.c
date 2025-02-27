// 12S24001 - Fredrick Laurensius Aritonang
// 12S24030 - Swasti Maristella Sihombing

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {
 
    char str[21]; 
    
    printf("Masukkan teks: ");
    scanf("%20[^"]", str); 
    
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%03d", str[i]);
    }
    
    printf("013");
    return 0;
    }
