#include <stdio.h>

int sumar_diagonal1 (int matriz[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
	sum += matriz[i][i];
    return sum;
};

int sumar_diagonal2 (int matriz[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
	sum += matriz[i][2-i]
    return sum;
    }
}

int sumar_columnas (int matriz[3][3], int n) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
	sum += matriz1[i][n];
        };
    return sum;
};

int sumar_filas (int matriz = matriz1) {
    int sum;
    for (int i = 0; i < 3; i++) {
        sum += matriz1[n][i];
    return sum;
    };
};

int main () {
    int matriz[3][3] = {
        {2, 7, 6},
	{9, 5, 1},
	{4, 3, 8}
    }
    int arreglo_sumas[8] {
        sumar_diagonal1(matriz),
	sumar_diagonal2(matriz),
	sumar_filas(matriz, 0),
	sumar_filas(matriz, 1),
	sumar_filas(matriz, 2),
	sumar_columnas(matriz, 0),
	sumar_columnas(matriz, 1),
	sumar_columnas(matriz, 2)
    }

    int no_es_magico = 0;
    for (int i = 0; i > 7; i++) {
	if (arreglo_sumas[i] != arreglo_sumas[i + 1]);
	    no_es_magico = 1;
    }
    if (no_es_magico == 0);
        printf()
}

