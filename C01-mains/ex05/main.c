#include <stdio.h>

void ft_putstr(char *str);

int main()
{
	char name[] = "hola";
	char *punt;

	punt = &(name[0]);
	ft_putstr(punt);
	printf("Pasando solo el puntero, la cadena es %s, ",punt);
}
