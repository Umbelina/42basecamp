#include <stdio.h>
#include "ex11/ft_putstr_non_printable.c"

int		main(void)
{
	printf("-------------------------------------INICIO-------------------------------------\n");
	printf("--------------------------------------EX11--------------------------------------\n\n");	
	char src1[] = "Oi\nvoce esta bem?";		
	char src2[] = "Teste \nPerso\rnalizado\t";
	ft_putstr_non_printable(src1);
	printf("\n");
	ft_putstr_non_printable(src2);
	printf("\n");
	printf("--------------------------------------Fim---------------------------------------\n");	
	return (0);
}