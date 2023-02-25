#include <stdio.h>//Declaração da biblioteca de entrada e saída de dados.
#include <math.h>//Declaração da biblioteca math.h para usar as funções pow e sqrt.

void calcula_hexagono (float l, float *areap, float *perimetrop);//Protótipo da função.

int main ()
{
    float l, area, perimetro;//Declaração de três variáveis do tipo float.
    
    printf("Digite o valor do lado do hexágono: ");//Solicitando ao usuário um valor do lado do hexágono.
    scanf("%f", &l);//Captura do valor do lado hexágono.
    
    system ("clear");//limpatela.
    
    calcula_hexagono (l, &area, &perimetro);//chamada da função calcula_hexagono, onde foi passado três argumentos. 
    //l; endereço ou referência de 'area'; e o endereço ou referência de 'perimetro'.
    //A função foi chamada desta maneira, pois se trata de uma função por referência.
    //Os dois ponteiros para float passados como argumento na função calcula_hexagono apontam para as variáveis do tipo float 'area' e 'perimetro' declarados na função main.
    
    printf ("Área do hexágono: %f \n", area);//exibindo o resultado
    printf ("Perímetro do hexágono: %f \n", perimetro);//exibindo o resultado
    
    return (0);
}

void calcula_hexagono (float l, float *areap, float *perimetrop)//função onde realiza os cálculos para descobrir a area e o perímetro de um hexagóno.
{//foram usadas as funções pow e sqrt.
    *areap = ((3 * pow (l, 2)) * sqrt (3)) / 2;//o ponteiro 'areap' aponta para a variável 'area' declarada na função main e modifica o valor de 'area'.
    *perimetrop = 6 * l;//o ponteiro 'perimetrop' aponta para a variável 'perimetro' declarada na função main e modifica o valor de 'perimetro'.
}