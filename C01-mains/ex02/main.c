#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int num1;
	int num2;
	int *punt1;
	int *punt2;

	num1 = 10;
	num2 = 2;
	punt1 = &num1;
	punt2 = &num2;
	printf("El numero 1 es %d,y el numero 2 es %d, \n", num1, num2);
	ft_swap(punt1, punt2);
	printf("Ahora el numero 1 es %d,y el numero 2 es %d, \n", num1, num2);
	return(0);
}

