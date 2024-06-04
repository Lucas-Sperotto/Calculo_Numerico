/*****************************************************************************/
/* DISCIPLINA: C�lculo Num�rico                                             */
/*****************************************************************************/
/* Arquivo: Template_Derivacao.c | Vers�o 1.0 | Ano: 2014                    */
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

#include"stdio.h"

double X[]={1.1, 1.2, 1.3, 1.4};
double F[]={9.025013, 11.02318, 13.46374, 16.44465};

double derivProg(double); //Equa��o 4.1 com h positivo
double derivReg(double); //Equa��o 4.1 com h negativo
double deriv3(double); //Equa��o 4.4
double deriv3Centred(double); //Equa��o 4.5
double deriv5(double); //Equa��o 4.7
double deriv5Centred(double); // Equa��o 4.6


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
