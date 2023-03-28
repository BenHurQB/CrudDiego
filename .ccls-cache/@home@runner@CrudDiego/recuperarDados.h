#include "varGlobais.h"
#include "telasemregistro.h"
#include "telanaoexistelinha.h"
#include "telalimitealcan.h"
#include "dadosrecuperar.h"
#include "telalinharecup.h"
#include "testeRecCod.h"

int recuperarDados(int *inseridos, int *recinseridos){
  
  int i, recuperar, cod;
  
  printf("\033[34m");
  printf("\nRECUPERAR DADOS");
  printf("\n-----------------------------\n");
  if(*recinseridos != 0){
      dadosrecuperar(recinseridos);
      printf("\033[37m");
      printf("\nQual linha deseja RECUPERAR? ");
      scanf(" %d", &recuperar);
      if (recuperar < *recinseridos){
        if (*inseridos < TAM){ 
          cod = recaluno[recuperar].codigo;
          printf("\n\nVERIFICANDO SE JA EXISTE O CODIGO NO BANCO. EM CASO AFIRMATIVO, VOCE TERA QUE INFORMAR NOVO CODIGO PARA RECUPERAÇAO DO RESTANTE DO REGISTO");
          sleep(2);
          testeRecCod(inseridos, &cod);
          recaluno[recuperar].codigo = cod;
          aluno[*inseridos] = recaluno[recuperar];
          for(i = recuperar; i < *recinseridos-1 ; i++){
            recaluno[i] =recaluno[i+1];
          }
          *inseridos = *inseridos + 1;//ocupar espaco disponivel no BD
          *recinseridos = *recinseridos - 1;//abrir espaco no recuperavel
          telalinharecup();
          
          }else{
            telalimitealcan();
          }
      }
      else{
         telanaoexistelinha();
       }
  }else{
    telasemregistro();
  }


  return *inseridos, *recinseridos;
  }