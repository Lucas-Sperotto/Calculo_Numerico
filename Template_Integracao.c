/*****************************************************************************/
/* DISCIPLINA: C�lculo Num�rico                                              */
/*****************************************************************************/
/* Arquivo: Template_Integracao.c | Vers�o 1.0 | Ano: 2014                   */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* Semestre: 5� | Curso: Ci�ncia da Computa��o | UNEMAT - Aia             */
/*---------------------------------------------------------------------------*/
/* Descri��o: Template para a das f�rmulas abertas e fechadas de           */
/*               Newton-Cotes para a Integra��o Num�rica de uma fun��o   */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include<stdio.h>

double f(double); /* Codifica a fun��o a ser integrada */

/* Fun��es que codificam as f�rmulas fechadas de Newton-Cotes */
double closeNewton1(double, double); /* Fun��o que codifica a regra do trap�zio - EQUA��O 4.23 */
double closeNewton2(double, double); /* Fun��o que codifica a regra de simpson - EQUA��O 4.24 */
double closeNewton3(double, double); /* Fun��o que codifica a regra de simpson dos 3/8 - EQUA��O 4.25 */
double closeNewton4(double, double); /* Fun��o que codifica a formula fechada para n = 4 - EQUA��O 4.26 */

/* Fun��es que codificam as f�rmulas abertas de Newton-Cotes */
double openNewton0(double, double); /* Fun��o que codifica a regra ponto m�dio - EQUA��O 4.27 */
double openNewton1(double, double); /* Fun��o que codifica a formula aberta para n = 1 - EQUA��O 4.28 */
double openNewton2(double, double); /* Fun��o que codifica a formula aberta para n = 2 - EQUA��O 4.29 */
double openNewton3(double, double); /* Fun��o que codifica a formula aberta para n = 3 - EQUA��O 4.30 */

int main(int argc, char *argv[])
{

    // Crie uma fun��o main que chame adequadamente as fun��es de integra��o
    return 0;
}

/* Codifica a fun��o a ser integrada */
double f(double x)
{
    return (x * x * x * x);
}

/* Fun��o que codifica a regra do trap�zio - EQUA��O 4.23 */
double closeNewton1(double x0, double x1){

}
/* Fun��o que codifica a regra de simpson - EQUA��O 4.24 */
double closeNewton2(double x0, double x2){

}
/* Fun��o que codifica a regra de simpson dos 3/8 - EQUA��O 4.25 */
double closeNewton3(double x0, double x3){

}
/* Fun��o que codifica a formula fechada para n = 4 - EQUA��O 4.26 */
double closeNewton4(double x0, double x4){

}
/* Fun��o que codifica a regra ponto m�dio - EQUA��O 4.27 */
double openNewton0(double x_1, double x1){

}
/* Fun��o que codifica a formula aberta para n = 1 - EQUA��O 4.28 */
double openNewton1(double x_1, double x2){

}
/* Fun��o que codifica a formula aberta para n = 2 - EQUA��O 4.29 */
double openNewton2(double x_1, double x3){

}
/* Fun��o que codifica a formula aberta para n = 3 - EQUA��O 4.30 */
double openNewton3(double x_1, double x4){

}


