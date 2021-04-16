#include <stdio.h>
#include "ex05/ft_putstr.c"

int		main(void)
{	
	printf("-------------------------Validacao do EX05-------------------------\n\n");
	printf("Escreva uma função que mostre um a um os caracteres de uma string na tela. \n\n");
	printf("O endereço do primeiro caractere da string está contido no ponteiro passado como\n");
	printf("parâmetro para a função.\n\n");
	
	
	char a[] = "This is a char array ( string )\0";		
	char *pa;
	
	pa = a;
	ft_putstr(pa);
	
	printf("(este texto deve estar imediatamente apos \"This is a char array ( string )\"\n\n");
	
	
	printf("--------------------------------FIM--------------------------------\n\n");	
	return (0);
}