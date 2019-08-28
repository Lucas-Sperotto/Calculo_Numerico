/********************************************************/
/* Biblioteca Auxiliar.h necess�ria para a codifica��o	*/
/* dos algoritmos que envolvam matrizes (array - 2D) e	*/
/* vetores (array - 1D) para a disciplina de			*/ 
/* C�lculo Num�rico do Curso de Ci�ncia da 				*/
/* Computa��o da UNEMAT de Alto Araguaia - MT			*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto				*/
/* E-mail: sperotto@unemat.br							*/	
/* Compilador: GNU GCC Compiler - MinGW					*/	
/* IDE: Code::Blocks 16.01								*/			
/********************************************************/


/****************************/
/* Inclus�o de bibliotecas	*/
/****************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


/****************************/
/* Declara��o das Fun��es	*/
/****************************/

/****************************************/
/* Funun��es para arrays bidimensionais	*/
/****************************************/
double **criar_array(int, int);              /* Fun��o que reserva mem�ria necess�ria para gravar array de tamanho lin X col			*/
void iniciar_array(double **, int, int);     /* Fun��o que preenche o array de tamanho lin X col com valores nulos (0.0)				*/
void imprimir_array(double **, int, int);    /* Fun��o que imprime array de tamanho lin X col de forma formatada na tela				*/
void destruir_array(double ***, int, int);   /* Fun��o que libera o espa�o alocado por array de tamanho lin X col com a fun��o free()	*/

/********************************************/
/* Funun��es para arrays unidimensionais	*/
/********************************************/
double *criar_array(int);              /* Fun��o que reserva mem�ria necess�ria para gravar array de tamanho size			*/
void iniciar_array(double *, int);     /* Fun��o que preenche o array de tamanho size com valores nulos (0.0)				*/
void imprimir_array(double *, int);    /* Fun��o que imprime array de tamanho size de forma formatada na tela				*/
void destruir_array(double **, int);   /* Fun��o que libera o espa�o alocado por array de tamanho size com a fun��o free()	*/

/************************/
/* Funun��es diversas	*/
/************************/
double mod(double);    /* Fun��o que calcula o valor absoluto ou m�dulo de um n�mero de ponto flutuante de precis�o dupla   */


/************************/
/* Corpo das Fun��es	*/
/************************/

/****************************************/
/* Funun��es para arrays bidimensionais	*/
/****************************************/

/* a fun��o reserva a mem�ria usando a fun��o malloc e				*/
/* testa se o ponteiro foi corretamente alocado						*/
/* deve-se reservar um vetor de ponteiros para alocar as linhas		*/
/* para cada linha se aloca um vetor com os elementos das colunas	*/
double **criar_array(int lin, int col)
{
    unsigned register int i; /* cria variavel do tipo inteiro sem sinal com persist�ncia em registrador (i) */

    double **Array = (double **)malloc(lin * sizeof(double*)); /* atribui endere�o ao ponteiro de ponteiro (Array**) para vetor de ponteiros com (lin) elementos de tamanho (sizeof(double*)) */

    if(Array == NULL) /* testa se o endere�o foi atribuido */
    {
        printf("\tERRO!\n\n**N�o foi Possivel Alocar\n"); /* imrime mensagem de ERRO */
        exit(1); /* encerra a execu��o*/
    }
    for(i = 0; i < lin; i++) /* la�o para as linhas, para cada elemento do vetor alocado anteriormente */
    {
        Array[i] = (double *)malloc(col * sizeof(double)); /* atribui endere�o ao ponteiro (Array[i]) para vetor com (col) elementos de tamanho (sizeof(double)) */ 
		

        if(Array[i] == NULL)  /* testa se o endere�o foi atribuido */
        {
            printf("\tERRO!\n\n**N�o foi Possivel Alocar\n"); /* imrime mensagem de ERRO */
            exit(1); /* encerra a execu��o*/
        }
    }
    return ((double **)Array); /* retorna ponteiro para vetor de ponteiros*/
}

/* a fun��o atribui valor 0.0 para cada elemento da matriz        */
void iniciar_array(double **Array, int lin, int col)
{
    unsigned register int i = 0, j = 0; /* cria variaveis do tipo inteiro sem sinal com persist�ncia em registrador (i, j) */

    for(i = 0; i < lin; i++) /* la�o para as linhas */
    {
        for(j = 0; j < col; j++) /* la�o para as clunas */
        {
            Array[i][j] = 0.0; /* para cada elemento (i, j) de (Array) aribui o valor (0.0) */
        }
    }
}

/* a fun��o testa se o ponteiro existe antes de imprimir					*/
/* a fun��o imprime de forma formatada a matriz, respeitando as posi��es	*/
/* de cada elemento (lin, col), utilizando '\t' (tabula��o) para espa�ar	*/
/* elementos de uma mesma linha e '\n' para iniciar uma nova linha			*/
void imprimir_array(double **Array, int lin, int col)
{
    unsigned register int i = 0, j = 0; /* cria variaveis do tipo inteiro sem sinal com persist�ncia em registrador (i, j) */

    if(Array == NULL) /* testa se o ponteiro (Array) � nulo, ou seja, verifica se o array existe */
    {
        printf("\tERRO!\n\n**N�o foi Possivel Imprimir: Ponteiro NULL\n"); /* imrime mensagem de ERRO */
        return; /* encerra a fun��o */
    }

    for(i = 0; i < lin; i++) /* la�o para as linhas */
    {
        for(j = 0; j < col; j++) /* la�o para as clunas */
        {
            printf("%Lf \t", Array[i][j]); /* imprime o elemento i (lin), j (col) da matriz com espa�amento '\t' entre cada elemento da mesma linha (i) */
        }
        printf("\n"); /* nova linha para cada varia��o de coluna (j) */
    }
}

/* fun��o testa se o ponteiro existe antes de destruir	*/
/* destroi ponteiro chamando a fun��o free() e depois	*/
/* coloca o ponteiro como NULL, boas pr�ticas			*/
/* de programa��o										*/
void destruir_array(double ***Array, int lin, int col)
{
    unsigned register int i = 0; /* cria variavel do tipo inteiro sem sinal com persist�ncia em registrador (i) */

    if(Array == NULL) /* testa se o ponteiro (Array) � nulo, ou seja, verifica se o array existe */
    {
        printf("\tERRO!\n\n**N�o foi Possivel Destruir: Ponteiro NULL\n"); /* imrime mensagem de ERRO */
        return; /* encerra a fun��o */
    }

    for(i = 0; i < lin; i++) /* la�o para as linhas */
    {
        free((*Array)[i]); /* para cada elemento do vetor de ponteiro (lin) libera mem�ria do vetor da linha com (col) elementos*/
    }
    free(*Array); /* libera mem�ria do vetor de ponteiros (lin) */
    *Array = NULL; /* atribui NULL ao ponteiro */
}

/********************************************/
/* Funun��es para arrays unidimensionais	*/
/********************************************/


/* a fun��o reserva a mem�ria usando a fun��o malloc e */
/* testa se o ponteiro foi corretamente alocado      */
double *criar_array(int size)
{
    double *Array = (double *)malloc(size*sizeof(double)); /* atribui endere�o ao ponteiro (Array) para vetor com (size) elementos de tamanho (sizeof(double)) */

    if(Array == NULL)  /* testa se o endere�o foi atribuido */
    {
        printf("\tERRO!\n\n**N�o foi Possivel Alocar\n"); /* imrime mensagem de ERRO */
        exit(1); /* encerra a execu��o*/
    }
    return ((double *)Array); /* retorna ponteiro para vetor do tipo double*/
}

/* a fun��o atribui valor 0.0 para cada elemento do vetor        */
void iniciar_array(double *Array, int size)
{
    unsigned register int i = 0; /* cria variavel do tipo inteiro sem sinal com persist�ncia em registrador (i) */

    for(i = 0; i < size; i++)  /* para cada um dos (size) elementos do vetor */
    {
        Array[i] = 0.0; /* atribui valor (0.0) ao i-�simo elemento de Array */
    }
}

/* a fun��o testa se o ponteiro existe antes de imprimir					*/
/* a fun��o imprime de forma formatada o vetor, respeitando as posi��es		*/
/* de cada elemento, utilizando '\n' (nova linha) para espa�ar os elementos	*/
void imprimir_array(double *Array, int size)
{
    unsigned register int i = 0; /* cria variavel do tipo inteiro sem sinal com persist�ncia em registrador (i) */

    if(Array == NULL) /* testa se o ponteiro (Array) � nulo, ou seja, verifica se o array existe */
    {
        printf("\tERRO!\n\n**N�o foi Possivel Imprimir: Ponteiro NULL\n"); /* imrime mensagem de ERRO */
        return; /* encerra a fun��o*/
    }

    for(i = 0; i < size; i++)  /* para cada um dos (size) elementos do vetor */
    {
        printf("%Lf \t", Array[i]); /* imprime o i-�zimo elemento do vetor (Array) */
        printf("\n"); /* nova linha */
    }
    printf("\n"); /* nova linha */
}

/* fun��o testa se o ponteiro existe antes de destruir	*/
/* destroi ponteiro chamando a fun��o free() e depois	*/
/* coloca o ponteiro como NULL							*/
void destruir_array(double **Array, int size)
{
    if(Array == NULL) /* testa se o ponteiro (Array) � nulo, ou seja, verifica se o array existe */
    {
        printf("\tERRO!\n\n**N�o foi Possivel Destruir: Ponteiro NULL\n"); /* imrime mensagem de ERRO */
        return; /* encerra a fun��o*/
    }

    free(*Array); /* libera mem�ria do vetor (Array) */
    *Array = NULL; /* atribui NULL ao ponteiro */
}


/************************/
/* Funun��es diversas	*/
/************************/

/* a func��o retorna o m�dulo, ou valor absoluto de um n�mero de ponto flutuante de precis�o dupla	*/
double mod(double x)
{
    return (x < 0)? -x: x; /* se o valor de (x) for menor que zero, retorna (-x), caso contr�rio retorna (x) */
}
