/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Template_Interpolacao.c | Versão 1.0 | Ano: 2014                 */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* E-mail: sperotto@unemat.br                                                */
/*---------------------------------------------------------------------------*/
/* Semestre: 5º | Curso: Ciência da Computação | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descrição: Template para o calculo dos coeficientes L e P deum polinômio  */
/*              interpolador XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXxxxx     */
/*               xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx      */
/*               xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx      */
/*               xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx      */
/*                                                                           */
/*                      XXXXXXXXXXXXXXXXXXXXXXXXXXXXxXX                      */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*    Compilador: GNU GCC Compiler - MinGW                                   */	
/*    IDE: Code::Blocks 16.01                                                */
/*                                                                           */
/*****************************************************************************/

/****************************/
/* Inclusão de bibliotecas  */
/****************************/
#include <stdio.h>

/********************************************************************************/
/* Definição das variáveis globais                                              */
/********************************************************************************/
/* Vetor F com seis elementos, cada elemento corresponde a populaçao            */
/* Vetor X com seis elementos, cada elemento corresponde a um ano               */
/* Valores Retirados do EXEMPLO X - TABELA X.X                                  */
/********************************************************************************/
double F[] = {132165, 151326, 179323, 203302, 226542, 249633}; /* Vetor que armazena os valores da fun��o */
double X[] = {1940, 1950, 1960, 1970, 1980, 1990}; /* Vetor que armazena os valores das coordenadas x */


/************************************************/
/* Definição do protótipo das funções globais   */
/************************************************/
double L(int, int, double); /* Fun��o que codifica o c�lculo dos coefieientes L - EQUA��O 3.2 */
double P(int, double); /* Fun��o que codifica o c�lculo valor do polin�mio em um dado ponto x - EQUA��O 3.1 */

/**********************/
/* Função Principal   */
/**********************/
int main(int argc, char *argv[])
{
    printf("Interpola��o de %d �: %lf\n", 1965, P(5, 1965));
    return 0;
}

/******************************************************************************/
/* Função que codifica o calculo do coeficiente L - EQUAÇÃO 3.2       */
/* ENTRADA: m - inteiro, valor do numero de ponto a ser usado na aproximação  */
/* SAIDA: double, valor do coeficiente a1 calculado com base no numero        */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
double L(int n, int k, double x)
{

}

/******************************************************************************/
/* Função que codifica o calculo do coeficiente linear a0 - EQUAÇÃO 3.2      */
/* ENTRADA: m - inteiro, valor do numero de ponto a ser usado na aproximação  */
/* SAIDA: double, valor do coeficiente a1 calculado com base no numero        */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
double P(int n, double x)
{

}
