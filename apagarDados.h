
#include "varGlobais.h"
#include "telasemregistro.h"
#include "telanaoexistelinha.h"
#include "telalinhapagada.h"
#include "dadosinseridos.h"

int apagarDados(int *inseridos, int *recinseridos){


  int i, apagar; //variavel i para percorrer vetores e apagar para receber a linha que ira ser apagada
  
  printf("\033[34m");
  printf("\nAPAGAR DADOS");
  printf("\n-----------------------------\n");
  
   if(*inseridos != 0){
      dadosinseridos(inseridos);//Mostra o vetor dados inseridos
      printf("\033[37m");
      printf("\n    Qual linha deseja APAGAR? ");
      scanf(" %d", &apagar);
      if (apagar < *inseridos){//verifica se a linha existe
        if (*recinseridos < TAM){//verifica se existe espaco no vetor recuperacao
          recaluno[*recinseridos] = aluno[apagar];//vetor recupera recebe os dados que irao ser deletados para futuro reaproveitamento
          for(i = apagar; i < *inseridos-1 ; i++){//rotina para fazer o deslocamento dos dados de baixo para cima do vetor aluno
            aluno[i] = aluno[i+1];
          }
          *inseridos = *inseridos - 1;//abri espaco no vetor aluno do BD
          *recinseridos = *recinseridos + 1;//diminui espaco no vetor de recuperacao
          telalinhapagada(); //tela informando exito na delacao da linha
          }else{
            for(i = apagar; i < *inseridos-1 ; i++){//essa rotina deleta o registro e informa ao usuario que o vetor de recuperacao atingiu sua capacidade e o registro sera descartado sem poder mais ser recuperado
            aluno[i] = aluno[i+1];
            }
            *inseridos = *inseridos - 1;//abri espaco no vetor aluno BD
            telalinhapagada();
            printf("\033[32m");
            printf("\n    ATENCAO!!!!");
            printf ("\n    Linha Não podera ser recuperada!! Pilha Cheia!!");
            printf("\033[37m");
          }
      }
      else{
        telanaoexistelinha();//informacao que linha nao existe
       }
  }else{
     telasemregistro();//informacao que nao existe o registro
  }
 
  return *inseridos, *recinseridos;
}