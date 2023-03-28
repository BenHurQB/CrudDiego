#pragma once
#pragma arguments
#include "varGlobais.h"

int testeRecCod(int *inseridos, int *cod){

 int  i;
 char encontrei;

  encontrei = 's';
  while (encontrei == 's'){
      encontrei = 'n';
      for (i=0; i<*inseridos;i++){
          if(*cod == aluno[i].codigo){
            encontrei = 's';
            i = *inseridos + 1;
            printf("\033[31m");
            printf("\n\n    Negado!!!. Codigo já cadastrado.\n");
            printf("\033[34m");
            printf("\n Digite NOVO codigo:  ");
            scanf(" %d", *&cod);
          }
          
      }
  } 
  
  return *cod;
  
}