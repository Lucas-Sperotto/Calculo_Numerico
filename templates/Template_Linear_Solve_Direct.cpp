/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Template_Linear_Solve_Direct.cpp | Versão 1.0 | Ano: 2014        */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* E-mail: sperotto@unemat.br                                                */
/*---------------------------------------------------------------------------*/
/* Semestre: 5º | Curso: Ciência da Computação | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descrição: Template para a codificação dos métodos diretos de resolução   */
/*               de sistemas de equções lineares                             */
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
#include "..\lib\Auxiliar.h"

/************************************************/
/* Definição do protótipo das funções globais   */
/************************************************/
void solve_GSR(int, double **, double *); /* Fun��o que codifica o m�todo de Gauss com Substitui��o Regressiva - ALGORITMO 6.1 */
void solve_GPP(int, double **, double *); /* Fun��o que codifica o m�todo de Gauss com Pivotamento Parcial - ALGORITMO 6.2 */
void solve_GPPE(int, double **, double *); /* Fun��o que codifica o m�todo de Gauss com Pivotamento Parcial com Escala - ALGORITMO 6.3 */
void solve_LU(int, double **, double *); /* Fun��o que codifica o m�todo de Fatora��o LU - ALGORITMO 6.4 */
void solve_CHKY(int, double **, double *); /* Fun��o que codifica o m�todo de Fatora��o Cholesky - ALGORITMO 6.6 */

/**********************/
/* Função Principal   */
/**********************/
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


    Mat[0][0] = 4;  Mat[0][1] = -1; Mat[0][2] = 1;  Mat[0][3] = 8;
    Mat[1][0] = 2;  Mat[1][1] = 5;  Mat[1][2] = 2;  Mat[1][3] = 3;
    Mat[2][0] = 1;  Mat[2][1] = 2;  Mat[2][2] = 4;  Mat[2][3] = 11;


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

/******************************************************************************/
/* Função que codifica o método de Gauss com Substituição Regressiva - ALGORITMO 6.1        */
/* ENTRADA: m - inteiro, valor do numero de ponto a ser usado na aproximação  */
/* SAIDA: double, valor do coeficiente a1 calculado com base no numero        */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
void solve_GSR(int n, double **a, double *x)
{

}

/******************************************************************************/
/* Função que codifica o método de Gauss com Pivotamento Parcial - ALGORITMO 6.2        */
/* ENTRADA: m - inteiro, valor do numero de ponto a ser usado na aproximação  */
/* SAIDA: double, valor do coeficiente a1 calculado com base no numero        */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
void solve_GPP(int n, double **a, double *x)
{

}

/******************************************************************************/
/* Função que codifica o método de Gauss com Pivotamento Parcial com Escala - ALGORITMO 6.3        */
/* ENTRADA: m - inteiro, valor do numero de ponto a ser usado na aproximação  */
/* SAIDA: double, valor do coeficiente a1 calculado com base no numero        */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
void solve_GPPE(int n, double **a, double *x)
{

}

/******************************************************************************/
/* Função que codifica o método de Fatoração LU - ALGORITMO 6.4        */
/* ENTRADA: m - inteiro, valor do numero de ponto a ser usado na aproximação  */
/* SAIDA: double, valor do coeficiente a1 calculado com base no numero        */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
void solve_LU(int n, double **a, double *x)
{

}

/******************************************************************************/
/* Função que codifica o método de Fatoração Cholesky - ALGORITMO 6.6        */
/* ENTRADA: m - inteiro, valor do numero de ponto a ser usado na aproximação  */
/* SAIDA: double, valor do coeficiente a1 calculado com base no numero        */
/* de pontos (m), valor das coordenadas x (X[]) e o valor que a função assume */
/* em cada coordenada (Y[]).                                                  */
/******************************************************************************/
void solve_CHKY(int n, double **a, double *x)
{

}
