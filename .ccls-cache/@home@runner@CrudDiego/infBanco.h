
#include "varGlobais.h"

//rotina para mostrar o uso do vetor aluno, quantos registros for cadastrados e o espaco vazio para lancar registros
void infBanco(int inseridos){

 printf("\033[34m");
 printf("\n*** BANCO DE DADOS CRUD ***");
 printf("\n-----------------------------\n");
 printf("\n    SITUACAO BANCO    ");
 printf("\n-----------------------------\n");
 printf("Usado   Disponivel      Total");
 printf("\n-----------------------------\n");
 printf("\n %d          %d             %d", inseridos, TAM-inseridos, TAM);
 printf("\033[37m");
 
  
}