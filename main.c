#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "constantes.h"
#include "contato.h"
// gcc *.c -o agenda -Wall

int main() {
	Contato* contato;

	contato = criar_contato("Mario", "mario@ufms.br", "67999", 30);

	char* string_formatada = contato_to_string(contato);
	printf("%s\n", string_formatada);

	free(string_formatada);
	free(contato);
	return 0;
}