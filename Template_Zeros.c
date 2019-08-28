/*****************************************************************************/
/* DISCIPLINA: C�lculo Num�rico                                              */
/*****************************************************************************/
/* Arquivo: Template_Zeros.c | Vers�o 1.0 | Ano: 2014                        */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* E-mail: sperotto@unemat.br                                                */
/*---------------------------------------------------------------------------*/
/* Semestre: 5� | Curso: Ci�ncia da Computa��o | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descri��o: Template para a codifica��o dos m�todos que calculam zero de   */
/* fun��es													                 */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*    Compilador: GNU GCC Compiler - MinGW					                 */
/*	  IDE: Code::Blocks 16.01                                                */
/*                                                                           */
/*****************************************************************************/


/****************************/
/* Inclus�o de bibliotecas	*/
/****************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/****************************/
/* Declara��o das Fun��es	*/
/****************************/
double absolute(double); /* Codifica a fun��o m�dulo */

double f(double); /* Codifica a fun��o f(x) */
double g(double); /* Codifica a fun��o g(x) */
double df(double); /* Codifica a derivada da fun��o f(x) */

double bissecccao(double, double, double, int); /* Codifica o m�todo da bissec��o - ALGORITMO 2.1 */
double pontofixo(double, double, int); /* Codifica o m�todo do ponto fixo - ALGORITMO 2.2 */
double newton(double, double, int); /* Codifica o m�todo de newton - ALGORITMO 2.3 */
double secante(double, double, double, int); /* Codifica o m�todo da secante - ALGORITMO 2.4 */
double falsaposicao(double, double, double, int); /* Codifica o m�todo da falsa posi��o - ALGORITMO 2.5 */

/********************/
/* Fun��o Principal	*/
/********************/
int main(int argc, char *argv[])
{
	double a = 1.0; /* Declara��o da vari�vel (a), limite inferior	*/
	double b = 2.0; /* Declara��o da vari�vel (b), limite superior	*/
	double p0 = 1.0; /* Declara��o da vari�vel (p0), chute inicial	*/
	double p1 = 2.0; /* Declara��o da vari�vel (p1), segundo chute inicial	*/
	double TOL = 1E-5; /* Declara��o da vari�vel (TOL), menor valor de varia��o da solu��o	*/
	int N0 = 10000; /* Declara��o da vari�vel (N0), n�mero m�ximo de itera��es	*/

    printf("Bisseccao\n");
    bissecccao(a, b, TOL,N0); /* chamada do m�todo da Bissec��o com par�metros (a), (b), (TOL) e (N0) */

	printf("\n\nPonto Fixo\n");
	pontofixo(p0, TOL, N0); /* chamada do m�todo do Ponto Fixo com par�metros (p0), (TOL) e (N0) */

	printf("\n\nNewton\n");
	newton(p0, TOL, N0); /* chamada do m�todo de NEwton com par�metros (p0), (TOL) e (N0) */

	printf("\n\nSecante\n");
	secante(p0, p1, TOL, N0); /* chamada do m�todo da Secante com par�metros (p0), (p1), (TOL) e (N0) */

    printf("\n\nFalsa Posicao\n");
    falsaposicao(p0, p1, TOL, N0); /* chamada do m�todo da Falsa Posi��o com par�metros (p0), (p1), (TOL) e (N0) */ 

    return 0; /* encerra execu��o */
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
