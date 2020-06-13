#include <stdio.h>
#include <string.h>
#include "constantes.h"
#include "contato.h"
// gcc *.c -o agenda -Wall

int main() {
	Contato contato;
	strcpy(contato.nome, "CONTATO");
	contato.idade = 10;
	printf("%s ", contato.nome);
	printf("%d\n", contato.idade);
	return 0;
}