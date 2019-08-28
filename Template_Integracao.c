/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Template_Integracao.c | Versão 1.0 | Ano: 2014                   */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* Semestre: 5º | Curso: Ciência da Computação | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descrição: Template para a das fórmulas abertas e fechadas de             */
/*               Newton-Cotes para a Integração Numérica de uma função       */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include<stdio.h>

double f(double); /* Codifica a função a ser integrada */

/* Funções que codificam as fórmulas fechadas de Newton-Cotes */
double closeNewton1(double, double); /* Função que codifica a regra do trapézio - EQUAÇÃO 4.23 */
double closeNewton2(double, double); /* Função que codifica a regra de simpson - EQUAÇÃO 4.24 */
double closeNewton3(double, double); /* Função que codifica a regra de simpson dos 3/8 - EQUAÇÃO 4.25 */
double closeNewton4(double, double); /* Função que codifica a formula fechada para n = 4 - EQUAÇÃO 4.26 */

/* Funções que codificam as fórmulas abertas de Newton-Cotes */
double openNewton0(double, double); /* Função que codifica a regra ponto médio - EQUAÇÃO 4.27 */
double openNewton1(double, double); /* Função que codifica a formula aberta para n = 1 - EQUAÇÃO 4.28 */
double openNewton2(double, double); /* Função que codifica a formula aberta para n = 2 - EQUAÇÃO 4.29 */
double openNewton3(double, double); /* Função que codifica a formula aberta para n = 3 - EQUAÇÃO 4.30 */

int main(int argc, char *argv[])
{

    // Crie uma função main que chame adequadamente as funções de integração
    return 0;
}

/* Codifica a função a ser integrada */
double f(double x)
{
    return (x * x * x * x);
}

/* Função que codifica a regra do trapézio - EQUAÇÃO 4.23 */
double closeNewton1(double x0, double x1){

}
/* Função que codifica a regra de simpson - EQUAÇÃO 4.24 */
double closeNewton2(double x0, double x2){

}
/* Função que codifica a regra de simpson dos 3/8 - EQUAÇÃO 4.25 */
double closeNewton3(double x0, double x3){

}
/* Função que codifica a formula fechada para n = 4 - EQUAÇÃO 4.26 */
double closeNewton4(double x0, double x4){

}
/* Função que codifica a regra ponto médio - EQUAÇÃO 4.27 */
double openNewton0(double x_1, double x1){

}
/* Função que codifica a formula aberta para n = 1 - EQUAÇÃO 4.28 */
double openNewton1(double x_1, double x2){

}
/* Função que codifica a formula aberta para n = 2 - EQUAÇÃO 4.29 */
double openNewton2(double x_1, double x3){

}
/* Função que codifica a formula aberta para n = 3 - EQUAÇÃO 4.30 */
double openNewton3(double x_1, double x4){

}


