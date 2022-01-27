#include <stdio.h>

void ft_ft(int *nbr);

int main()
{
	int a;
	int *punt;

	a =8;
	punt = &a;
	printf("El numero es %d, \n", a);
	ft_ft(punt);
	printf("Ahora el numero es %d, \n", a);
	return (0);
}
