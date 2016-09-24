#include <stdio.h>
int main()
{
	//resolvido
	int i;
	
	for(i=1; i<=50; i++)
	{
		if(i%2==0)
		{
			printf("-%d ", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
}
