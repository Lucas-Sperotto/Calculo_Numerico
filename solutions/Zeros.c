/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Zeros.c | Versão 1.0 | Ano: 2014                                 */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* E-mail: sperotto@unemat.br                                                */
/*---------------------------------------------------------------------------*/
/* Semestre: 5º | Curso: Ciência da Computação | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descrição: Template para o codificação dos métodos que encontra           */
/*               o zero de uma função f(x)   XXXXXXXXXXXXXXXXXXXXXXxxxx      */
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
#include <stdlib.h>
#include <math.h>

/************************************************/
/* Definição do protótipo das funções globais   */
/************************************************/
double absolute(double); /* Codifica a função módulo */

double f(double); /* Codifica a função f(x) */
double g(double); /* Codifica a função g(x) */
double df(double); /* Codifica a derivada da função f(x) */

double bissecccao(double, double, double, int); /* Codifica o método da bissecção - ALGORITMO 2.1 */
double pontofixo(double, double, int); /* Codifica o método do ponto fixo - ALGORITMO 2.2 */
double newton(double, double, int); /* Codifica o método de newton - ALGORITMO 2.3 */
double secante(double, double, double, int); /* Codifica o método da secante - ALGORITMO 2.4 */
double falsaposicao(double, double, double, int); /* Codifica o método da falsa posição - ALGORITMO 2.5 */

/**********************/
/* Função Principal   */
/**********************/
int main(int argc, char *argv[])
{
	double a = 1.0; /* Declaração da vari�vel (a), limite inferior	*/
	double b = 2.0; /* Declaração da vari�vel (b), limite superior	*/
	double p0 = 1.0; /* Declaração da vari�vel (p0), chute inicial	*/
	double p1 = 2.0; /* Declaração da vari�vel (p1), segundo chute inicial	*/
	double TOL = 1E-5; /* Declaração da vari�vel (TOL), menor valor de variação da solução	*/
	int N0 = 10000; /* Declaração da vari�vel (N0), n�mero m�ximo de iteraçães	*/

    printf("Bisseccao\n");
    bissecccao(a, b, TOL, N0); /* chamada do método da Bissecção com par�metros (a), (b), (TOL) e (N0) */

	printf("\n\nPonto Fixo\n");
	pontofixo(p0, TOL, N0); /* chamada do método do Ponto Fixo com par�metros (p0), (TOL) e (N0) */

	printf("\n\nNewton\n");
	newton(p0, TOL, N0); /* chamada do método de Newton com par�metros (p0), (TOL) e (N0) */

	printf("\n\nSecante\n");
	secante(p0, p1, TOL, N0); /* chamada do método da Secante com par�metros (p0), (p1), (TOL) e (N0) */

    printf("\n\nFalsa Posicao\n");
    falsaposicao(p0, p1, TOL, N0); /* chamada do método da Falsa Posição com par�metros (p0), (p1), (TOL) e (N0) */ 

    return 0; /* encerra execução */
}

/****************************************************/
/* Função que codifica a função módulo              */
/* ENTRADA: x double, valor da variável da função   */
/* SAIDA: double, valor do módulo de x              */
/****************************************************/
double absolute(double x)
{
    return (x < 0)? -x: x;
}

/***************************************************/
/* Função que codifica a função f(x)               */
/* ENTRADA: x double, valor da variável da função  */
/* SAIDA: double, valor de f(x)                    */
/***************************************************/
double f(double x)
{
    return x * x * x + 4.0 * x * x - 10.0;
}

/***************************************************/
/* Função que codifica a função g(x)               */
/* ENTRADA: x double, valor da variável da função  */
/* SAIDA: double, valor de g(x)                    */
/***************************************************/
double g(double x)
{
    return 0.5 * sqrt(10.0 - x * x * x);
}

/***********************************************************/
/* Função que codifica a derivada da função f(x) -> f'(x)  */
/* ENTRADA: x double, valor da variável da função          */
/* SAIDA: double, valor de f'(x)                           */
/***********************************************************/
double df(double x)
{
    return 3.0 * x * x + 8.0 * x;
}

/***************************************************************/
/* Função que codifica o método da bissecção - ALGORITMO 2.1   */
/* ENTRADA: x double, valor da variável da função              */
/* SAIDA: double, valor de f'(x)                               */
/***************************************************************/
double bissecccao(double a, double b, double TOL, int N0)
{
    double p, p_ant, FA, FP;
    int i;

    i = 1;
    FA = f(a);
    p_ant = f(a);

    while(i <= N0)
    {
        p = a + (b - a) / 2.0;
        FP = f(p);
        // if(FP == 0 || ((b - a) / 2.0) < TOL)
        if((absolute(p - p_ant) / absolute(p)) < TOL)
        {
            printf("Solução: %.9lf\tcom N: %d Iterações\n", p, i);
            //printf("f(x): %E\tcom Erro: %E \n", f(p), ((p - 1.44741427129624) / 1.44741427129624) * 100);
            return p;
        }
        // printf("Solução:\t%lf\tN:\t%d\n", p, i);
        i = i + 1;
        p_ant = p;
        if (FA * FP > 0)
        {
            a = p;
            FA = FP;
        }
        else
        {
            b = p;
        }
    }

    printf("O método falhou para %d iterações\n", N0);

    return 0.0;
}

/***************************************************************/
/* Função que codifica o método do ponto fixo - ALGORITMO 2.2  */
/* ENTRADA: x double, valor da variável da função              */
/* SAIDA: double, valor de f'(x)                               */
/***************************************************************/
double pontofixo(double p0, double TOL, int N0)
{
    double p, q, q0, q1;
    int i;

    i = 1;

    while(i <= N0)
    {
        p = g(p0);

        if(absolute(p - p0) < TOL)
        {
            printf("Solução: %.9lf\tcom N: %d Iterações\n", p, i);
            //printf("f(x): %E\tcom Erro: %E \n", f(p), ((p - 1.44741427129624) / 1.44741427129624) * 100);
            return p;
        }
        i = i + 1;
        p0 = p;
    }
    printf("O método falhou para %d iterações\n", N0);

    return 0.0;
}

/************************************************************/
/* Função que codifica o método de newton - ALGORITMO 2.3   */
/* ENTRADA: x double, valor da variável da função           */
/* SAIDA: double, valor de f'(x)                            */
/************************************************************/
double newton(double p0, double TOL, int N0)
{
    double p, q, q0, q1;
    int i;

    i = 1;

    while(i <= N0)
    {
        p = p0 - f(p0)/df(p0);// codificar a derivada primeira da função.

        if(absolute(p - p0) < TOL)
        {
            printf("Solução: %.9lf\tcom N: %d Iterações\n", p, i);
            //printf("f(x): %E\tcom Erro: %E \n", f(p), ((p - 1.44741427129624) / 1.44741427129624) * 100);
            return p;
        }
        i = i + 1;
        p0 = p;
    }
    printf("O método falhou para %d iterações\n", N0);

    return 0.0;
}

/************************************************************/
/* Função que codifica o método da secante - ALGORITMO 2.4  */
/* ENTRADA: x double, valor da variável da função           */
/* SAIDA: double, valor de f'(x)                            */
/************************************************************/
double secante(double p0, double p1, double TOL, int N0)
{
    double p, q, q0, q1;
    int i;

    i = 2;
    q0 = f(p0);
    q1 = f(p1);

    while(i <= N0)
    {
        p = p1 - q1 * (p1 - p0) / (q1 - q0);
        if(absolute(p - p1) < TOL)
        {
            printf("Solução: %.9lf\tcom N: %d Iterações\n", p, i);
            //printf("f(x): %E\tcom Erro: %E \n", f(p), ((p - 1.44741427129624) / 1.44741427129624) * 100);
            return p;
        }
        i = i + 1;

        p0 = p1;
        q0 = q1;
        p1 = p;
        q1 = f(p);
    }

    printf("O método falhou para %d iterações\n", N0);

    return 0.0;
}

/*******************************************************************/
/* Função que codifica o método da falsa posição - ALGORITMO 2.5   */
/* ENTRADA: x double, valor da variável da função                  */
/* SAIDA: double, valor de f'(x)                                   */
/*******************************************************************/
double falsaposicao(double p0, double p1, double TOL, int N0)
{
    double p, q, q0, q1;
    int i;

    i = 2;
    q0 = f(p0);
    q1 = f(p1);
    // printf("%lf \t %lf\n",q0,q1);
    while(i <= N0)
    {
        p = p1 - q1 * (p1 - p0) / (q1 - q0);
        //    printf("Solucao para %lf = %lf\n",p,p1);
        if(absolute(p - p1) < TOL)
        {
            printf("Solução: %.9lf\tcom N: %d Iterações\n", p, i);
            //printf("f(x): %E\tcom Erro: %E Iterações\n", f(p), ((p - 1.44741427129624) / 1.44741427129624) * 100);
            return p;
        }
        i = i + 1;
        q = f(p);

        if ((q * q1) < 0)
        {
            p0 = p1;
            q0 = q1;
        }

        p1 = p;
        q1 = q;
    }

    printf("O método falhou para %d iterações\n", N0);

    return 0.0;
}
