
*QUESTAO 1*

#include<stdio.h>

int main(int argc, char**argv)
{

	int i, num, maior;

	maior=0;
	i=1;
	do
	{
		printf("Digite o %d°número: ",i++);
		scanf("%d", &num);

		if(num>maior)
		{
			maior=num;
		}
	}
	while(i<=5);

	printf("o maior numero é: %d\n", maior);

	return 0;

}
