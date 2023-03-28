#include "varGlobais.h"
#include "menu.h";
#include "inserirDados.h"
#include "pesquisarDados.h"
#include "atualizarDados.h"
#include "apagarDados.h"
#include "recuperarDados.h"
#include "informacoesDados.h"
#include "pesquisarRecDados.h"

int main(void) {
  
  int opcao, inseridos, recinseridos;
  recinseridos = 0;//variavel para controle de acesso ao conteudo do vetor de recuperacao
  inseridos = 0; //variavel para controle acesso ao conteudo dos vetor de aluno
  do {
      opcao = menu(opcao);
      switch ( opcao ){
        case 0 :
          break; 
        case 1 :
          inserirDados(&inseridos);  // funcao Create
          break;
        case 2 :
          pesquisarDados(inseridos);  // funcao Read
          break;
        case 3 : 
          atualizarDados(inseridos);  // Update
          break;
        case 4 :
          apagarDados(&inseridos, &recinseridos);  // Delete
          break;
        case 5:
          recuperarDados(&inseridos, &recinseridos); // Recuperar
          break;
        case 6:
          pesquisarRecDados(recinseridos); // Read vetor Recuperar
          break;
        case 7:
          informacoesDados(inseridos,recinseridos); // Informacoes do sistema
          break;
        default :
          printf("\033[31m");
          printf("\n    Opcao invalida!!!!\n");
          printf("\033[37m");
          break;
      }
    sleep(1);
    } while( opcao != 0);
  printf("\033[35m");
  printf("\n\n\a\aBen Inf agradece a consulta!!! Ateh breve...");
  printf("\n\n\a\aBy BQB");
  printf("\033[37m");
  return 0;
  }