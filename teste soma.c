#include <stdio.h>
/*fun��o main inicia execu��o do programa*/
int main (void)
{
    int inteiro1; /*primeiro n�mero a ser informado pelo usu�rio*/
    int inteiro2; /*segundo n�mero a ser informado pelo usu�rio*/
    int soma; /*vari�vel em que a soma ser� mantida*/

    printf("digite o primeiro inteiro\n"); /*prompt*/
    scanf("%d", &inteiro1); /*l� um inteiro*/

    printf("digite o segundo inteiro\n"); /*prompt*/
    scanf("%d", &inteiro2); /*l� um inteiro*/

    soma=inteiro1+inteiro2;  /*atribui o total � soma*/
    printf("A soma � %d\n", soma); /*print soma*/

    return 0; /*indica que o programa foi conclu�do com sucesso*/
    } /*fim da fun��o main*/
