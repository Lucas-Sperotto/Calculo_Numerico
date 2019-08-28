/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Template_Interpolacao.c | Versão 1.0 | Ano: 2014                 */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* Semestre: 5º | Curso: Ciência da Computação | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descrição: Template para a codificação do cálculo de um polinômio         */
/*               interpolador                                                */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>

double F[] = {132165, 151326, 179323, 203302, 226542, 249633}; /* Vetor que armazena os valores da função */
double X[] = {1940, 1950, 1960, 1970, 1980, 1990}; /* Vetor que armazena os valores das coordenadas x */
double L(int, int, double); /* Função que codifica o cálculo dos coefieientes L - EQUAÇÃO 3.2 */
double P(int, double); /* Função que codifica o cálculo valor do polinômio em um dado ponto x - EQUAÇÃO 3.1 */

int main(int argc, char *argv[])
{
    printf("Interpolação de %d é: %lf\n", 1965, P(5,1965));
    return 0;
}

/* Função que codifica o cálculo dos coefieientes L - EQUAÇÃO 3.2 */
double L(int n, int k, double x)
{

}
/* Função que codifica o cálculo valor do polinômio em um dado ponto x - EQUAÇÃO 3.1 */
double P(int n, double x)
{

}
