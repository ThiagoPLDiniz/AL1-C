#include <stdio.h>
#define CAP 10

int adiciona(int vetor[CAP])
{
	int i, valor, k=0;
	printf("\nInsira o valor que deseja adicionar ao vetor:\n");
	scanf("%d", &valor);
	for(i=0; i<CAP; i++)
	{
		if(vetor[i] == 0)
		{	
			vetor[i]=valor;
			break;
		}
	}		
	do
	{				
		if(vetor[k] == vetor[i] && k != i)
		{
			vetor[i]=0;					
			printf("Valor já está presente no vetor!\n");
			break;
		}
				
		k++;
	}while(k<CAP);
	

	return(vetor[CAP]);
}
int exclue(int vetor[CAP])
{
	int valor, i;	
	
	printf("\nDigite qual o valor deseja remover do vetor:\n");
	scanf("%d", &valor);	
	
	for(i=0; i<CAP; i++)
	{
		if(valor == vetor[i])
		{
			vetor[i]=0;
			break;
		}
	}
	return(vetor[CAP]);
}
int excluev(int vetor[CAP])
{
	int valor;
	printf("\nDigite a posição que deseja remover do vetor:\n");
	scanf("%d", &valor);
	
	if(vetor[valor-1] != 0)
	{
		vetor[valor-1]=0;
	}
	else
	{
		printf("A posição [%d] do vetor não existe!\n", vetor[valor-1]);
	}
	return(vetor[CAP]);
}
int subs(int vetor[CAP])
{
	int valor, subst, i, k;
	printf("\nDigite o valor que deseja substituir:\n");
	scanf("%d", &valor);
	printf("\nAgora, digite o substituto:\n");
	scanf("%d", &subst);
	do
	{
		if(subst == vetor[k])
		{
			subst=0;
			break;
		}
		k++;
	}while(k<CAP);
	
	if(subst==0)
	{
		printf("Valor inválido!\n");
	}
	else
	{
		for(i=0; i<CAP; i++)
		{
			if(valor == vetor[i] && valor != 0)
			{
				vetor[i]=subst;
				printf("A posição [%d] do vetor, que era %d, agora é %d!\n", i, valor, subst);
				break;
			}
		}
	}
	return(vetor[CAP]);
}
int encont(int vetor[CAP])
{
	int valor, i;	
	printf("\nDigite o valor que deseja encontrar no vetor:\n");
	scanf("\n%d", &valor);
	
	for(i=0; i<CAP; i++)
	{
		if(valor==vetor[i])
		{
			printf("\nO valor %d encontra-se na posição[%d] do vetor!\n", valor, i);
			break;
		}
	}

	return(vetor[CAP]);
}


int main()
{
	int vetor[CAP] = {}, valor, resposta, i=0, j=1, indice=0, k;	
	
	printf("		Bem vindo ao programa de gerenciamento de vetores.\n\n");
	do
	{	
		printf("Escolha entre as opçoes abaixo, qual operaçao deseja realizar:\n [1]Para adicionar um valor;\n [2]Para remover um valor determinado;\n [3]Para remover de determinada posiçao;\n [4]Para alterar valor;\n [5]Para buscar um valor;\n [6]Para exibir todos os valores do vetor; e\n [0]Para sair do programa.\n");
		scanf("\n%d", &resposta);
		
		switch(resposta)
		{
			case 1:	
				adiciona(vetor);
				k=0;
				break;
			case 2:
				exclue(vetor);
				i=0;
				break;
				
			case 3:
				excluev(vetor);
				break;
				
			case 4:
				subs(vetor);
				i=0;
				k=0;
				break;
			case 5:
				encont(vetor);
				i=0;
				break;
				
			case 6:
				do
				{
					printf("O valor da posição [%d] do vetor: %d\n", indice, vetor[indice]);
					j++;
					indice++;
				}while(indice<CAP);
				indice=0;
				break;
							
		}
	
	} while(resposta != 0);
}