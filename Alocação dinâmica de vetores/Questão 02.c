#include <stdio.h>//Biblioteca
#include <stdlib.h>//Biblioteca

int main () 
{
  int numero_q; //número de questões
  char *gabarito, **respostas; //ponteiros para armazenar os gabaritos e respostas dos alunos
  int i, j, aprovados = 0; //declaração de variáveis

  printf("Digite o número de questões: ");//Solicitando número de questões
  scanf("%d", &numero_q);//capturando

  //alocação dinâmica dos vetores
  gabarito = (char*) malloc (numero_q * sizeof (char));
  respostas = (char**) malloc (10 * sizeof (char*));

  for (i = 0; i < 10; i++) //alocando memória p vetores com as respostas dos alunos
  {
    respostas [i] = (char*) malloc (numero_q * sizeof (char));
  }

  printf("Digite o gabarito da prova:\n");//gabarito
  for (i = 0; i < numero_q; i++) 
  {
    scanf (" %c", &gabarito [i]); 
  }

  printf ("Digite as respostas dos alunos: \n");//respostas dos alunos
  for (i = 0; i < 10; i++) 
  {
    printf ("Aluno %d: ", i+1);
    for (j = 0; j < numero_q; j++) 
    {
      scanf (" %c", &respostas [i][j]);
    }
  }

  printf ("Notas dos alunos: \n");//notas
  for (i = 0; i < 10; i++)//A nota de cada aluno é calculada através de um loop interno e é armazenada na variável nota
  {
    float nota = 0;
    for (j = 0; j < numero_q; j++) 
    {
      if (respostas [i][j] == gabarito [j]) 
      {
        nota += 10.0 / numero_q;
      }
    }
    printf ("Aluno %d: %.2f\n", i+1, nota);
    if (nota >= 6.0) 
    {
      aprovados++;
    }
  }

  float perc_aprovados = 100.0 * aprovados / 10.0;
  printf ("Porcentagem de alunos aprovados: %.2f%% \n", perc_aprovados);

  //Liberação da memória alocada dinamicamente
  free (gabarito);
  
  for (i = 0; i < 10; i++) 
  {
    free (respostas [i]);
  }
  free (respostas);

  return (0);
}