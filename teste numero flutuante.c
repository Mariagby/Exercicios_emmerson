#include <stdio.h>
/*imprimindo numerops em ponto flutuante com especificadores de conversão de ponto flutuante */
int main (void)
{
    printf("%e\n", 1234567.89);
    printf("%e\n", +1234567.89);
    printf("%e\n", -1234567.89);
    printf("%E\n", 1234567.89);
    printf("%f\n", 1234567.89);
    printf("%g\n", 1234567.89);
    printf("%G\n", 1234567.89);
    return 0; /*indica conclusão bem sucedida*/
    }/*fim da main*/
