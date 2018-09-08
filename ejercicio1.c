#include <stdio.h>
#include <stdlib.h>


void main() {
    int fila = 0, col = 0, i = 0, j = 0;
    int  contador = 0, aux = 0, n;
    printf("Ingrese el tamaño de las matrices nxn: \n");
    scanf("%d", &n);
    if (n > 1) {



        int matriz1[n][n];
        int matriz2[n][n];
        int matrizResultante[n][n];

        //LLENANDO MATRIZ 1
        printf("\nIngrese la matriz 1:\n");
        for (fila = 0; fila < n; fila++) {
            for (col = 0; col < n; col++) {
                printf("Posicion (%d,%d): ", fila + 1, col + 1);
                scanf("%d", &matriz1[fila][col]);

            }
        }

        //LLENANDO MATRIZ 2
        printf("\nIngrese la matriz 2:\n");
        for (fila = 0; fila < n; fila++) {
            for (col = 0; col < n; col++) {
                printf("Posicion (%d,%d): ", fila + 1, col + 1);
                scanf("%d", &matriz2[fila][col]);
            }
        }

        //MOSTRAR MATRIZ 1
        printf("\n Matriz 1:\n");
        for (fila = 0; fila < n; fila++) {
            printf("[ ");
            for (col = 0; col < n; col++) {
                printf("%d ", matriz1[fila][col]);
            }
            printf("]");
            printf("\n");
        }
        //MOSTRAR MATRIZ 2 
        printf("\n Matriz 2:\n");
        for (fila = 0; fila < n; fila++) {
            printf("[ ");
            for (col = 0; col < n; col++) {
                printf("%d ", matriz2[fila][col]);
            }
            printf("]");
            printf("\n");
        }

        //CREARA LA MATRIZ RESULTANTE
        printf("\nLa matriz resultante es: \n");
        for (i = 0; i < n; i++) {
            printf("[ ");
            for (j = 0; j < n; j++) {
                matrizResultante[i][j] = 0;
                for (int h = 0; h < n; h++) {
                    matrizResultante[i][j] = matrizResultante[i][j]+(matriz1[i][h] * matriz2[h][j]);
                }
                printf("%d ", matrizResultante[i][j]);
            }
            printf("]");
            printf("\n");
        }

        // Muestra cuales son primos y en cual posicion estan
        printf("\n");
        contador = 0;
        int cantidadPrimos=0;
        for (fila = 0; fila < n; fila++) {
            for (col = 0; col < n; col++) {
                for (j = 1; j <= matrizResultante[fila][col]; j++) {
                    if (matrizResultante[fila][col] % j == 0) {
                        contador++;
                    }
                }
                if (contador == 2) {
					
                        printf("Número primo:%d y se encuentra en la posición (%d,%d)\n", matrizResultante[fila][col], fila + 1, col + 1);
                        cantidadPrimos++;
                    }
            }
        }

        if (cantidadPrimos = 0) {
            printf("No se encontraron números primos");
        } else {
            int vPrimos[contador];
            i = 0;
            for (fila = 0; fila < n; fila++) {
                for (col = 0; col < n; col++) {
                    for (j = 1; j <= matrizResultante[fila][col]; j++) {
                        if (matrizResultante[fila][col] % j == 0) {
                            contador++;
                        }
                    }
                     if (contador == 2) {
                            vPrimos[i] = matrizResultante[fila][col];
                            i++;
                        }
                }
            }
            contador = i;
            for (i = 0; i < contador; i++) {
                printf("\nVector en la posición %d: %d\n", i + 1, vPrimos[i]);
            }
        }
    } else {
        printf("Tamaño de la matriz invalido");
    }
}
