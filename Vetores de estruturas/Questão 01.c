#include <stdio.h>
#include <stdlib.h>

typedef struct Funcionario//struct funcionario
{
    char nome [100];
    float salario;
    int identificador;
    char cargo [100];

} Funcionario;

void preencheFuncionario (Funcionario* funcionario) //função para preencher com os dados dos funcionarios
{
    printf ("Digite o nome do funcionario: ");
    scanf ("%s", funcionario -> nome);
    printf ("Digite o salario do funcionario: ");
    scanf ("%f", &(funcionario -> salario));
    printf ("Digite o identificador do funcionario: ");
    scanf ("%d", &(funcionario -> identificador));
    printf ("Digite o cargo do funcionario: ");
    scanf ("%s", funcionario -> cargo);
}

void imprimeFuncionario (Funcionario* funcionario) //função p exibir 
{
    printf ("Nome: %s \n", funcionario -> nome);
    printf ("Salario: %.2f \n", funcionario -> salario);
    printf ("Identificador: %d \n", funcionario -> identificador);
    printf ("Cargo: %s \n", funcionario -> cargo);
}

enum { NAO = 0, SIM };// enum para usar na função abaixo

void alteraSalarioFuncionario (Funcionario* funcionario) //funçaõ p alterar salario
{
    int opcao;
 
    printf ("O salario atual do funcionario e %.2f.\n", funcionario -> salario);
    printf ("Deseja alterar o salario? (%d = Nao, %d = Sim) \n", NAO, SIM);
    scanf( "%d", &opcao);
    if (opcao == SIM) 
    {
        printf ("Digite o novo salario: ");
        scanf ("%f", &(funcionario -> salario));
        printf ("Salario alterado com sucesso. \n");
    }
    else 
    {
        printf ("O salario nao foi alterado. \n");
    }
}

void imprimeMaiorEMenorSalario (Funcionario* funcionarios, int numFuncionarios) //função imprime maior e menor salario
{
    int i;
    int indiceMaiorSalario = 0;
    int indiceMenorSalario = 0;

    for (i = 1; i < numFuncionarios; i++) 
    {
        if (funcionarios[i].salario > funcionarios [indiceMaiorSalario].salario) 
        {
            indiceMaiorSalario = i;
        }
        if (funcionarios[i].salario < funcionarios [indiceMenorSalario].salario) 
        {
            indiceMenorSalario = i;
        }
    }
    printf ("Funcionario com maior salario: \n");
    printf ("Cargo: %s \n", funcionarios [indiceMaiorSalario].cargo);
    printf ("Salario: %.2f \n", funcionarios [indiceMaiorSalario].salario);
    printf ("Funcionario com menor salario: \n");
    printf ("Cargo: %s \n", funcionarios [indiceMenorSalario].cargo);
    printf ("Salario: %.2f \n", funcionarios [indiceMenorSalario].salario);
}

#define MAX_FUNCIONARIOS 100

int main () 
{
    int i, numFuncionarios, opcao, funcionarioEscolhido; //declaracao das variaveis e chamadas da função
    Funcionario funcionarios [MAX_FUNCIONARIOS];
    
    printf("Digite o numero de funcionarios: ");
    scanf("%d", &numFuncionarios);
    
    for (i = 0; i < numFuncionarios; i++) 
    {
        printf ("Preenchendo informacoes do funcionario %d: \n", i+1);
        preencheFuncionario (&funcionarios[i]);
    }
    
    printf ("\nFuncionarios cadastrados: \n");
    for (i = 0; i < numFuncionarios; i++) 
    {
        printf ("Funcionario %d: \n", i+1);
        imprimeFuncionario (&funcionarios[i]);
        printf("\n");
    }

    do {
        printf("Digite o numero do funcionario que deseja modificar o salario (digite 0 para sair): ");
        scanf("%d", &funcionarioEscolhido);

        if (funcionarioEscolhido > 0 && funcionarioEscolhido <= numFuncionarios) 
        {
            printf ("Alterando salario do funcionario %d: \n", funcionarioEscolhido);
            alteraSalarioFuncionario (&funcionarios [funcionarioEscolhido - 1]);
            printf ("\n");
            
            printf("Informacoes do funcionario %d apos a alteracao: \n", funcionarioEscolhido);
            imprimeFuncionario (&funcionarios [funcionarioEscolhido - 1]);
            printf ("\n");
        }
    } while (funcionarioEscolhido != 0);

    printf("Maior e menor salario: \n");
    imprimeMaiorEMenorSalario (funcionarios, numFuncionarios);
    
    return (0);
}