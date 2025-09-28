#include <stdio.h>
#include <stdlib.h>


void generar_matriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
}

int sumar_diagonal1(int matriz[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matriz[i][i];
    }
    return sum;
} 

int sumar_diagonal2(int matriz[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matriz[i][2 - i];
    }
    return sum;
}

int sumar_columnas(int matriz[3][3], int n) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matriz[i][n];
    }
    return sum;
}

int sumar_filas(int matriz[3][3], int n) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matriz[n][i];
    }
    return sum;
}

int main() {
    int matriz[3][3];
    generar_matriz(matriz);

    printf("La matriz utilizada corresponde a:\n");
    for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 3; j++) {
	    printf("%d ", matriz[i][j]);
	};
	printf("\n");
    };

    int arreglo_sumas[8] = {
        sumar_diagonal1(matriz),
        sumar_diagonal2(matriz),
        sumar_filas(matriz, 0),
        sumar_filas(matriz, 1),
        sumar_filas(matriz, 2),
        sumar_columnas(matriz, 0),
        sumar_columnas(matriz, 1),
        sumar_columnas(matriz, 2)
    };

    int no_es_magico = 0;
    for (int i = 0; i < 8; i++) {
        //printf("%d\n", arreglo_sumas[i]);
    };

    for (int i = 0; i < 7; i++) {
        if (arreglo_sumas[i] != arreglo_sumas[i + 1]) {
            no_es_magico = 1;
        };
    };

    if (no_es_magico == 0) {
        printf("La matriz es un cuadrado magico\n");
    }
    
    else {
        printf("La matriz no es un cuadrado magico\n");
    };
};

