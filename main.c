#include <stdio.h>
#include <TXLib.h>
#include <math.h>

const int inf_roots = 8;
int lin(double *x1, double *x2, double a, double b, double c);
int kvadrat(double *x1, double * x2, double a, double b, double c);


int solve_sq(double *x1, double *x2, double a, double b, double c)
{
int n_roots;
if (a == 0)
    {
        n_roots = lin( x1, x2,  a,  b,  c);
    }
    else
    {
        n_roots = kvadrat(x1, x2, a,  b,  c);
    }
}

int lin(double *x1, double *x2, double a, double b, double c)
{
    if (b == 0 && c == 0)
    {
        return 8;
    }
    if (b == 0 && c!=0)
    {
        return 0;
    }
    if (b!=0 && c!=0)
    {
        *x1= -c/b;

        return 1;
    }
}
////////////////////////////////////////////////////////////////////
int kvadrat(double *x1, double * x2, double a, double b, double c)
{
    double diskriminant= b*b - 4*a*c;

    if (diskriminant>0)
    {
        *x1 = ( -b + sqrt(diskriminant)) / (2*a);
        *x2 = ( -b - sqrt(diskriminant)) / (2*a);

        return 2;
    }
    if (diskriminant == 0)
    {
        *x1= -b / (2*a);

        return 1;
    }
    if (diskriminant < 0)
    {
        return 0;
    }
}
///////////////////////////////////////////////////////////////////
int main()
{
    // начало
    double  a = 0;
    double  b = 0;
    double  c = 0;
    double x1 = 0;
    double x2 = 0;
    int n_roots = 0;
    // ввод
    scanf ("%lf%lf%lf", &a, &b, &c);
    // решение
    n_roots = solve_sq( &x1, &x2, a, b, c);
    // вывод
    switch (n_roots)
    {
        case 0:
            printf("Нет корней");
            break;
        case 1:
            printf("%lf\n",x1);
            printf("1 корень");
            break;
        case 2:
            printf("%lf%lf\n",x1,x2);
            printf("2 корня");
            break;
        case 8:
            printf("Бесконечное число корней");
            break;
        default:
            printf("ошибка");
            break;
    }
}


/////////////////////////////////////////////////////////////////

