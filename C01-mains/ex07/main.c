#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);
void ft_print_array(int *tab, int size);

void ft_print_array(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d,", *(tab + i));
		i++;
	}
}

int main()
{
	int tab[6];
	int *punt;


	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 9;

	punt = &tab[0];
	printf("The array is:");
	ft_print_array(punt,6);
	printf("\n");
	ft_rev_int_tab(punt, 6);
	printf("Now the array is:");
	ft_print_array(punt, 6);
}
