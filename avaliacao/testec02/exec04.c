#include <stdio.h>
#include "ex04/ft_str_is_lowercase.c"

int		main(void)
{
	char str01[35] = "ThisstRiNgHasonlyletTersThisstRiNg";
	char str02[35] = "This4iS4a4nuMBer4leTTer4mix4string";
	char str03[35] = "2873640287408723428736402874087234";
	char str04[35] = "onlylowerlettershereblablatestehah";
	char str05[35] = "ONLYUPPERCASEHERETHISISONLYUPPERAS";
	char str06[35] = {97,98,99,100,101,102,2,104,105,97,98,99,100,101,102,103,104,105,97,98,99,100,101,102,103,104,105,97,98,99,100,101,99,100};
	char str07[35] = "";

	int res01 = ft_str_is_lowercase(str01);
	int res02 = ft_str_is_lowercase(str02);
	int res03 = ft_str_is_lowercase(str03);
	int res04 = ft_str_is_lowercase(str04);
	int res05 = ft_str_is_lowercase(str05);
	int res06 = ft_str_is_lowercase(str06);
	int res07 = ft_str_is_lowercase(str07);	
	
	printf("--------------------------------------EX04--------------------------------------\n");	
	printf("-------------------------------------INICIO-------------------------------------\n");
	printf("----Imprimir 1 somente strings inteiramente compostas por letras minusculas-----\n");
	printf("================================================================================\n");
	printf("-------------------(!) denota onde deve haver o valor 1!------------------------\n");
	printf("================================================================================\n");
	printf("Only letters:		%s: 	Resultado:	%d\n",str01,res01);
	printf("Letters and numbers:	%s: 	Resultado:	%d\n",str02,res02);
	printf("Only numbers:		%s: 	Resultado:	%d\n",str03,res03);
	printf("Only lowercase:		%s: 	Resultado:	%d(!)\n",str04,res04);
	printf("Only uppercase:		%s: 	Resultado:	%d\n",str05,res05);
	printf("Array esquisita:	%s:	Resultado:	%d\n",str06,res06);
	printf("String em branco:	%s:					Resultado:	%d(!)\n",str07,res07);	
	printf("--------------------------------------FIM---------------------------------------\n");
	
}