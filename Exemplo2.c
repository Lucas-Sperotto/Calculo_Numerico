#include <stdio.h>

int main ()
{
    float s = 0.0, x = 0.1;// 0.1
    int i = 0;
    int MAX = 30000;

    for(i = 1; i <= MAX; i++)
    {
        s = s + x;
    }

    printf("Soma = %Lf\n ", s);

    return 0;
}
