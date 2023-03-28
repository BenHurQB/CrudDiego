#pragma once
#include "varGlobais.h"
#include "telalimitealcan.h"
#include "testeCod.h"

//rotina para inserir dados no banco BD vetor aluno
int inserirDados(int *inseridos){

  int cod;
  cod = 0;
  printf("\033[34m");
  printf("\nINSERIR DADOS");
  printf("\n-----------------------------\n");
  if ( *inseridos < TAM ){//verifica se ha espacao no vetor aluno
    testeCod(inseridos, &cod);//chama funcao para testar o indexador codigo
    aluno[*inseridos].codigo =  cod;
    printf("\n Digite nome:   ");
    scanf( "%s", aluno[*inseridos].nome);
    printf("\n Digite email:   ");
    scanf( "%s", aluno[*inseridos].email); 
    *inseridos = *inseridos + 1;//diminui espcao no banco
    printf("\033[34m");
    printf("\n    Insercao realizado com SUCESSO. "); 
    printf("\033[37m");
  } 
  else{
      telalimitealcan();//informa que o banco nao pode mais inserir registro
    }
  
  return *inseridos;
  
}