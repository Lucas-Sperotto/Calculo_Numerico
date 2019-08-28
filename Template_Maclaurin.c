/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Template_Maclaurin.c | Versão 1.0 | Ano: 2014                    */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* Semestre: 5º | Curso: Ciência da Computação | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descrição: Template para a série de Maclaurin                             */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fat(int); /* Função que codifica uma função fatorial */
float ER(float, float); /* Função que calcula o erro relativo percentual */
float f(float, int); /* função que codifica a série de Maclaurin com n termos */

int main(int argc, char *argv[])
{
    FILE *fp; //Cria um ponteiro para um arquivo
    fp=fopen("resultado.dat","wb"); //Chama função que cria um arquivo em modo binário para gravação.
                                    //Se o arquivo já existir, elimina seu conteúdo e recomeça a gravação
                                    //a partir de seu início.
    if (!fp) //teste para verificar se o ponteiro retornado pela função é válido
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

    fprintf(fp, "Nº de Termos\tResultado\tER(%)xi\tER(%)exata\n"); //chamada a função que grava dados em arquivo

    for(i = 1; i<= n; i++)
    {
        fprintf(fp, "%d\t%f\t%f\t%f", i, f(x,i), ER(f(x, i), f(x, i-1)), ER(fx,f(x,i)));
        fprintf(fp, "\n");
    }
    fclose(fp);
    return 0;
}

/* Função que codifica uma função fatorial */
int fat(int x)
{
    int result = 1.0, i = 0;
    for(i = 1; i<=x; i++)
    {
        result *= i;
    }
    return result;
}
/* Função que calcula o erro relativo percentual */
float ER(float x, float xi)
{
    return ((fabs((x-xi))/fabs(x))*100.0);
}
/* função que codifica a série de Maclaurin com n termos */
float f(float x, int n)
{

}
