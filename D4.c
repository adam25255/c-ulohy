#include <stdio.h>
#include <conio.h>
#include <math.h>
double mocnina(int a, int b);
int main (void)
{
    int n = 0;
    int i = 0;
    double y = 0;

    do
    {
        printf("Zadajte cele nezaporne cislo n\n");
        scanf("%d",&n);
    }
    while (n<0);
    printf(" %d -te mocniny cislel 1-20:\n",n);
    for (i=1; i<=20; i++)
    {
        printf("%d : %.1lf ",i,mocnina (i,n));
    }
    printf("\n");
    printf("Kontrola cez pow %d -te mocniny cislel 1-20:\n",n);
    (double)n;
    for (i=1; i<=20; i++)
    {
        y=i;
        printf(" %d : %.1lf ",i,pow(y,n));
    }
    getch();
    return 0;
}
double mocnina(int a, int b)
{
    double umocnene = 0;
    int i = 0;
    umocnene=a;
    if (b==0)
    {
        umocnene=1;
        return(umocnene);
    }
    for (i=1; i<b; i++)
        umocnene=umocnene*a;


    return(umocnene);
}
