#include <stdio.h>
void ft_sort_int_tab(int *tab, int size);

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
	int tab[7];
	int *punt;

	tab[0] = 4;
	tab[1] = 8;
	tab[2] = 7;
	tab[3] = 5;
	tab[4] = 2;
	tab[5] = 1;
	tab[6] = 0;
	punt = &tab[0];
	printf("The array is:");
	ft_print_array(punt,7);
	printf("\n");
	ft_sort_int_tab(punt, 7);
	printf("Now the array is:");
	ft_print_array(punt, 7);
}
