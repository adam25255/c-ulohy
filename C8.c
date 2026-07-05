#include <stdio.h>
#include <conio.h>
int main(void)
{
    float max =0;
    int n=0;
    int i=0;


    struct zoznam
    {
        float vaha;
        float vyska;
        char meno[50];
        char priezvisko[50];
    };
    printf("kolko osob chcete zadavat?\n");
    scanf("%d",&n);
    struct zoznam osoba[n];
    printf("Zadajte vahu osob v kg.\n");
    for (i=0; i<n; i++)
        do
        {
            printf("Osoba %d.\n",i+1);
            scanf("%f",&osoba[i].vaha);
        }
        while (osoba[i].vaha<0);
    printf("Zadajte vysku osob v cm.\n");
    for (i=0; i<n; i++)
        do
        {
            printf("Osoba %d.\n",i+1);
            scanf("%f",&osoba[i].vyska);
        }
        while (osoba[i].vyska<0);
    printf("Zadajte meno a priezvisko osob.\n");
    for (i=0; i<n; i++)
    {
        printf("Osoba %d.\n",i+1);
        scanf("%s",osoba[i].meno);
        scanf("%s",osoba[i].priezvisko);
    }

    for (i=0; i<n; i++)
    {
        if (osoba[i].vaha>max)
        {
            max=osoba[i].vaha;

        }
    }

    for (i=0; i<n; i++)
        if (osoba[i].vaha>=max)
            printf("Najtazsia osoba je %s %s, s vahou %.2f a vyskou %.2f a indexom %d\n",osoba[i].meno, osoba[i].priezvisko, osoba[i].vaha,osoba[i].vyska, i+1);


    getch();
    return 0;
}
