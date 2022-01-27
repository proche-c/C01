#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int num1;
	int num2;
	int division;
	int module;
	int *punt1;
	int *punt2;

	num1 = 13;
	num2 = 2;
	division = num1/num2;
	module = num1 % num2;
	punt1 = &division;
	punt2 = &module;
	printf("La division es %d,y el modulo %d, \n", division, module);
	ft_div_mod(15, 3, punt1, punt2);
	printf("Ahora la division es %d,y el modulo es %d, \n", division, module);
}

