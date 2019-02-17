#include <stdio.h>
int main()
{
float cel, fah;
	printf("este programa convierte los grados Celsius a grados Fahrenheit \n");
	printf("introduzca la temperatura: ");
		scanf("%f", &cel);
	fah = ( cel * 1.8) + 32;
	printf("La temperatura resultantes es ");
	printf("%.3f",fah);
	printf(" grados Fahrenheit");
	printf("\n");
	
	return 0;
	
	
	
	
}
