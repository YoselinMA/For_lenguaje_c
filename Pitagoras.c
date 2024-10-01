#include <stdio.h>

int main() {
    int filas = 10;
    int columnas, j, i, impresion;  
    // Imprimir encabezado de la tabla
    printf("    ");
    for (int i = 1; i <= filas; i++) {
        printf("%4d", i);
    }
    printf("\n");

    // Imprimir el numero de filas
    for ( i = 1; i <= filas; i++) {
        printf(" %2d ", i);
        //Hace la multiplicacion
        for (j = 1; j <= filas; j++) {
            impresion= i *j;
            printf("%4d", impresion);
        }
        printf("\n");
    }

  
}
