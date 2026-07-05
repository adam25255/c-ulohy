#include <stdio.h>
#include <conio.h>
int main(void)
{
    int p=0;
    int i=0;
printf("kolko znakov chcete zadavat?\n");
scanf("%d",&p);
char znaky[p];
printf("Zadajte znaky.\n");
    for (i=0; i<p; i++) scanf("%s",&znaky[i]);
printf ("Znaky v zadanom poradi:\n");
    for (i=0; i<p; i++) printf("%c ",znaky[i]);
printf ("\n");
printf ("Znaky v opacnom poradi:\n");
    for (i<p; i>=0; --i) printf("%c ",znaky[i]);
    getch();
    return 0;
}
