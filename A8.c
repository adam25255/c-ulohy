#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int i = 0;
    int c = 0;
    printf ("Zadajte interval a\n");
    scanf("%d",&a);

    printf ("Zadajte interval b\n");
    scanf("%d",&b);
    if (a>=b)
    {
        c=a;
        a=b;
        b=c;

    }
    printf ("interval od a=%d do b=%d\n",a,b);
    for (i=a; i<=b; i++)
    {

        if (i!=0 && i%2==0)
        {
            printf ("Cislo %d je delitelne 2\n",i);
        }
    }
    getch();
    return 0;
}
