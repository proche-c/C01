#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int num1;
	int num2;
	int division;
	int module;
	int *punt1;
	int *punt2;

	num1 = 13;
	num2 = 3;
	division = num1 / num2;
	module = num1 % num2;
	punt1 = &num1;
	punt2 = &num2;
	printf("El valor de a es %d,y el de b es %d,\n", *punt1, *punt2);
	ft_ultimate_div_mod(punt1, punt2);
	printf("Pasando solo los punteros, la division es %d,y el modulo es %d, \n", *punt1, *punt2);
	return(0);
}

	
