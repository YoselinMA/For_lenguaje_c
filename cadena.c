#include <stdio.h>
int main(void){
    int i, n, x;
    char *buffer;
    char ary [i];

    printf("Teclea la longitud de la cadena\n");
    scanf("%d", &x);


    buffer = (char*) malloc ((x+1)*sizeof(char));

    if(buffer==NULL) exit (1);

    for (n=0; n<x; n++){
   printf("Ingrese un dato:\n");
   scanf("%s", &buffer[n]);
    }
    printf("Random string: %s\n", buffer);
    buffer[x]='\0';
    free(buffer);



}
