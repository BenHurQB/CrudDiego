#pragma once
#include "varGlobais.h"


//rotina para usuario utilizar o programa de CRUD
int menu(int opcao){
  
  printf("\n\n\nPROGRAMA CRUD");
  printf("\n-----------------------------");
  printf("\nMenu de opcoes APP CRUD\n");
  printf("\n-----------------------------");
  printf("\n 1 - Inserir dados");
  printf("\n 2 - Pesquisar dados");
  printf("\n 3 - Atualizar dados");
  printf("\n 4 - Apagar dados");
  printf("\n 5 - Recuperar dados");
  printf("\n 6 - Pesquisar Recuperar dados");
  printf("\n 7 - Informacoes do Sistema");
  printf("\n 0 - Terminar");
  printf("\n-----------------------------\n");
  printf("\n        Sua opcao:  ");
  scanf(" %i", &opcao);
  printf("\n-----------------------------\n");
  return opcao;
}