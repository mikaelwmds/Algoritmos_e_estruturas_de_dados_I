#include <stdio.h>

struct aluno 
{
    int mat;
    char nome [81];
    float notas [3];
    float media;
};

typedef struct aluno Aluno;

struct turma 
{
    char id;
    int vagas;
    Aluno *alunos [MAX_VAGAS];
}

typedef struct turma Turma;

Turma *turmas [MAX_TURMAS];

Turma *cria_turma (char id) 
{
    Turma *pontturma = (Turma*) malloc (sizeof (Turma)); 
    if (t == NULL) 
    { 
        printf ("Erro ao alocar memória! \n");
        exit (1); 
    }
    
    pontturma -> id = id; 
    pontturma -> vagas = MAX_VAGAS;
    
    for (int i = 0; i < MAX_VAGAS; i = i + 1) 
    {
        pontturmat -> alunos [i] = NULL;
    }
    
    return pontturmat; 
}

int main () 
{
    
    return (0);
}