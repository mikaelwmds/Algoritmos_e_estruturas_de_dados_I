#include <stdio.h> //Declaração da biblioteca de entrada e saída de dados
#include <stdlib.h> //Declaração da biblioteca 

int main () 
{
    int numero_entrevistados, i, FNG = 0, FG = 0, MNG = 0, MG = 0; //Declaração de seis variáveis. 
    char *sexo, *opiniao;// Declaração de dois ponteiros para char

    printf ("Digite o numero de entrevistados: ");//Solicitando ao usuário o número de entrevistados
    scanf ("%d", &numero_entrevistados);//capturando o número

    sexo = (char *) malloc (numero_entrevistados * sizeof (char));//alocação dinâmica, onde ponteiro sexo recebe a alocação de memória
    opiniao = (char *) malloc (numero_entrevistados * sizeof (char));//alocação dinâmica, onde ponteiro opiniao recebe a alocação de memória

    printf ("Digite as respostas dos entrevistados: \n"); //exibir mensagem do printf

    for (i = 0; i < numero_entrevistados; i = i + 1) //for para solicitar que o usuário insira as respostas dos entrevistados.
    {
        printf ("Entrevistado %d: \n", i + 1);
        printf ("Sexo (M/F): ");
        scanf (" %c", &sexo [i]);
        printf ("Opiniao (gostou/não gostou): ");
        scanf (" %s", &opiniao [i]);
        if (sexo [i] == 'F' && opiniao [i] == 'gostou') {
            FG++;
        }
        if (sexo [i] == 'M' && opiniao [i] == 'não') {
            MNG++;
        }
        if (sexo [i] == 'M' && opiniao [i] == 'gostou') {
            MG++;
        }
        if (sexo [i] == 'F' && opiniao [i] == 'não') {
            FNG++;
        }
    }

    printf ("Porcentagem de mulheres que gostaram do produto: %.2f%% \n", ((float) FG / numero_entrevistados) * 100);//resultado
    printf ("Porcentagem de homens que nao gostaram do produto: %.2f%% \n", ((float) MNG / numero_entrevistados) * 100);//resultado

    free (sexo); //liberação da memória
    free (opiniao); //liberação da memória

    return (0);
}