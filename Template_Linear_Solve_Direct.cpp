/*****************************************************************************/
/* DISCIPLINA: C�lculo Num�rico                                              */
/*****************************************************************************/
/* Arquivo: Template_Linear_Solve_Direct.cpp | Vers�o 1.0 | Ano: 2014        */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* Semestre: 5� | Curso: Ci�ncia da Computa��o | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descri��o: Template para a codifica��o dos m�todos diretos de resolu��o   */
/*               resolu��o de sistemas de equa��es lineares                  */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include "Auxiliar.h"

void solve_GSR(int, double **, double *); /* Fun��o que codifica o m�todo de Gauss com Substitui��o Regressiva - ALGORITMO 6.1 */
void solve_GPP(int, double **, double *); /* Fun��o que codifica o m�todo de Gauss com Pivotamento Parcial - ALGORITMO 6.2 */
void solve_GPPE(int, double **, double *); /* Fun��o que codifica o m�todo de Gauss com Pivotamento Parcial com Escala - ALGORITMO 6.3 */
void solve_LU(int, double **, double *); /* Fun��o que codifica o m�todo de Fatora��o LU - ALGORITMO 6.4 */
void solve_CHKY(int, double **, double *); /* Fun��o que codifica o m�todo de Fatora��o Cholesky - ALGORITMO 6.6 */

int main(int argc, char *argv[])
{
    unsigned int size = 3;
    double *Vet; /*Cria o ponteiro para o array */

    Vet = (double *)aloca_array(size); /* Chama fun��o que aloca mem�ria para o vetor */

    init_array(Vet, size);
    print_array(Vet, size);

    unsigned int Lin = 3, Col;
    double **Mat; /*Cria o ponteiro para o array */

    Col = (Lin + 1);

    Mat = (double **)aloca_array(Lin, Col); /* Chama fun��o que aloca mem�ria para a Matriz */

    init_array(Mat, Lin, Col);

    print_array(Mat, Lin, Col);


    Mat[0][0] = 4;  Mat[0][1] = -1;  Mat[0][2] = 1;     Mat[0][3] = 8;
    Mat[1][0] = 2; Mat[1][1] = 5; Mat[1][2] = 2;     Mat[1][3] = 3;
    Mat[2][0] = 1;Mat[2][1] = 2; Mat[2][2] = 4;    Mat[2][3] = 11;


    print_array(Mat, Lin, Col);

    printf("\nSolving GSR.........\n ");
    solve_GSR(Lin, Mat, Vet);
    print_array(Vet, size);
    init_array(Vet, size);
    printf("\nGSR Complete\n");


    printf("\nSolving GPP.........\n ");
    solve_GPP(Lin, Mat, Vet);
    print_array(Vet, size);
    init_array(Vet, size);
    printf("\nGPP Complete\n");


    printf("\nSolving GPPE.........\n ");
    solve_GPPE(Lin, Mat,Vet);
    print_array(Vet, size);
    init_array(Vet, size);
    printf("\nGPPE Complete\n");


    printf("\nSolving LU.........\n ");
    solve_LU(Lin, Mat,Vet);
    print_array(Vet, size);
    init_array(Vet, size);
    printf("\nLU Complete\n");


    printf("\nSolving CHKY.........\n ");
    solve_CHKY(Lin, Mat,Vet);
    print_array(Vet, size);
    init_array(Vet, size);
    printf("\nCHKY Complete\n");

    destruir_array(&Mat, Lin, Col);
    destruir_array(&Vet, size);

    return 0;
}

/* Fun��o que codifica o m�todo de Gauss com Substitui��o Regressiva - ALGORITMO 6.1 */
void solve_GSR(int n, double **a, double *x)
{

}
/* Fun��o que codifica o m�todo de Gauss com Pivotamento Parcial - ALGORITMO 6.2 */
void solve_GPP(int n, double **a, double *x)
{

}
/* Fun��o que codifica o m�todo de Gauss com Pivotamento Parcial com Escala - ALGORITMO 6.3 */
void solve_GPPE(int n, double **a, double *x)
{

}
/* Fun��o que codifica o m�todo de Fatora��o LU - ALGORITMO 6.4 */
void solve_LU(int n, double **a, double *x)
{

}
/* Fun��o que codifica o m�todo de Fatora��o Cholesky - ALGORITMO 6.6 */
void solve_CHKY(int n, double **a, double *x)
{

}

