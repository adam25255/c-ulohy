#include <stdio.h>
#include <conio.h>
int main(void)
{
    const int MAX=50;
    int pole[MAX];
    int i=0;
    int j=0;
    int dve=0;
    int tri=0;

printf("Zadaj cislo\n");

for (i=0; i<MAX; i++){
scanf("%d",&pole[i]);
if (pole[i]==0) {
j=i;
break;
}
}
for (i=0; i<j; i++){
    if (pole[i]%2==0) {
            printf ("Cislo %d je delitelne 2\n",pole[i]);
    dve++;
    }
else if (pole[i]%2!=0)
printf ("Cislo %d nie je delitelne 2\n",pole[i]);
}

for (i=0; i<j; i++){
    if (pole[i]%3==0) {
        printf ("Cislo %d je delitelne 3\n",pole[i]);
        tri++;
    }
else if (pole[i]%3!=0)
printf ("Cislo %d nie je delitelne 3\n",pole[i]);
}
printf ("Pocet cisel delitelnych 2: %d\n",dve);
printf ("Pocet cisel delitelnych 3: %d\n",tri);

getch();
return 0;
}
