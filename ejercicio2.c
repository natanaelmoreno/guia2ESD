#include <stdio.h>
#include <stdlib.h>

void main() {
	
	
 int tamanio, valor = 0;
 int fila, col;
 
    //creamos el vector y le asignamos un tamaño
    printf("Ingrese el tamaño del vector\n");
    scanf("%d", &tamanio);
    
    if (tamanio < 0 || tamanio == 0) {
        printf("Tamaño del vector es invalido\n");
    } else {
        int vec[tamanio - 1];
        
        
        //Llenado del vector
        for (fila = 0; fila < tamanio; fila++) {
            printf("Ingrese un valor en la posición %d\n", fila + 1);
            scanf("%d", &vec[fila]);
            for (col = 0; col < fila; col++) {
                while (vec[col] == vec[fila]) {
                    printf("Valor ya registrado, Ingrese un valor en la posición %d\n", fila + 1);
                    scanf("%d", &vec[fila]);
                }
            }
        }
        //Imprime el vector
        printf("\nEl vector desordenado es:\n ");
        for (fila = 0; fila < tamanio; fila++) {
            printf("%d  ", vec[fila]);
        }

        printf("\n");
        //Ordena el vector de mayor a menor
        int mayorNum;
        for (fila = 0; fila < tamanio; fila++) {
            for (col = 0; col < 5; col++) {
                if (vec[col] < vec[fila]) {
                    mayorNum = vec[fila];
                    vec[fila] = vec[col];
                    vec[col] = mayorNum;
                }
            }
        }
        //Imprime el vector
        printf("\nEl vector ordenado de forma descendente es:\n ");
        for (fila = 0; fila < tamanio; fila++) {
            printf("%d  ", vec[fila]);
        }
        
        
        //La media
        printf("\n\n ");
        float suma=0;
         for (fila = 0; fila < tamanio; fila++) {
              suma=suma+vec[fila];
        }
                printf("\n");

          printf("La media es: %.2f\n",suma/tamanio);
    
                printf("\nEl valor mayor de la matriz  es: %d\n \nEl valor menor de la matriz es: %d\n",vec[0],vec[tamanio-1]);

    }
}

