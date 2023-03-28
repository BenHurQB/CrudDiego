#pragma once
#pragma arguments
#include <stdio.h>

#define TAMNOME 15
#define TAM 3


struct cadastro{
  int codigo;
  char nome[TAMNOME];
  char email[TAMNOME];
};

struct cadastro aluno[TAM];
struct cadastro recaluno[TAM];
