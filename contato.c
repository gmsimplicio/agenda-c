#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "contato.h"
#include "constantes.h"

Contato* criar_contato(char* nome, char* email, char* telefone, int idade){
	Contato* contato;
	contato = malloc(sizeof(Contato));

	if(contato == NULL)
		exit(1);

	strncpy(contato->nome, nome, MAX_STR);
	strncpy(contato->email, email, MAX_STR);
	strncpy(contato->telefone, telefone, MAX_STR);
	contato->idade = idade;

	return contato;
}

char* contato_to_string(Contato* contato){
	char* string = malloc(4*MAX_STR * sizeof(char));

	snprintf(string, 4*MAX_STR, "Contato{nome:%s, email:%s, telefone:%s, idade:%d}", contato->nome, contato->email, contato->telefone, contato->idade);
	
	return string;
}
