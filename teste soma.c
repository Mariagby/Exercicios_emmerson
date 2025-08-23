#include <stdio.h>
/*função main inicia execução do programa*/
int main (void)
{
    int inteiro1; /*primeiro número a ser informado pelo usuário*/
    int inteiro2; /*segundo número a ser informado pelo usuário*/
    int soma; /*variável em que a soma será mantida*/

    printf("digite o primeiro inteiro\n"); /*prompt*/
    scanf("%d", &inteiro1); /*lê um inteiro*/

    printf("digite o segundo inteiro\n"); /*prompt*/
    scanf("%d", &inteiro2); /*lê um inteiro*/

    soma=inteiro1+inteiro2;  /*atribui o total À soma*/
    printf("A soma é %d\n", soma); /*print soma*/

    return 0; /*indica que o programa foi concluído com sucesso*/
    } /*fim da função main*/
