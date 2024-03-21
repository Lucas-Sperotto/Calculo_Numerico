/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                             */
/*****************************************************************************/
/* Arquivo: Exemplo2.c | Vers�o 1.0 | Ano: 2014                             */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* E-mail: sperotto@unemat.br                                                */
/*---------------------------------------------------------------------------*/
/* Semestre: 5� | Curso: Ci�ncia da Computa��o | UNEMAT - Aia             */
/*---------------------------------------------------------------------------*/
/* Descrição: Código Fonte utilizado no Exemplo 2 da Aula 1, realiza	   */
/* sucessivos somatórios para se verificar a precisão da máquina		   */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*    Compilador: GNU GCC Compiler - MinGW					                 */
/*	  IDE: Code::Blocks 16.01                                                */
/*                                                                           */
/*****************************************************************************/



/********************************************************/
/* C�digo Fonte utilizado no Exemplo 2 da Aula 1 da		*/
/* disciplina de C�lculo Num�rico do Curso de Ci�ncia	*/
/* da Computa��o da UNEMAT de Alto Araguaia - MT		*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto				*/
/* E-mail: sperotto@unemat.br							*/
/* Compilador: GNU GCC Compiler - MinGW					*/
/* IDE: Code::Blocks 16.01								*/
/********************************************************/


/****************************/
/* Inclus�o de bibliotecas	*/
/****************************/
#include <stdio.h>

/**********************/
/* Fun��o Principal	*/
/**********************/
int main (int argc, char* argv[])
{
    float s = 0.0, x = 0.1; /* declara��o das vari�veis (s) e (x) */
    int i = 0; /* declara��o da vari�vel para o la�o de repeti��o */
    int MAX = 30000; /* declara��o de var�vel para armazenar o n�mero m�ximo de itera��es */

    for(i = 1; i <= MAX; i++) /* la�o de repeti��o de 1 at� o valor da vari�vel (MAX) */
    {
        s = s + x; /* atribui a vari�vel (s) o valor existente em (s) antes da atribui��o somado com o valor de (x) */
    }

    printf("Soma = %Lf\n ", s); /* imprime o valor da vari�vel (s) ap�s as MAX opera��es de soma */

    return 0; /* encerra execu��o */
}
