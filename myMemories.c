#include <stdio.h>
#include <stdlib.h>

int main(){

	char name[100];
	int age;

	printf("Qual nome nome\n?");
	scanf("%s", &name);

	printf("Qual sua idade?\n");
	scanf("%d\n", &age);

	printf("Nome: s%\nIdade: %d.\n",name,age);
	printf("Valide seu conhecimento...\n");
	printf("A primeira letra do seu nome é: %c\n", name[0]);

	if (age>=18){
		printf("Adulto.\n");
	}else if(age>=12){
		printf("Adolescente.\n");
	}else{
		printf("Criança.\n");
	}

	return 0;

}
