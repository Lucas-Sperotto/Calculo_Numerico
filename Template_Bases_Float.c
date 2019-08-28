#include <stdio.h>

float dec_to_bin(float num);
float bin_to_dec(float num);

int main()
{
    int opcao = 0;
    float num = 0.0;

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
            printf("Digite o numero decimal fracionario que deseja converter para binario: ");
            scanf("%f", &num);
            printf("O Numero %f em decimal corresponde a %f em binário.", num, dec_to_bin(num));
            system ("pause");
            break;

        case 2:
            printf("*********************************************\n");
            printf("***** Conversao de binario para decimal *****\n");
            printf("*********************************************\n\n");
            printf("Digite o numero binario fracionario que deseja converter para decimal: ");
            scanf ("%f", &num);
            printf("O Numero %f em binario corresponde a %f em decimal.", num, bin_to_dec(num));
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

float dec_to_bin(float num)
{

}

float bin_to_dec(float num)
{

}

