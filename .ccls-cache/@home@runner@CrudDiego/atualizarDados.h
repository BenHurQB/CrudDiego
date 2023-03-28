#pragma once
#include "varGlobais.h"
#include "telasemregistro.h"
#include "telanaoexistelinha.h"
#include "teladadosatua.h"
#include "dadosinseridos.h"
#include "testeCod.h"

void atualizarDados(int inseridos){

  int i, atualizar, cod;//i serve para percorre vetores, atualizar recebe a linha que sera alterada e cod é o codigo que sera pesquisado 
  cod = 0;
  printf("\033[34m");
  printf("\nATUALIZAR DADOS");
  printf("\n-----------------------------\n");
  if(inseridos != 0){//verifica se existe registro no vetor aluno do BD
    dadosinseridos(&inseridos);//Informa o que foi retistrado no vetor aluno
    printf("\033[37m");
    printf("\nQual linha deseja ATUALIZAR? ");
    printf("\033[34m");
    scanf("%d",&atualizar);
    if (atualizar < inseridos){//verifica se a linha existe para alterar
      testeCod(&inseridos, &cod);//testa o indexador codigo
      aluno[atualizar].codigo = cod;
      printf("\n Digite nome:  ");
      scanf( "%s", aluno[atualizar].nome);
      printf("\n Digite email:  ");
      scanf( "%s", aluno[atualizar].email); 
      teladadosatua();//informa que o registro foi alterado
    }
    else{
      telanaoexistelinha();//informa que nao existe a linha
    }
    
  }
  else{
    telasemregistro();//informa que nao existe o registro
  }
  
  
}