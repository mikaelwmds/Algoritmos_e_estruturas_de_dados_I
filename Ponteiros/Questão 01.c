#include <stdio.h>

int main ()
{
    int x, y, *p;//Declaração de duas variáveis do tipo inteiro e uma variável ponteiro para inteiro.
    
    y = 0;//y recebe 0
    p = &y;//ponteiro 'p' recebe endereço de y
    x = *p;//x recebe conteúdo que o ponteiro 'p' está apontando, ou seja, conteúdo de y, que é 0
    x = 4;//x recebe 4 e modifica seu conteúdo
    (*p)++;//o conteúdo que o ponteiro 'p' está apontando recebe o seguinte: (*p) = (*p) + 1, ou seja, recebe 0 + 1 = 1
    --x;//x recebe o seguinte: x = x - 1, ou seja, o valor da variável x fica 3
    (*p) += x;//o conteúdo que o ponteiro 'p' está apontando recebe o seguinte: (*p) = (*p) + x, ou seja, recebe 1 + 3 = 4 

    printf ("%d \n", x);//3
    printf ("%d \n", y);//4
    printf ("%d \n", *p);//4
    
    return (0);
}