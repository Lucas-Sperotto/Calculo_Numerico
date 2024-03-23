/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Template_Aproximação_n.c | Versão 1.0 | Ano: 2014                */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* E-mail: sperotto@unemat.br                                                */
/*---------------------------------------------------------------------------*/
/* Semestre: 5º | Curso: Ciência da Computação | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descrição: Template para o calculo                                        */
/*               XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXxxxx      */
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
#include<stdio.h>
#include<math.h>

/**************************************/
/* Definição das constantes globais   */
/**************************************/
#define M 5
#define N 3

/********************************************************************************/
/* Definição das variáveis globais                                              */
/********************************************************************************/
/* Vetor F com seis elementos, cada elemento corresponde a populaçao            */
/* Vetor X com seis elementos, cada elemento corresponde a um ano               */
/* Valores Retirados do EXEMPLO X - TABELA X.X                                  */
/********************************************************************************/
float x[] = {0.0, 0.25, 0.5, 0.75, 1.0};
float y[] = {1.0, 1.2840, 1.6487, 2.1170, 2.7183};

double A[N][N];
double B[N];

/************************************************/
/* Definição do protótipo das funções globais   */
/************************************************/
void build_A();
void build_B();
double get_Element(int);
double get_Element(int, int);

/**********************/
/* Função Principal   */
/**********************/
int main(int argc, char *argv[])
{
    build_A();
    build_B();
    return 0;
}

/******************************************************************************/
/* Função que monta a matriz A - EQUAÇÃO X.X       */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
void build_A()
{
    int i, j;

    for(i = 0; i <= N; i++)
    {
        for(j = 0; j <= N; j++)
        {
            A[i][j] = get_Element(i, j);
        }
    }
}

/******************************************************************************/
/* Função que monta o vetor B - EQUAÇÃO X.X       */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
void build_B()
{
    int i;
    for(i = 0; i <= N; i++)
    {
        B[i] = get_Element(i);
    }
}

/******************************************************************************/
/* Função que codifica o calculo do coeficiente L - EQUAÇÃO 3.2       */
/* ENTRADA: m - inteiro, valor do numero de ponto a ser usado na aproximação  */
/* SAIDA: double, valor do coeficiente a1 calculado com base no numero        */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
double get_Element(int j)
{

}

/******************************************************************************/
/* Função que codifica o calculo do coeficiente L - EQUAÇÃO 3.2       */
/* ENTRADA: m - inteiro, valor do numero de ponto a ser usado na aproximação  */
/* SAIDA: double, valor do coeficiente a1 calculado com base no numero        */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
double get_Element(int j, int k)
{

}
