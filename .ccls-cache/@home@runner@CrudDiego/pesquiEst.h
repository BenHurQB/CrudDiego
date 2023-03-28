#include "varGlobais.h"


//rotina para mostrar a situacao do banco de dados, banco de recuperacao de dados e informacoes uteis das atividades do programa
void informacoesDados(int inseridos, int recinseridos){

  int op;

  printf("\nMENU DE INFORMACOES DO CRUD");
  printf("\n-----------------------------");
  printf("\n 1 - Situacao do Banco");
  printf("\n 2 - Situacao do Banco de Recuperacao Dados");
  printf("\n 3 - Ajuda");
  printf("\n 4 - Home");
  printf("\n-----------------------------\n");
  printf("\n        Sua opcao:  ");
  scanf(" %i", &op);
  printf("\n-----------------------------\n");
  
  
    
   
    switch ( op ){
        case 1 :
          infBanco(inseridos);
          break; 
        case 2 :
          infBancoRec(recinseridos);
          break;
        case 3 :
          ajuda();
          break;
        case 4 :
          printf("Retornando para o Menu Principal!!!");
          break;      
        default:
          printf("\033[31m");
          printf("\n    Opcao invalida!\n");
          printf("\033[37m");
          break;
      }
    
   
}