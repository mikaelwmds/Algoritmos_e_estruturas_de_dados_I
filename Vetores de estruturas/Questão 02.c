#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
  char nome [50];
  char documento [20];
  int idade;

} Pessoa; //struct pessoa

void preenchePessoa (Pessoa* pessoa) //função p preencher
{
  printf ("Digite o nome da pessoa: ");
  scanf ("%s", pessoa -> nome);

  printf ("Digite o numero do documento: ");
  scanf ("%s", pessoa -> documento);

  printf ("Digite a idade da pessoa: ");
  scanf ("%d", &pessoa -> idade);
}

void imprimePessoa (Pessoa* pessoa) //função p exibir
{
  printf ("Nome: %s \n", pessoa -> nome);
  printf ("Documento: %s \n", pessoa -> documento);
  printf ("Idade: %d \n", pessoa -> idade);
}

void atualizaIdade (Pessoa* pessoa, int novaIdade) //função p atualizar nova idade
{
  pessoa -> idade = novaIdade;
}

void imprimeMaisVelhaMaisNova (Pessoa* pessoas, int numPessoas) 
{
  Pessoa maisVelha = pessoas [0];
  Pessoa maisNova = pessoas [0];

  for (int i = 1; i < numPessoas; i++) 
  {
    if (pessoas [i].idade > maisVelha.idade) 
    {
      maisVelha = pessoas [i];
    }

    if (pessoas [i].idade < maisNova.idade) 
    {
      maisNova = pessoas [i];
    }
  }

  printf ("Pessoa mais velha: %s \n", maisVelha.nome);
  printf ("Pessoa mais nova: %s \n", maisNova.nome);
}

int main () //chamadas das funções//
{
  Pessoa pessoa;

  preenchePessoa (&pessoa);
  imprimePessoa (&pessoa);

  atualizaIdade (&pessoa, 30);
  imprimePessoa (&pessoa);

  Pessoa pessoas [3];

  for (int i = 0; i < 3; i++) 
  {
    preenchePessoa (&pessoas[i]);
  }

  imprimeMaisVelhaMaisNova (pessoas, 3);

  return (0);
}