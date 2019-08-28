#include <stdio.h>

int dec_to_bin(int num);
int bin_to_dec(int num);

int main ()
{
    int opcao = 0, num = 0;

    while (1)
    {
        printf("********************** Menu **********************\n");
        printf("**\t1- Conversao decimal para binario\t**\n");
        printf("**\t2- Conversao binario para decimal\t**\n");
        printf("**\t3- Sair do programa\t\t\t**\n");
        printf("**************************************************\n\n");
        printf("Digite o numero correspondente a opcao desejada: ");
        scanf("%d", &opcao);
        system ("cls");

        switch (opcao)
        {
        case 1:
            printf("*********************************************\n");
            printf("***** Conversao de decimal para binario *****\n");
            printf("*********************************************\n\n");
            printf("Digite o numero decimal inteiro que deseja converter para binario: ");
            scanf("%d", &num);
            printf("O Numero %d em decimal corresponde a %d em binário.", num, dec_to_bin(num));
            system ("pause");
            break;

        case 2:
            printf("*********************************************\n");
            printf("***** Conversao de binario para decimal *****\n");
            printf("*********************************************\n\n");
            printf("Digite o numero binario inteiro que deseja converter para decimal: ");
            scanf ("%d", &num);
            printf("O Numero %d em binario corresponde a %d em decimal.", num, bin_to_dec(num));
            system ("pause");
            break;

        case 3:
            return 0;

        default:
            return 0;
        }
        system ("cls");
    }
    return 0;
}

int dec_to_bin(int num)
{

}

int bin_to_dec(int num)
{

}
