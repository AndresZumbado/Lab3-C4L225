#include <stdio.h>
//Se define la funcion factorial, esta recibe un numero entero, calcula su factorial y devuelve el factorial
int factorial (int n) {
	int i = 1;
	while (n > 1) {
		i = i * n;
		n = n - 1;
	}
	return i;
}


int main (int arge, char *argv[]) {
	printf("Este programa le ayuda a calcular el factorial de dos numeros que ingrese\n");	

	//Se inicializan las variables correspondientes a los numeros que entrega el usuario. Posteriormente se les asigna un valor usando scanf.
	int numero1;
	int numero2;
	printf ("Ingrese el primer numero: ");
	scanf ("%d", &numero1);
	printf ("Ingrese el segundo numero: ");
	scanf ("%d", &numero2);

	//Se llama a la funcion factorial para obtener ek factorial de ambos numeros
	int fac4 = factorial (numero1);
	int fac5 = factorial (numero2);
	printf("%d! = %d, %d! = %d\n", numero1, fac4, numero2, fac5);
	return 0;
}
