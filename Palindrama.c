#include <stdio.h>
#include <string.h>

int main() {
    char pal[20]; 

    puts("Ingrese una palabra: ");
    scanf("%s", pal);

    int len = strlen(pal); 
    int b=0;
    len=len-1;
    
    for (int i = 0; i <= len; i++) {
        if (pal[i] == pal[len-b]) {
            if(i==len){
                printf("La palabra es palindroma");
            }
           
        }else if(pal[i] != pal[len-i]){
            printf("La palabra no es palindroma");
            break;
        }
        b++;
       
    }  
}
