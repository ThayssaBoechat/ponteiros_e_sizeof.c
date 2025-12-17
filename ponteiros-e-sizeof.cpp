#include <stdio.h>

int main(){
	
	int numero = 58;
	double valor = 22.4;
	char letra = 'A';
	
	// ponteiro
	int *pNumero = &numero;
	double  *pValor = &valor;
	char *pLetra = &letra;
	
	//declarando sizeof pra calcular o tamanho
	
	int tamanho_int = sizeof (int), tamanho_ponteiro_int = sizeof (pNumero);
	int tamanho_float = sizeof (float), tamanho_ponteiro_float = sizeof (pValor);
	int tamanho_char = sizeof (char), tamanho_ponteiro_char = sizeof (pLetra);
	 
	// imprimir os tamanhos
	
	printf("Tamanho do INT: %d bytes \n ", tamanho_int);
	printf("Tamanho do float: %d bytes \n", tamanho_float);
	printf("Tamanho do char: %d bytes \n ", tamanho_char);
	
	printf("Tamanho do ponteiro para INT: %d bytes \n", tamanho_ponteiro_int);
	printf("Tamanho do ponteiro para float: %d \n", tamanho_ponteiro_float);
	printf("Tamanho do ponteiro para char: %d bytes", tamanho_ponteiro_char);
	
	// imprimir os valores usando ponteiros
	
	printf("Valor de numero: %d \n", *pNumero);
	printf("Valor do decimal: %.2f \n,", *pValor);
	printf("Valor da letra: %c ", *pLetra);
	
	
}
