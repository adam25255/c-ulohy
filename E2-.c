#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float priemer_pole(float pole[],int n);
float priemer_pointre(float *pole,int n);

int main(void)
{
    int pocet, pom;
    int interval_1, interval_2;
    float*pole;
    do
    {
        printf("Kolko cisel chcete zadat? Cisla musia byt aspon dve. \n");
        scanf("%d", &pocet);
    }
    while(pocet<=1);
    pole = (float*)malloc(pocet*sizeof(float));
    if(pole == NULL)
    {
        printf("Nedostatok pamate.\n");
        exit(1);
    }
    for(int i=0; i<pocet; i++)
    {
        printf("Zadajte %d. prvok pola\n",i);
        scanf("%f",&pole[i]);

    }
    printf("Priemer vypoctom cez pole %.2f\n", priemer_pole(pole,pocet));
    printf("Priemer vypoctom cez pointer %.2f\n", priemer_pointre(pole,pocet));
    do
    {
        printf("Zadajte interval a, b, v pripade chyby bude treba zadat znova\n");
        scanf("%d",&interval_1);
        scanf("%d",&interval_2);
    }
    while(interval_1<0 || interval_2>=pocet);
    if (interval_1>interval_2)
    {
        pom=interval_1;
        interval_1=interval_2;
        interval_2=pom;

    }

    printf("Priemer vypoctom cez pointer s usekmi %.2f\n", priemer_pointre(pole+interval_1, 1+interval_2-interval_1 ));
    free(  (void *) pole);
    pole=NULL;
    getch();
    return 0;
}


float priemer_pole(float pole[],int n)
{
    float sucet=0;
    float priemer;
    int i;
    for( i=0; i<n; i++)
    {
        sucet+=pole[i];

    }
    priemer=sucet/n;
    return priemer;
}




float priemer_pointre(float *pole,int n)
{
    float priemer;
    float sucet=0;
    float *p_pom;
    int pocet=0;
    for(p_pom=pole; p_pom <pole+n; p_pom++)
    {
        sucet+= *p_pom;
        pocet++;
    }
    priemer=sucet/pocet;
    free(  (void *) p_pom);
    p_pom=NULL;
    return priemer;
}
