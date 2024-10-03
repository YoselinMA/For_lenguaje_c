#include <stdio.h>
#include <string.h>

int main() {
    char pal[20];
    char ca[20]; 

    puts("Ingrese una palabra: ");
    scanf("%s", pal);

    int len = strlen(pal); 
    strcpy(ca, pal);
    
    for (int i = 0; i < len; i++) {
        int contador = 0; 
        for (int j = 0; j < len; j++) {
            if (pal[j] == ca[i]) {
                contador++;
            }  
        }
        printf("%c: %d\n", ca[i], contador); 
    }

    return 0;
}
