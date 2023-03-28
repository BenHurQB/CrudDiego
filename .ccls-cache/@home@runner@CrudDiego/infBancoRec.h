
#include "varGlobais.h"


//rotina para mostrar o uso do vetor recuperacao, quantos registros for cadastrados e o espaco vazio para lancar registros
void infBancoRec(int recinseridos){

 printf("\033[34m");
 printf("\n*** BANCO DE DADOS CRUD ***");
 printf("\n-----------------------------\n");
 printf("\n SITUACAO PARA RECUPERACAO    ");
 printf("\n-----------------------------\n");
 printf("Usado   Disponivel      Total");
 printf("\n-----------------------------\n");
 printf("\n %d          %d             %d", recinseridos, TAM-recinseridos, TAM);
 printf("\033[37m");
 
}