/*****************************************************************************/
/* DISCIPLINA: C�lculo Num�rico                                              */
/*****************************************************************************/
/* Arquivo: Template_Interpolacao.c | Vers�o 1.0 | Ano: 2014                 */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* Semestre: 5� | Curso: Ci�ncia da Computa��o | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descri��o: Template para a codifica��o do c�lculo de um polin�mio         */
/*               interpolador                                                */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>

double F[] = {132165, 151326, 179323, 203302, 226542, 249633}; /* Vetor que armazena os valores da fun��o */
double X[] = {1940, 1950, 1960, 1970, 1980, 1990}; /* Vetor que armazena os valores das coordenadas x */
double L(int, int, double); /* Fun��o que codifica o c�lculo dos coefieientes L - EQUA��O 3.2 */
double P(int, double); /* Fun��o que codifica o c�lculo valor do polin�mio em um dado ponto x - EQUA��O 3.1 */

int main(int argc, char *argv[])
{
    printf("Interpola��o de %d �: %lf\n", 1965, P(5,1965));
    return 0;
}

/* Fun��o que codifica o c�lculo dos coefieientes L - EQUA��O 3.2 */
double L(int n, int k, double x)
{

}
/* Fun��o que codifica o c�lculo valor do polin�mio em um dado ponto x - EQUA��O 3.1 */
double P(int n, double x)
{

}
