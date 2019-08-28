#include<stdio.h>
#include<math.h>
#define M 5
#define N 3

float x[]= {0.0, 0.25, 0.5, 0.75, 1.0};
float y[]= {1.0, 1.2840, 1.6487, 2.1170, 2.7183};

double A[N][N];
double B[N];

void build_A();
void build_B();
double get_Element(int);
double get_Element(int, int);

int main()
{
    build_A();
    build_B();
    return 0;
}

void build_A()
{
 int i,j;

    for(i = 0; i <= N; i++)
    {
        for(j = 0; j <= N; j++)
        {
            A[i][j] = get_Element(i,j);
        }
    }
}

void build_B()
{
int i;
    for(i = 0; i <= N; i++)
    {
        B[i] = get_Element(i);
    }
}

double get_Element(int j)
{

}

double get_Element(int j, int k)
{

}

