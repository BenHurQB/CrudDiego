#include "varGlobais.h"

void  procuraDadosRec(int recinseridos){

   int i;
  
   printf("\nPESQUISAR  DADOS");
   printf("\n-----------------------------");
   if(recinseridos != 0){
    printf("\nOs dados inseridos foram:\n");
    printf("Código\t| Nome\t| Email:\n");
    for(int i=0; i<recinseridos;i++){ 
    printf("-------------------------------\n"); 
    printf("%3.d\t\t| %s\t| %s\n", recaluno[i].codigo, recaluno[i].nome, recaluno[i].email);
    }
  }else{
    printf("\n\aNão existe nenhum registro");
    printf("\n-----------------------------\n");
  }
    
  
}   