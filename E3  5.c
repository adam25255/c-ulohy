#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int dlzka_pointer(char *retazec);
int dlzka_pole(char retazec[]);
int main(void)
{
    char* retazec;
    char c;
    int i=0;
    int velkost=MAX;
        retazec=(char *) malloc(velkost * sizeof(char));
    if (retazec == NULL)
    {
        printf("Nedostatok pamate\n");
        return 1;
    }
    printf("Zadajte retazec\n");
   while ((c=getchar())!= '\n')
    {
        if (i + 1 >= velkost)
        {
            velkost *= 2;
            char *temp = realloc(retazec, velkost * sizeof(char));
            if (temp == NULL)
            {
                printf("Nedostatok pamate realloc\n");
                free(retazec);
                retazec=NULL;
                return 1;
            }
            retazec = temp;
        }
        retazec[i] = c;
        i++;
    }
    retazec[i] = '\0';

    printf("Dlzka cez pole: %d\n", dlzka_pole(retazec));
    printf("Dlzka cez pole: %d\n", dlzka_pointer(retazec));
    printf("Kontrola cez strlen: %d\n", strlen(retazec));
    printf("Retazec: %s\n", retazec);

    getch();
    return 0;
}
int dlzka_pole(char retazec[])
{
    int dlzka=0;
    do
    {
        dlzka++;
    }

    while (retazec[dlzka]!='\0');
    return dlzka;
}
int dlzka_pointer(char *retazec)
{
    int dlzka=0;
    do
    {
        dlzka++;
        retazec++;
    }

    while (*retazec!='\0');
    return dlzka;
}



