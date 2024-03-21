/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Template_Maclaurin.c | Versão 1.0 | Ano: 2014                    */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* E-mail: sperotto@unemat.br                                                */
/*---------------------------------------------------------------------------*/
/* Semestre: 5º | Curso: Ciência da Computação | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descrição: Template para o calculo da série de Maclaurin                  */
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
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/************************************************/
/* Definição do protótipo das funções globais   */
/************************************************/
int fat(int); /* Fun��o que codifica uma fun��o fatorial */
float ER(float, float); /* Fun��o que calcula o erro relativo percentual */
float f(float, int); /* fun��o que codifica a s�rie de Maclaurin com n termos */

/**********************/
/* Função Principal   */
/**********************/
int main(int argc, char *argv[])
{
    FILE *fp; //Cria um ponteiro para um arquivo
    fp = fopen("resultado.dat", "wb"); //Chama fun��o que cria um arquivo em modo bin�rio para grava��o.
                                    //Se o arquivo j� existir, elimina seu conte�do e recome�a a grava��o
                                    //a partir de seu in�cio.
    if (!fp) //teste para verificar se o ponteiro retornado pela fun��o � v�lido
    {
        printf("Erro na abertura do arquivo.");
        return 1; //encerra o programa
    }

    float x = 0.0, fx = 0.0;
    int n = 0, i = 0;

    printf("Entre com o valor de x: ");
    scanf("%f", &x);

    printf("Entre com o valor de n final: ");
    scanf("%d", &n);

    printf("Entre com o valor exato da funcao: ");
    scanf("%f", &fx);

    fprintf(fp, "N� de Termos\tResultado\tER(%)xi\tER(%)exata\n"); //chamada a fun��o que grava dados em arquivo

    for(i = 1; i <= n; i++)
    {
        fprintf(fp, "%d\t%f\t%f\t%f", i, f(x, i), ER(f(x, i), f(x, i - 1)), ER(fx, f(x, i)));
        fprintf(fp, "\n");
    }

    fclose(fp);

    return 0;
}

/* Fun��o que codifica uma fun��o fatorial */
int fat(int x)
{
    int result = 1.0, i = 0;
    for(i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
}
/* Fun��o que calcula o erro relativo percentual */
float ER(float x, float xi)
{
    return ((fabs((x - xi)) / fabs(x)) * 100.0);
}
/* fun��o que codifica a s�rie de Maclaurin com n termos */
float f(float x, int n)
{

}
