#pragma once
#pragma arguments
#include "varGlobais.h"
#include "telasemregistro.h"
#include "dadosrecuperar.h"

//rotina que mostra os registros do vetor recuperacao
void  procuraDadosRec(int recinseridos){

   int i;
   printf("\033[34m");
   printf("\nBANCO DE RECUPERACAO DE DADOS");
   printf("\n-----------------------------");
   if(recinseridos != 0){
     dadosrecuperar(&recinseridos);//funcao que mostra os registros
  }
   else{
    telasemregistro();//informa que nao existe dados registrados
  }
    
  
}   