#include <stdio.h>
int main(void)
{
	int vetor[] = {}, valora, valorb, valorn, i, j=0;
	
	printf("Entre com o valor A:\n");
	scanf("%d", &valora);
	printf("Entre com o valor B:\n");
	scanf("%d", &valorb);	
	printf("Entre com o valor N:\n");
	scanf("%d", &valorn);
	
	for(i=valora; i<=valorb; i++)
	{
		if(i%valorn==0)
		{
			vetor[j] = i;
			j++;
		}
		else
		{
			continue;
		}
	}
	i=0;
	j=0;	
	do
	{
		printf("Posição [%d] do vetor: %d\n", j, vetor[i]);
		j++;
		i++;
	} while(vetor[i]<=valorb);
}