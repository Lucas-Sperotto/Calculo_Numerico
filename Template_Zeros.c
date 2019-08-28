/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Template_Zeros.c | Versão 1.0 | Ano: 2014                        */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* E-mail: sperotto@unemat.br                                                */
/*---------------------------------------------------------------------------*/
/* Semestre: 5º | Curso: Ciência da Computação | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descrição: Template para a codificação dos métodos que calculam zero de   */
/* funções													                 */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*    Compilador: GNU GCC Compiler - MinGW					                 */
/*	  IDE: Code::Blocks 16.01                                                */
/*                                                                           */
/*****************************************************************************/


/****************************/
/* Inclusão de bibliotecas	*/
/****************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/****************************/
/* Declaração das Funções	*/
/****************************/
double absolute(double); /* Codifica a função módulo */

double f(double); /* Codifica a função f(x) */
double g(double); /* Codifica a função g(x) */
double df(double); /* Codifica a derivada da função f(x) */

double bissecccao(double, double, double, int); /* Codifica o método da bissecção - ALGORITMO 2.1 */
double pontofixo(double, double, int); /* Codifica o método do ponto fixo - ALGORITMO 2.2 */
double newton(double, double, int); /* Codifica o método de newton - ALGORITMO 2.3 */
double secante(double, double, double, int); /* Codifica o método da secante - ALGORITMO 2.4 */
double falsaposicao(double, double, double, int); /* Codifica o método da falsa posição - ALGORITMO 2.5 */

/********************/
/* Função Principal	*/
/********************/
int main(int argc, char *argv[])
{
	double a = 1.0; /* Declaração da variável (a), limite inferior	*/
	double b = 2.0; /* Declaração da variável (b), limite superior	*/
	double p0 = 1.0; /* Declaração da variável (p0), chute inicial	*/
	double p1 = 2.0; /* Declaração da variável (p1), segundo chute inicial	*/
	double TOL = 1E-5; /* Declaração da variável (TOL), menor valor de variação da solução	*/
	int N0 = 10000; /* Declaração da variável (N0), número máximo de iterações	*/

    printf("Bisseccao\n");
    bissecccao(a, b, TOL,N0); /* chamada do método da Bissecção com parâmetros (a), (b), (TOL) e (N0) */

	printf("\n\nPonto Fixo\n");
	pontofixo(p0, TOL, N0); /* chamada do método do Ponto Fixo com parâmetros (p0), (TOL) e (N0) */

	printf("\n\nNewton\n");
	newton(p0, TOL, N0); /* chamada do método de NEwton com parâmetros (p0), (TOL) e (N0) */

	printf("\n\nSecante\n");
	secante(p0, p1, TOL, N0); /* chamada do método da Secante com parâmetros (p0), (p1), (TOL) e (N0) */

    printf("\n\nFalsa Posicao\n");
    falsaposicao(p0, p1, TOL, N0); /* chamada do método da Falsa Posição com parâmetros (p0), (p1), (TOL) e (N0) */ 

    return 0; /* encerra execução */
}

/* Codifica a função módulo */
double absolute(double x)
{
    return (x < 0)? -x: x;
}

/* Codifica a função f(x) */
double f(double x)
{
    return x * x * x + 4.0 * x * x - 10.0;
}

/* Codifica a função g(x) */
double g(double x)
{
    return 0.5 * sqrt(10.0 - x * x * x);
}

/* Codifica a derivada da função f(x) */
double df(double x)
{
    return 3.0 * x * x + 8.0 * x;
}

/* Codifica o método da bissecção - ALGORITMO 2.1 */
double bissecccao(double a, double b, double TOL, int N0)
{

}

/* Codifica o método do ponto fixo - ALGORITMO 2.2 */
double pontofixo(double p0, double TOL, int N0)
{

}

/* Codifica o método de newton - ALGORITMO 2.3 */
double newton(double p0, double TOL, int N0)
{

}

/* Codifica o método da secante - ALGORITMO 2.4 */
double secante(double p0, double p1, double TOL, int N0)
{

}

/* Codifica o método da falsa posição - ALGORITMO 2.5 */
double falsaposicao(double p0, double p1, double TOL, int N0)
{

}
