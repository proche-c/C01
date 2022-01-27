#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
	int a;
	int *punt1;
	int **punt2;
	int ***punt3;
	int ****punt4;
	int *****punt5;
	int ******punt6;
	int *******punt7;
	int ********punt8;
	int *********punt9;
	a = 9;
	punt1 = &a;
	punt2 = &punt1;
	punt3 = &punt2;
	punt4 = &punt3;
	punt5 = &punt4;
	punt6 = &punt5;
	punt7 = &punt6;
	punt8 = &punt7;
	punt9 = &punt8;
	printf("El numero es %d, \n", a);
	ft_ultimate_ft(punt9);
	printf("Ahora el numero es %d, \n", a);
	return(0);
}

