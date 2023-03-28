#pragma once
#include "varGlobais.h"
#include "telasemregistro.h"
#include "dadosinseridos.h"
#include "dadosrecuperar.h"

//rotina para mostrar os dados cadastrados no vetor recuperacao e retornar se o banco estiver vazio
void pesquisarRecDados (int recinseridos){
   int i;
   printf("\033[34m");
   printf("\nPESQUISAR RECUPERAR DADOS");
   printf("\n-----------------------------");
   if(recinseridos != 0){
    dadosrecuperar(&recinseridos);//chama a funcao que mostra os dados do vetor de recuperacao
    
    printf("\033[37m");
  }else{
    telasemregistro();//informar o que vetor recuperacao esta vazio
  }
    
  
}   