#include <stdio.h>
#include "ex00/ft_ft.c"

int		main(void)
{
	int i;
	int *pi;

	i = 98654;
	pi = &i;
	printf("-------------------------Validacao do EX00-------------------------\n\n");
	printf("Escrever uma função que altere o valor do int indicado \n");
	printf("pelo ponteiro para 42.\n\n");
	printf("before: 	%d\n", i);
	ft_ft(pi);
	printf("after: 		%d <- ESTE VALOR DEVE SER 42!\n\n", i);
	printf("--------------------------------FIM--------------------------------\n\n");
	
	return (0);
}