#ifndef CONTATO_H
#define CONTATO_H
#include "constantes.h"

typedef struct{
	char nome[MAX_STR];
	char email[MAX_STR];
	char telefone[MAX_STR];
	int idade;
} Contato;

#endif // CONTATO_H