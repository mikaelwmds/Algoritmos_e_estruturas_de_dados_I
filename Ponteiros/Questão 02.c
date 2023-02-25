#include <stdio.h>

int main (void) 
{
    int x, *p;

    x = 100;
    p = &x;

    printf("Valor de p = %p\tValor de *p = %d", p, *p);

    //Letra a: Advertência.
    //Letra b: O compilador emite tal mensagem porque o operador de atribuição "=" espera receber um endereço de memória para armazenar o valor de uma variável ponteiro. No entanto, o valor atribuído à variável ponteiro 'p' é uma variável inteira, o que causa um erro de tipo.
    //Letra c: Não, a compilação irá falhar com um erro.
    //Letra d: Para corrigir o erro, devemos atribuir o endereço de memória da variável 'x' à variável ponteiro 'p', usando o operador de referência "&":
    //Letra e: Sim.
    
   return (0);
}