#include <stdio.h>

int main()
{
	//resolvido
	int n, y, i, a;
	
	printf("Insira um número inteiro:\n");
	scanf("%d", &n);
	printf("Agora insira um segundo número inteiro:\n");
	scanf("%d", &y);

	
	for (i=0; (a = i*y)<n; i++)
	{
		printf("%d\n", a);
	}
}
