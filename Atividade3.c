#include <stdio.h>

int main(){
	
	char nome[7] = "Moreno";
	int idade = 45;
	char *p = nome;
	int *i = &idade;
	char **pp = &p;
	int **ii = &i;
	
	printf("Variavel usando nome: %s\n", nome);
	printf("Usando ponteiro: %s\n", p);
	printf("Usando ponteiro de ponteiro: %s\n", *pp);
	printf("\n");
	printf("2o. caracter usando pp com []:%c\n", (*pp)[1]);
	printf("3o. caracter usando aritimetica de pp:%c\n",*(*pp+2));
	printf("\n");
	printf("Varivel idade: %d\n", idade);
	printf("Usando ponteiro: %d\n", *i);
	printf("Usando ponteiro de ponteiro: %d\n", **ii);
	printf("\n");
	printf("End. de nome: %p\n", &nome);
	printf("End. ponteiro de nome: %p\n", &p);
	printf("End. ponteiro de ponteiro de nome: %p\n", &pp);
	printf("\n");
	printf("End. de idade: %p\n", &idade);
	printf("End. ponteiro de idade: %p\n", &i);
	printf("End. ponteiro de ponteiro de idade: %p\n", &ii);
}
