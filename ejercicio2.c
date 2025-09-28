#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

//Se genera una matriz con numero aleatorios naturales menores a nueve
void generar_matriz(int matriz[SIZE][SIZE]) {
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
}

//Funcion que suma la diagonal de izquierda a derecha
int sumar_diagonal1(int matriz[SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += matriz[i][i];
    }
    return sum;
} 

//Funcion que suma la diagonal de derecha a izquierda
int sumar_diagonal2(int matriz[SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += matriz[i][SIZE - 1 - i];
    }
    return sum;
}

//Funcion que suma una columna n de una matriz
int sumar_columnas(int matriz[SIZE][SIZE], int n) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += matriz[i][n];
    }
    return sum;
}

//Funcion que suma una fila n de una matriz
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

    //Se imprime la matriz generada
    printf("La matriz utilizada corresponde a:\n");
    for (int i = 0; i < SIZE; i++) {
	for (int j = 0; j < SIZE; j++) {
	    printf("%d ", matriz[i][j]);
	};
	printf("\n");
    };

    //Se genera un arreglo que contiene todas las sumas de las diagonales, 
    //filas y columnas de la matriz
    int arreglo_sumas[SIZE*2 + 2];
        arreglo_sumas[0] = sumar_diagonal1(matriz);
        arreglo_sumas[1] = sumar_diagonal2(matriz);
	//Para las columnas el indice debe empezar en el parametro 2
	//para que no choquen con las diagonales
        for (int i = 0; i < SIZE; i++) {
	    arreglo_sumas[i+2] = sumar_columnas(matriz, i);
	}
	//Para las columnas el indice debe empezar en el parametro SIZE+2
        //para que no choquen con las diagonales ni las columnas

	for (int i = 0; i < SIZE; i++) {
	    arreglo_sumas[i+2+SIZE] = sumar_filas(matriz, i);	
	}

    //Si alguna de las sumas es distinta a otra, no_es_magico se activa
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

