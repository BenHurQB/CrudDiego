#pragma once
#pragma arguments
#include "varGlobais.h"

//rotina para percorrer o vetor de recuperacao e mostrar seus registros
void dadosrecuperar(int *recinseridos){

  int i; 
  
   printf("\nOs dados que podem ser recuperados são:\n");
   printf("Código\t| Nome\t| Email:\n");
   for(int i=0; i<*recinseridos;i++){ 
      printf("-------------------------------\n"); 
      printf("%3.d\t\t| %s\t| %s\n", recaluno[i].codigo, recaluno[i].nome, recaluno[i].email);
      printf("\033[37m");
     }
  }