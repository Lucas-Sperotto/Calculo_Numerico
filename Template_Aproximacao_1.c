/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Template_Aproximacao_1.c | Versão 1.0 | Ano: 2014                */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* E-mail: sperotto@unemat.br                                                */
/*---------------------------------------------------------------------------*/
/* Semestre: 5º | Curso: Ciência da Computação | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descrição: Template para o calculo dos fatores a0 e a1 do procedimento    */
/*               de aproximacao linear de uma funcao f(x) desconhecida       */
/*				 a partir de uma lista de valores conhecidos da função (Y)   */
/*               para determinados valores de x (X).                         */
/*                                                                           */
/*                      Y[i] = f(X[i]) -> i={0, ..., 9}                      */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*    Compilador: GNU GCC Compiler - MinGW					                 */	
/*	  IDE: Code::Blocks 16.01                                                */
/*                                                                           */
/*****************************************************************************/

/****************************/
/* Inclusão de bibliotecas  */
/****************************/
#include <stdio.h>

/********************************************************************************/
/* Definição das variáveis globais                                              */
/********************************************************************************/
/* Vetor com 10 elementos, cada elemento corresponde a uma coordenada no eixo X */
/* Valores Retirados do EXEMPLO 1 - TABELA 8.2                                  */
/********************************************************************************/
double X[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0}; // Domínio da função f(x)
double Y[10] = {1.3, 3.5, 4.2, 5.0, 7.0, 8.8, 10.1, 12.5, 13.0, 15.6}; // Imagem da função y = f(x)

/************************************************/
/* Definição do protótipo das funções globais   */
/************************************************/

double get_a0(int); /* Função que codifica o calculo do coeficiente linear a0 - EQUAÇÃO 8.1*/
double get_a1(int); /* Função que codifica o calculo do coeficiente linear a0 - EQUAÇÃO 8.2*/

/**********************/
/* Função Principal   */
/**********************/
int main(int argc, char *argv[])
{
    printf("\nf(x) = %lfx + %lf\n", get_a1(10), get_a0(10));  /* Imprime os coeficientes na forma f(x) = a1x + a0 */

    return 0;
}

/******************************************************************************/
/* Função que codifica o calculo do coeficiente linear a0 - EQUAÇÃO 8.1       */
/* ENTRADA: m - inteiro, valor do numero de ponto a ser usado na aproximação  */
/* SAIDA: doubele, valor do coeficiente a0 calculado com base no numero       */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
double get_a0(int m)
{
    //insira seu código aqui...
}

/************************************************************************/
/* Função que codifica o calculo do coeficiente linear a0 - EQUAÇÃO 8.2 */
/* ENTRADA: m - inteiro, valor do numero de ponto a ser usado na aproximação  */
/* SAIDA: doubele, valor do coeficiente a1 calculado com base no numero       */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
double get_a1(int m)
{
    //insira seu código aqui...
}
