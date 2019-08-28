/*****************************************************************************/
/* DISCIPLINA: Cálculo Numérico                                              */
/*****************************************************************************/
/* Arquivo: Template_Linear_Solve_Iterative.cpp | Versão 1.0 | Ano: 2014     */
/*---------------------------------------------------------------------------*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto                                   */
/*---------------------------------------------------------------------------*/
/* Semestre: 5º | Curso: Ciência da Computação | UNEMAT - Aia                */
/*---------------------------------------------------------------------------*/
/* Descrição: Template para a codificação dos métodos iterativos de resolução*/
/*               resolução de sistemas de equações lineares                  */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include "Auxiliar.h"

void solve_Jacobi(int, double **, double *, double *); /* Função que codifica o método de Jacobi - ALGORITMO 7.1 */
void solve_Gauss_Seidel(int, double **, double *, double *); /* Função que codifica o método de Gauss-Seidel - ALGORITMO 7.2 */
void solve_SRS(int, double **, double *, double *); /* Função que codifica o método de Sobre Relaxação Sucessiva - ALGORITMO 7.3 */

int main(int argc, char *argv[])
{
    unsigned int Tam = 3;
    double *Vet; /*Cria o ponteiro para o array */
    double *b;

    Vet = (double *)aloca_array(Tam);
    b = (double *)aloca_array(Tam);

    init_array(Vet, Tam);
    print_array(Vet, Tam);

    init_array(b, Tam);
    print_array(b, Tam);

    unsigned int Lin = 3, Col;
    double **Mat; /*Cria o ponteiro para o array */

    Col = Lin;

    Mat = (double **)aloca_array(Lin, Col);

    init_array(Mat, Lin, Col);

    print_array(Mat, Lin, Col);


    Mat[0][0] = 4;  Mat[0][1] = -1;  Mat[0][2] = 1;
    Mat[1][0] = 2; Mat[1][1] = 5; Mat[1][2] = 2;
    Mat[2][0] = 1;Mat[2][1] = 2; Mat[2][2] = 4;

    b[0] = 8; b[1] = 3; b[2] = 11;

    print_array(Mat, Lin, Col);

    printf("\nSolving Jacobi.........\n ");
    solve_Jacobi(Lin, Mat, Vet, b);
    print_array(Vet, Tam);
    init_array(Vet, Tam);
    printf("\nJacobi Complete\n");


    printf("\nSolving Gauss Seidel.........\n ");
    solve_Gauss_Seidel(Lin, Mat, Vet, b);
    print_array(Vet, Tam);
    init_array(Vet, Tam);
    printf("\nGauss Seidel Complete\n");


    printf("\nSolving SRS.........\n ");
    solve_SRS(Lin, Mat, Vet, b);
    print_array(Vet, Tam);
    init_array(Vet, Tam);
    printf("\nSRS Complete\n");


    destruir_array(&Mat, Lin, Col);
    destruir_array(&Vet, Tam);

    return 0;
}

/* Função que codifica o método de Jacobi - ALGORITMO 7.1 */
void solve_Jacobi(int n, double **a, double *x, double *b)
{

}
/* Função que codifica o método de Gauss-Seidel - ALGORITMO 7.2 */
void solve_Gauss_Seidel(int n, double **a, double *x, double *b)
{

}
/* Função que codifica o método de Sobre Relaxação Sucessiva - ALGORITMO 7.3 */
void solve_SRS(int n, double **a, double *x, double *b)
{

}
