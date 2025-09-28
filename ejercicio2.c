#include <stdio.h>
#include <stdlib.h>
#define SIZE 6


void generar_matriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
}

int sumar_diagonal1(int matriz[SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += matriz[i][i];
    }
    return sum;
} 

int sumar_diagonal2(int matriz[SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += matriz[i][SIZE - 1 - i];
    }
    return sum;
}

int sumar_columnas(int matriz[SIZE][SIZE], int n) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += matriz[i][n];
    }
    return sum;
}

int sumar_filas(int matriz[SIZE][SIZE], int n) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += matriz[n][i];
    }
    return sum;
}

int main() {
    int matriz[SIZE][SIZE];
    generar_matriz(matriz);

    printf("La matriz utilizada corresponde a:\n");
    for (int i = 0; i < SIZE; i++) {
	for (int j = 0; j < SIZE; j++) {
	    printf("%d ", matriz[i][j]);
	};
	printf("\n");
    };

    int arreglo_sumas[SIZE*2 + 2];
        arreglo_sumas[0] = sumar_diagonal1(matriz);
        arreglo_sumas[1] = sumar_diagonal2(matriz);
        for (int i = 0; i < SIZE; i++) {
	    arreglo_sumas[i+2] = sumar_filas(matriz, i);
	}
	for (int i = 0; i < SIZE; i++) {
	    arreglo_sumas[i+2+SIZE] = sumar_filas(matriz, i);	
	}

    int no_es_magico = 0;

    for (int i = 0; i < SIZE*2 + 2 -1; i++) {
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

