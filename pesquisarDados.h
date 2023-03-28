#pragma once
#include "varGlobais.h"
#include "telasemregistro.h"
#include "dadosinseridos.h"

//rotina para mostrar os dados cadastrados e retornar se o banco estiver vazio

void pesquisarDados (int inseridos){
   int i;
   printf("\033[34m");
   printf("\nPESQUISAR  DADOS");
   printf("\n-----------------------------");
   if(inseridos != 0){
    dadosinseridos(&inseridos);//chama funcao para mostrar os registros no vetor aluno do banco de dados
    
    printf("\033[37m");
  }else{
    telasemregistro();//informa que o banco esta vazio
  }
    
  
}   
  


  
