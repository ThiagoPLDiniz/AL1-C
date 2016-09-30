#include <stdio.h>
int main()
{
	int base, exp, calc=1, i;
	
	printf("Insira o valor de base: \n");
	scanf("%d", &base);
	printf("Insira o valor do expoente: \n");
	scanf("%d", &exp);
	
	for(i=1; i<=exp; i++)
	{
		calc = calc * base;
	}
	printf("O resultado e: %d", calc);
}
