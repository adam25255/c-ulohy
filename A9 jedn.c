#include <stdio.h>
#include <conio.h>
int main(void)
{
    int cislo=0;
    int pocet2=0;
    int pocet3=0;

    printf("Zadajte cele cislo, zadavanie ukoncite zadanim 0\n");
    do
    {
        scanf("%d",&cislo);
        if (cislo!=0 && cislo%2==0)
            pocet2++;
        if (cislo!=0 && cislo%3==0)
            pocet3++;
    }
    while (cislo!=0);

    printf ("Pocet cisel delitelnych 2: %d\n",pocet2);
    printf ("Pocet cisel delitelnych 3: %d\n",pocet3);
    getch();
    return 0;
}
