/*Lumma Cristina de Oliveira Maia - 2015090077*/

#include<stdio.h>

int main(int argc, char** argv)
{
	int soma,media,i, num;

	i=1;

	do{
		printf("Digite o %d° numero: ",i++);
		scanf("%d", &num);

		soma=soma+num;
	}
	while(i<=5);

	media=(soma/5);

	printf("soma: %d\n", soma);
	printf("media: %d\n", media);

	return 0;
}
