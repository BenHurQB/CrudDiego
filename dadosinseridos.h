#pragma once
#pragma arguments
#include "varGlobais.h"

//rotina para percorrer o vetor alunos e mostrar o seus registros
void dadosinseridos(int *inseridos){

  int i; 
  
    printf("\nOs dados inseridos foram:\n");
    printf("\nCódigo\t| Nome\t| Email:\n");
    for( i=0; i < *inseridos; i++){ 
      printf("-------------------------------\n");
      printf("%d\t\t| %s\t| %s\n", aluno[i].codigo, aluno[i].nome, aluno[i].email);
    }
  }