/*****************************************************************************/
/* DISCIPLINA: C�lculo Num�rico                                              */
/*****************************************************************************/
/* Arquivo: Template_Zeros.c | Vers�o 1.0 | Ano: 2014                        */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* Semestre: 5� | Curso: Ci�ncia da Computa��o | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descri��o: Template para a codifica��o dos m�todos que calculam zero de   */
/*               fun��es                                                     */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double absolute(double); /* Codifica a fun��o m�dulo */
double f(double); /* Codifica a fun��o f(x) */
double g(double); /* Codifica a fun��o g(x) */
double df(double); /* Codifica a derivada da fun��o f(x) */
double bissecccao(double, double, double, int); /* Codifica o m�todo da bissec��o - ALGORITMO 2.1 */
double pontofixo(double, double, int); /* Codifica o m�todo do ponto fixo - ALGORITMO 2.2 */
double newton(double, double, int); /* Codifica o m�todo de newton - ALGORITMO 2.3 */
double secante(double, double, double, int); /* Codifica o m�todo da secante - ALGORITMO 2.4 */
double falsaposicao(double, double, double, int); /* Codifica o m�todo da falsa posi��o - ALGORITMO 2.5 */


int main(int argc, char *argv[])
{
    printf("Bisseccao\n");
    bissecccao(1.0,2.0,1E-5,10000);
    printf("\n\nFalsa Posicao\n");
    falsaposicao(1.0,2.0,1E-5,10000);
    printf("\n\nPonto Fixo\n");
    pontofixo(1.0,1E-5,10000);
    printf("\n\nNewton\n");
    newton(1.0,1E-5,10000);
    printf("\n\nSecante\n");
    secante(1.0,2.0,1E-5,10000);

    return 0;
}

/* Codifica a fun��o m�dulo */
double absolute(double x)
{
    return (x < 0)? -x: x;
}
/* Codifica a fun��o f(x) */
double f(double x)
{
    return x * x * x + 4.0 * x * x - 10.0;
}
/* Codifica a fun��o g(x) */
double g(double x)
{
    return 0.5 * sqrt(10.0 - x * x * x);
}
/* Codifica a derivada da fun��o f(x) */
double df(double x)
{
    return 3.0 * x * x + 8.0 * x;
}
/* Codifica o m�todo da bissec��o - ALGORITMO 2.1 */
double bissecccao(double a, double b, double TOL, int N0)
{

}
/* Codifica o m�todo do ponto fixo - ALGORITMO 2.2 */
double pontofixo(double p0, double TOL, int N0)
{

}
/* Codifica o m�todo de newton - ALGORITMO 2.3 */
double newton(double p0, double TOL, int N0)
{

}
/* Codifica o m�todo da secante - ALGORITMO 2.4 */
double secante(double p0, double p1, double TOL, int N0)
{

}
/* Codifica o m�todo da falsa posi��o - ALGORITMO 2.5 */
double falsaposicao(double p0, double p1, double TOL, int N0)
{

}
