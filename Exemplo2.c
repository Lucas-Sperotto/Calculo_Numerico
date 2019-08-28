/********************************************************/
/* Código Fonte utilizado no Exemplo 2 da Aula 1 da		*/
/* disciplina de Cálculo Numérico do Curso de Ciência	*/
/* da Computação da UNEMAT de Alto Araguaia - MT		*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto				*/
/* E-mail: sperotto@unemat.br							*/
/* Compilador: GNU GCC Compiler - MinGW					*/
/* IDE: Code::Blocks 16.01								*/
/********************************************************/


/****************************/
/* Inclusão de bibliotecas	*/
/****************************/
#include <stdio.h>

/********************/
/* Função Principal	*/
/********************/
int main ()
{
    float s = 0.0, x = 0.1; /* declaração das variáveis (s) e (x) */
    int i = 0; /* declaração da variável para o laço de repetição */
    int MAX = 30000; /* declaração de varável para armazenar o número máximo de iterações */

    for(i = 1; i <= MAX; i++) /* laço de repetição de 1 até o valor da variável (MAX) */
    {
        s = s + x; /* atribui a variável (s) o valor existente em (s) antes da atribuição somado com o valor de (x) */
    }

    printf("Soma = %Lf\n ", s); /* imprime o valor da variável (s) após as MAX operações de soma */

    return 0; /* encerra execução */
}
