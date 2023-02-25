#include <stdio.h>

int main (void) 
{
int a, b, c, d;//Declaração de quatro variáveis do tipo inteiro

int *p1;//Declaração de uma variável ponteiro para inteiro
int *p2 = &a;//Declaração de uma variável ponteiro para inteiro e atribuição do endereço 'a' a esse ponteiro, o ponteiro 'p2'
int *p3 = &c;//Declaração de uma variável ponteiro para inteiro e atribuição do endereço 'c' a esse ponteiro, o ponteiro 'p3'
p1 = p2;//O ponteiro 'p1' recebe o conteúdo de ponteiro 'p2', que é o endereço de 'a'
*p2 = 10;//O endereço de memória que o ponteiro 'p2' está apontando, ou seja, o endereço de memória da variável 'a', recebe o valor 10
b = 20;// a variável b recebe o valor 20
int **pp;//Declaração de uma variável ponteiro para ponteiro para inteiro
pp = &p1;// O ponteiro para ponteiro para inteiro 'pp' recebe o endereço de ponteiro para inteiro 'p1'
*p3 = **pp;//O endereço de memória que o ponteiro 'p3' está apontando, ou seja, o endereço de memória da variável 'c', recebe o conteúdo de ponteiro para ponteiro para inteiro está apontando,
//ou seja, o valor 10 que está armazenado na variável 'a'. c = a.
int *p4 = &d;//Declaração de uma variável ponteiro para inteiro e atribuição do endereço 'd' a esse ponteiro, o ponteiro 'p4'
*p4 = b + (*p1)++;//O endereço de memória que o ponteiro 'p4' está apontando, ou seja, o endereço de memória da variável 'd', recebe o valor da variável b + 
//o conteúdo que está armazenado no endereço de memória que o ponteiro 'p1' está apontando, ou seja, o valor 10 que está armazenado na variável 'a'

printf("%d\t%d\t%d\t%d\n", a, b, c, d);

//d = 30
//c = 10
//b = 20
//a = 11 

//Por que a variável 'a' exibe o valor 11 e a variável 'c' exibe o valor 10?
//*p4 = b + (*p1)++; nessa última parte da linha do código, mais especificamente, (*p1)++
//o conteúdo que está armazenado no endereço de memória que o ponteiro 'p1' está apontando, ou seja, o endereço de memória da variável 'a', recebe um pós incremento
//o que isso quer dizer? quer dizer que após esse comando ser finalizado, o conteúdo que está armazenado no endereço de memória que o ponteiro 'p1' está apontando, ou seja, o endereço de memória da variável 'a' receberá o valor armazenado na variável + 1
//Como o conteúdo que está armazenado no endereço de memória que o ponteiro 'p3' está apontando, ou seja, o endereço de memória da variável 'c' não recebe esse pós incremento, então o valor permanece o mesmo
    return (0);
}