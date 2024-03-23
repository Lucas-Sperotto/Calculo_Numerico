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
#include "Auxiliar.h"

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
    int i = 0, p = 0, j = 0, k = 0;
    double m = 0.0;

    for (i = 0; i < n; i++)
    {
        for(p = i; p < n; p++)
        {
            if (a[p][i] != 0.0)
            {
                break;
            }
            else
            {
                if (p == (n - 1))
                {
                    printf("Não existe solução unica\n");
                    exit(-3);
                }
            }
        }

        if (p != i)
        {
            double *aux = a[p];
            a[p] = a[i];
            a[i] = aux;
        }

        for(j = (i + 1); j < n; j++)
        {
            m = a[j][i] / a[i][i];
            for(k = 0; k <= n; k++)
            {
                a[j][k] = a[j][k] - (m * a[i][k]);
            }
        }
    }

    if(a[n - 1][n - 1] == 0.0)
    {
        printf("Não existe solução unica\n");
        exit(-3);
    }

    x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];
    //printf("\nX[%d] = %Lf\n", n-1, x[n-1]);
    for(int i = (n - 2); i >= 0; i--)
    {
      //  printf("Não existe solução unica\n");
        double soma = 1.0;

        for(int j = i + 1; j < n; j++)
        {
           // printf("\n[%d][%d]\n", i, j);
            soma = soma + (a[i][j] * x[j]);
        }
        x[i] = (a[i][n] - soma)  / a[i][i];
       // printf("\nX[%d] = %Lf\n", i, x[i]);
    }
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
    int i = 0, p = 0, j = 0, k = 0;
    int NLINHA[n];
    double maior = 0.0;
    double m = 0.0;
    for (i = 0; i < n; i++)
    {
        NLINHA[i] = i;
    }
    for (i = 0; i < n - 1; i++)
    {
        for(p = i; p < n; p++)
        {
            for(j = i; j < n - 1; j++)
            {
                if(mod(a[NLINHA[j]][i]) > mod(a[NLINHA[j + 1]][i]))
                {
                    maior = mod(a[NLINHA[j]][i]);
                }
                else
                {
                    maior = mod(a[NLINHA[j + 1]][i]);
                }
            }
            if (mod(a[NLINHA[p]][i]) == maior)
            {
                break;
            }
            else
            {
                if ((a[NLINHA[p]][i]) == 0.0)
                {
                    printf("Não existe solução unica\n");
                    exit(3);
                }
            }
        }
        if (NLINHA[i] != NLINHA[p])
        {
            int NCOPIA = NLINHA[i];
            NLINHA[i] = NLINHA[p];
            NLINHA[p] = NCOPIA;
        }
        for(j = i + 1; j < n; j++)
        {
            m = a[NLINHA[j]][i] / a[NLINHA[i]][i];

            for(k = 0; k < 0; k++)
            {
                a[NLINHA[j]][k] = a[NLINHA[j]][k] - (m * a[NLINHA[i]][k]);
            }
        }
    }
    if(a[NLINHA[n]][n] == 0.0)
    {
        printf("Não existe solução unica\n");
        exit(3);
    }
    x[n] = a[NLINHA[n]][n + 1] / a[NLINHA[n]][n];

    for(int i = n - 2; i >= 0; i--)
    {
        double soma = 0.0;
        for(int j = i + 1; j < n; j++)
        {
            soma = soma + (a[NLINHA[i]][j] * x[j]);
        }
        x[i] = (a[i][n + 1] - soma) / a[NLINHA[i]][i];;
    }
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
    int i = 0, p = 0, j = 0, k = 0;
    int NLINHA[n];
    double maior = 0.0;
    double s[n];
    double m = 0.0;
    for (i = 0; i < n; i++)
    {
        for(j = 1; j < n - 1; j++)
        {
            if(mod(a[i][j]) > mod(a[i][j + 1]))
            {
                s[i] = mod(a[i][j]);
            }
            else
            {
                s[i] = mod(a[i][j + 1]);
            }
        }

        if (s[i]== 0.0)
        {
            printf("Não existe solução unica\n");
            exit(3);
        }
        else
        {
            NLINHA[i] = i;
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        for(p = i; p < n; p++)
        {
            for(j = i; j < n - 1; j++)
            {
                if(mod(a[NLINHA[j]][i]) / s[NLINHA[j]] > mod(a[NLINHA[j + 1]][i]) / s[NLINHA[j + 1]])
                {
                    maior = mod(a[NLINHA[j]][i]) / s[NLINHA[j]];
                }
                else
                {
                    maior = mod(a[NLINHA[j + 1]][i]) / s[NLINHA[j + 1]];
                }
            }
            if (mod(a[NLINHA[p]][i]) / s[NLINHA[p]] == maior)
            {
                break;
            }
            else
            {
                if ((a[NLINHA[p]][i]) == 0.0)
                {
                    printf("Não existe solução unica\n");
                    exit(3);
                }
            }
        }
        if (NLINHA[i] != NLINHA[p])
        {
            int NCOPIA = NLINHA[i];
            NLINHA[i] = NLINHA[p];
            NLINHA[p] = NCOPIA;
        }
        for(j = i + 1; j < n; j++)
        {
            m = a[NLINHA[j]][i] / a[NLINHA[i]][i];

            for(k = 0; k < 0; k++)
            {
                a[NLINHA[j]][k] = a[NLINHA[j]][k] - (m * a[NLINHA[i]][k]);
            }
        }
    }
    if(a[NLINHA[n]][n] == 0.0)
    {
        printf("Não existe solução unica\n");
        exit(3);
    }
    x[n] = a[NLINHA[n]][n + 1] / a[NLINHA[n]][n];

    for(int i = n - 2; i >= 0; i--)
    {
        double soma = 0.0;
        for(int j = i + 1; j < n; j++)
        {
            soma = soma + (a[NLINHA[i]][j] * x[j]);
        }
        x[i] = (a[i][n + 1] - soma) / a[NLINHA[i]][i];
    }
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
    double **l;
    double **u;

    l[0][0] = 1.0;
    u[0][0] = a[0][0];

    for(int j = 1; j < n; j++)
    {
        u[1][j] = a[1][j] / l[1][1];
        l[j][1] = a[j][1] / u[1][1];
    }
    for(int i = 1; i < n - 1; i++)
    {
        double soma1 = 0.0;
        for(int k = 1; k < i - 1; k++)
        {
            soma1 = soma1 + l[i][k] * u[k][i];
        }
        l[i][i] = 1.0;
        u[i][i] = a[i][i] - (soma1);

    for(int j = i + 1; j < n; j++)
        {
            u[i][j] = (1.0 / l[i][j]) * (a[i][j] - soma2);
            l[i][j] = (1.0 / u[i][j]) * (a[i][j] - soma3);
        }
    }
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
