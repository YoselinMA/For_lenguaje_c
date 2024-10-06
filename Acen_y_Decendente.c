#include <stdio.h>

int main (){
    int numero, i, j;
    puts("Ingtesa el numero");
    scanf("%d", &numero);

    printf("Ascendente\n");
    for (i =1; i<=numero; i ++){
        for (j = 1; j <= i; j ++ ){
            printf("*");
        }

        printf("\n");
    }
    printf("\nDescendente\n");
    for(i = numero; i >= 1; i --){
        for(j=1; j<=i; j ++){
            printf("*");
        }
        printf("\n");

    }
}
