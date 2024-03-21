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

float x[]= {0.0, 0.25, 0.5, 0.75, 1.0};
float y[]= {1.0, 1.2840, 1.6487, 2.1170, 2.7183};

double A[N][N];
double B[N];

/************************************************/
/* Definição do protótipo das funções globais   */
/************************************************/
void build_A();
void build_B();
double get_Element(int);
double get_Element(int, int);

int main()
{
    build_A();
    build_B();
    return 0;
}

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

void build_B()
{
int i;
    for(i = 0; i <= N; i++)
    {
        B[i] = get_Element(i);
    }
}

double get_Element(int j)
{

}

double get_Element(int j, int k)
{

}
