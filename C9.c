#include <stdio.h>
#include <conio.h>
#include <limits.h>
int main(void)
{
    struct prvok
    {
        int a;
    };
    int p=0;
    int i=0;
    int max=INT_MIN;
    int min=INT_MAX;
    printf("kolko cisel chcete zadavat?\n");
    scanf("%d",&p);

    struct prvok cislo[p];

    printf("Zadajte celociselne prvky.\n");
    for (i=0; i<p; i++)
        scanf("%d",&cislo[i].a);

    printf("Vypis prvkov.\n");

    for (i=0; i<p; i++)
        printf(" %d ",cislo[i].a);
    //max prvok
    for (i=0; i<p; i++)
        if (cislo[i].a>=max)
        {
            max=cislo[i].a;

        }
    //min prvok
    for (i=0; i<p; i++)
        if (cislo[i].a<=min)
        {

            min=cislo[i].a;
        }
    printf("\n");

    for (i=0; i<p; i++)
        if (cislo[i].a>=max)
            printf("Najvacsi prvok je %d s indexom pola %d\n",max, i);
    for (i=0; i<p; i++)
        if (cislo[i].a<=min)
            printf("Najmensi prvok je %d s indexom pola %d\n",min, i);

    getch();
    return 0;
}
