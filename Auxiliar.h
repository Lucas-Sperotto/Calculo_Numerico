#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

double **aloca_array(int, int);               /* Fun��o para reservar a m�m�ria do array                     */
void init_array(double **, int, int);         /* Fun��o para preencher o array com valores aleat�rios        */
void print_array(double **, int, int);        /* Fun��o para printar o array na tela                         */
void destruir_array(double ***, int, int);    /* Fun��o para liberar o espa�o alocado com a fun��o free()    */

double *aloca_array(int);               /* Fun��o para reservar a m�m�ria do array                     */
void init_array(double *, int);         /* Fun��o para preencher o array com valores aleat�rios        */
void print_array(double *, int);        /* Fun��o para printar o array na tela                         */
void destruir_array(double **, int);    /* Fun��o para liberar o espa�o alocado com a fun��o free()    */

double mod(double);    /* Fun��o para calcular o valor absoluto de um n�mero do tipo double   */


/* fun��o reserva a mem�ria usando a fun��o malloc e */
/* testa se o ponteiro foi corretamente alocado      */
/* deve-se reservar um vetor de ponteiros para alocar as linhas */
/* para cada linha se aloca um vetor com os elementos das colunas */
double **aloca_array(int lin, int col)
{
    unsigned register int i;
    double **Array = (double **)malloc(lin * sizeof(double*));

    if(Array == NULL)
    {
        printf("\tERRO!\n\n**N�o foi Possivel Alocar\n");
        exit(1);
    }
    for(i = 0; i < lin; i++)
    {
        Array[i] = (double *)malloc(col * sizeof(double));
        if(Array[i] == NULL)
        {
            printf("\tERRO!\n\n**N�o foi Possivel Alocar\n");
            exit(1);
        }
    }
    return ((double **)Array);
}

void init_array(double **Array, int lin, int col)
{
    unsigned register int i = 0, j = 0;

    for(i = 0; i < lin; i++)
    {
        for(j = 0; j < col; j++)
        {
            Array[i][j] = 0.0;
        }
    }
}

/* fun��o testa se o ponteiro existe antes de imprimir */
void print_array(double **Array, int lin, int col)
{
    unsigned register int i = 0, j = 0;

    if(Array == NULL)
    {
        printf("\tERRO!\n\n**N�o foi Possivel Imprimir: Ponteiro NULL\n");
        return;
    }

    for(i = 0; i < lin; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%Lf \t", Array[i][j]);
        }
        printf("\n");
    }
}

/* fun��o testa se o ponteiro existe antes de destruir */
/* destroi ponteiro chamando a fun��o free() e depois  */
/* coloca o ponteiro como NULL para evitar que seja    */
/* usado em outras partes do c�digo                    */
void destruir_array(double ***Array, int lin, int col)
{
    unsigned register int i = 0;

    if(Array == NULL)
    {
        printf("\tERRO!\n\n**N�o foi Possivel Destruir: Ponteiro NULL\n");
        return;
    }

    for(i = 0; i < lin; i++)
    {
        free((*Array)[i]);
    }
    free(*Array);
    *Array = NULL;
}


/* fun��o reserva a mem�ria usando a fun��o malloc e */
/* testa se o ponteiro foi corretamente alocado      */
double *aloca_array(int Size)
{
    double *Array = (double *)malloc(Size*sizeof(double));

    if(Array == NULL)
    {
        printf("\tERRO!\n\n**N�o foi Possivel Alocar\n");
        exit(1);
    }
    return ((double *)Array);
}

void init_array(double *Array, int Size)
{
    unsigned register int i = 0;
    for(i = 0; i < Size; i++)
    {
        Array[i] = 0.0;
    }
}

/* fun��o testa se o ponteiro existe antes de imprimir */
void print_array(double *Array, int Size)
{
    unsigned register int i = 0;

    if(Array == NULL)
    {
        printf("\tERRO!\n\n**N�o foi Possivel Imprimir: Ponteiro NULL\n");
        return;
    }

    for(i = 0; i < Size; i++)
    {
        printf("%Lf \t", Array[i]);
        printf("\n");
    }
    printf("\n");
}

/* fun��o testa se o ponteiro existe antes de destruir */
/* destroi ponteiro chamando a fun��o free() e depois  */
/* coloca o ponteiro como NULL para evitar que seja    */
/* usado em outras partes do c�digo                    */
void destruir_array(double **Array, int Size)
{
    if(Array == NULL)
    {
        printf("\tERRO!\n\n**N�o foi Possivel Destruir: Ponteiro NULL\n");
        return;
    }

    free(*Array);
    *Array = NULL;
}

double mod(double x)
{
    return (x < 0)? -x: x;
}
