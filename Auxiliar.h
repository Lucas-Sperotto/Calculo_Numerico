/********************************************************/
/* Biblioteca Auxiliar.h necessária para a codificação	*/
/* dos algoritmos que envolvam matrizes (array - 2D) e	*/
/* vetores (array - 1D) para a disciplina de			*/ 
/* Cálculo Numérico do Curso de Ciência da 				*/
/* Computação da UNEMAT de Alto Araguaia - MT			*/
/* Autor: Prof. Me. Lucas Kriesel Sperotto				*/
/* E-mail: sperotto@unemat.br							*/	
/* Compilador: GNU GCC Compiler - MinGW					*/	
/* IDE: Code::Blocks 16.01								*/			
/********************************************************/


/****************************/
/* Inclusão de bibliotecas	*/
/****************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


/****************************/
/* Declaração das Funções	*/
/****************************/

/****************************************/
/* Fununções para arrays bidimensionais	*/
/****************************************/
double **criar_array(int, int);              /* Função que reserva memória necessária para gravar array de tamanho lin X col			*/
void iniciar_array(double **, int, int);     /* Função que preenche o array de tamanho lin X col com valores nulos (0.0)				*/
void imprimir_array(double **, int, int);    /* Função que imprime array de tamanho lin X col de forma formatada na tela				*/
void destruir_array(double ***, int, int);   /* Função que libera o espaço alocado por array de tamanho lin X col com a função free()	*/

/********************************************/
/* Fununções para arrays unidimensionais	*/
/********************************************/
double *criar_array(int);              /* Função que reserva memória necessária para gravar array de tamanho size			*/
void iniciar_array(double *, int);     /* Função que preenche o array de tamanho size com valores nulos (0.0)				*/
void imprimir_array(double *, int);    /* Função que imprime array de tamanho size de forma formatada na tela				*/
void destruir_array(double **, int);   /* Função que libera o espaço alocado por array de tamanho size com a função free()	*/

/************************/
/* Fununções diversas	*/
/************************/
double mod(double);    /* Função que calcula o valor absoluto ou módulo de um número de ponto flutuante de precisão dupla   */


/************************/
/* Corpo das Funções	*/
/************************/

/****************************************/
/* Fununções para arrays bidimensionais	*/
/****************************************/

/* a função reserva a memória usando a função malloc e				*/
/* testa se o ponteiro foi corretamente alocado						*/
/* deve-se reservar um vetor de ponteiros para alocar as linhas		*/
/* para cada linha se aloca um vetor com os elementos das colunas	*/
double **criar_array(int lin, int col)
{
    unsigned register int i; /* cria variavel do tipo inteiro sem sinal com persistência em registrador (i) */

    double **Array = (double **)malloc(lin * sizeof(double*)); /* atribui endereço ao ponteiro de ponteiro (Array**) para vetor de ponteiros com (lin) elementos de tamanho (sizeof(double*)) */

    if(Array == NULL) /* testa se o endereço foi atribuido */
    {
        printf("\tERRO!\n\n**Não foi Possivel Alocar\n"); /* imrime mensagem de ERRO */
        exit(1); /* encerra a execução*/
    }
    for(i = 0; i < lin; i++) /* laço para as linhas, para cada elemento do vetor alocado anteriormente */
    {
        Array[i] = (double *)malloc(col * sizeof(double)); /* atribui endereço ao ponteiro (Array[i]) para vetor com (col) elementos de tamanho (sizeof(double)) */ 
		

        if(Array[i] == NULL)  /* testa se o endereço foi atribuido */
        {
            printf("\tERRO!\n\n**Não foi Possivel Alocar\n"); /* imrime mensagem de ERRO */
            exit(1); /* encerra a execução*/
        }
    }
    return ((double **)Array); /* retorna ponteiro para vetor de ponteiros*/
}

/* a função atribui valor 0.0 para cada elemento da matriz        */
void iniciar_array(double **Array, int lin, int col)
{
    unsigned register int i = 0, j = 0; /* cria variaveis do tipo inteiro sem sinal com persistência em registrador (i, j) */

    for(i = 0; i < lin; i++) /* laço para as linhas */
    {
        for(j = 0; j < col; j++) /* laço para as clunas */
        {
            Array[i][j] = 0.0; /* para cada elemento (i, j) de (Array) aribui o valor (0.0) */
        }
    }
}

/* a função testa se o ponteiro existe antes de imprimir					*/
/* a função imprime de forma formatada a matriz, respeitando as posições	*/
/* de cada elemento (lin, col), utilizando '\t' (tabulação) para espaçar	*/
/* elementos de uma mesma linha e '\n' para iniciar uma nova linha			*/
void imprimir_array(double **Array, int lin, int col)
{
    unsigned register int i = 0, j = 0; /* cria variaveis do tipo inteiro sem sinal com persistência em registrador (i, j) */

    if(Array == NULL) /* testa se o ponteiro (Array) é nulo, ou seja, verifica se o array existe */
    {
        printf("\tERRO!\n\n**Não foi Possivel Imprimir: Ponteiro NULL\n"); /* imrime mensagem de ERRO */
        return; /* encerra a função */
    }

    for(i = 0; i < lin; i++) /* laço para as linhas */
    {
        for(j = 0; j < col; j++) /* laço para as clunas */
        {
            printf("%Lf \t", Array[i][j]); /* imprime o elemento i (lin), j (col) da matriz com espaçamento '\t' entre cada elemento da mesma linha (i) */
        }
        printf("\n"); /* nova linha para cada variação de coluna (j) */
    }
}

/* função testa se o ponteiro existe antes de destruir	*/
/* destroi ponteiro chamando a função free() e depois	*/
/* coloca o ponteiro como NULL, boas práticas			*/
/* de programação										*/
void destruir_array(double ***Array, int lin, int col)
{
    unsigned register int i = 0; /* cria variavel do tipo inteiro sem sinal com persistência em registrador (i) */

    if(Array == NULL) /* testa se o ponteiro (Array) é nulo, ou seja, verifica se o array existe */
    {
        printf("\tERRO!\n\n**Não foi Possivel Destruir: Ponteiro NULL\n"); /* imrime mensagem de ERRO */
        return; /* encerra a função */
    }

    for(i = 0; i < lin; i++) /* laço para as linhas */
    {
        free((*Array)[i]); /* para cada elemento do vetor de ponteiro (lin) libera memória do vetor da linha com (col) elementos*/
    }
    free(*Array); /* libera memória do vetor de ponteiros (lin) */
    *Array = NULL; /* atribui NULL ao ponteiro */
}

/********************************************/
/* Fununções para arrays unidimensionais	*/
/********************************************/


/* a função reserva a memória usando a função malloc e */
/* testa se o ponteiro foi corretamente alocado      */
double *criar_array(int size)
{
    double *Array = (double *)malloc(size*sizeof(double)); /* atribui endereço ao ponteiro (Array) para vetor com (size) elementos de tamanho (sizeof(double)) */

    if(Array == NULL)  /* testa se o endereço foi atribuido */
    {
        printf("\tERRO!\n\n**Não foi Possivel Alocar\n"); /* imrime mensagem de ERRO */
        exit(1); /* encerra a execução*/
    }
    return ((double *)Array); /* retorna ponteiro para vetor do tipo double*/
}

/* a função atribui valor 0.0 para cada elemento do vetor        */
void iniciar_array(double *Array, int size)
{
    unsigned register int i = 0; /* cria variavel do tipo inteiro sem sinal com persistência em registrador (i) */

    for(i = 0; i < size; i++)  /* para cada um dos (size) elementos do vetor */
    {
        Array[i] = 0.0; /* atribui valor (0.0) ao i-ésimo elemento de Array */
    }
}

/* a função testa se o ponteiro existe antes de imprimir					*/
/* a função imprime de forma formatada o vetor, respeitando as posições		*/
/* de cada elemento, utilizando '\n' (nova linha) para espaçar os elementos	*/
void imprimir_array(double *Array, int size)
{
    unsigned register int i = 0; /* cria variavel do tipo inteiro sem sinal com persistência em registrador (i) */

    if(Array == NULL) /* testa se o ponteiro (Array) é nulo, ou seja, verifica se o array existe */
    {
        printf("\tERRO!\n\n**Não foi Possivel Imprimir: Ponteiro NULL\n"); /* imrime mensagem de ERRO */
        return; /* encerra a função*/
    }

    for(i = 0; i < size; i++)  /* para cada um dos (size) elementos do vetor */
    {
        printf("%Lf \t", Array[i]); /* imprime o i-ézimo elemento do vetor (Array) */
        printf("\n"); /* nova linha */
    }
    printf("\n"); /* nova linha */
}

/* função testa se o ponteiro existe antes de destruir	*/
/* destroi ponteiro chamando a função free() e depois	*/
/* coloca o ponteiro como NULL							*/
void destruir_array(double **Array, int size)
{
    if(Array == NULL) /* testa se o ponteiro (Array) é nulo, ou seja, verifica se o array existe */
    {
        printf("\tERRO!\n\n**Não foi Possivel Destruir: Ponteiro NULL\n"); /* imrime mensagem de ERRO */
        return; /* encerra a função*/
    }

    free(*Array); /* libera memória do vetor (Array) */
    *Array = NULL; /* atribui NULL ao ponteiro */
}


/************************/
/* Fununções diversas	*/
/************************/

/* a funcção retorna o módulo, ou valor absoluto de um número de ponto flutuante de precisão dupla	*/
double mod(double x)
{
    return (x < 0)? -x: x; /* se o valor de (x) for menor que zero, retorna (-x), caso contrário retorna (x) */
}
