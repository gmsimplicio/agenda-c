#ifndef CONTATO_H
#define CONTATO_H
#include "constantes.h"

typedef struct{
	char nome[MAX_STR];
	char email[MAX_STR];
	char telefone[MAX_STR];
	int idade;
} Contato;

Contato* criar_contato(char* nome, char* email, char* telefone, int idade);
char* contato_to_string(Contato* contato);

#endif // CONTATO_H