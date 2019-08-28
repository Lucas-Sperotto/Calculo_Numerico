/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Template_Derivacao.c | Versão 1.0 | Ano: 2014                    */
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

#include"stdio.h"

double X[]={1.1, 1.2, 1.3, 1.4};
double F[]={9.025013, 11.02318, 13.46374, 16.44465};

double derivProg(double); //Equação 4.1 com h positivo
double derivReg(double); //Equação 4.1 com h negativo
double deriv3(double); //Equação 4.4
double deriv3Centred(double); //Equação 4.5
double deriv5(double); //Equação 4.7
double deriv5Centred(double); // Equação 4.6


int main()
{
    double x0 = 1.1;
    printf("Calculo de derivadas no ponto x = %Lf", x0);
    printf("Progressiva: %Lf", derivProg(x0));
    printf("Regressiva: %Lf", derivReg(x0));
    printf("Tres Pontos: %Lf", deriv3(x0));
    printf("Tres Pontos Centrada: %Lf", deriv3Centred(x0));
    printf("Cinco Pontos: %Lf", deriv5(x0));
    printf("Cinco Pontos Centrada: %Lf", deriv5Centred(x0));
    return 0;
}

double derivProg(double x0)
{

}
double derivReg(double x0)
{

}
double deriv3(double x0)
{

}
double deriv3Centred(double x0)
{

}
double deriv5(double x0)
{

}
double deriv5Centred(double x0)
{

}
