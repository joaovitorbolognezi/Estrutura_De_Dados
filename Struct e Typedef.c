#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	int idade;
	char telefone[19];
}pessoa;

pessoa p;

int main(){
	printf("Nome: ");
	gets(p.nome);
	fflush(stdin);
	
	printf("Idade: ");
	gets(p.idade);
	fflush(stdin);
	
	printf("Telefone: ");
	gets(p.telefone);
	fflush(stdin);
	
	return 0;
}
