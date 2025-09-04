#include <stdio.h>
#include <math.h>

int main()
{
    int nmr;
    printf("entrez nombre : ");
    scanf("%d", &nmr);

    if (nmr % 2 == 0)
    {
        printf("le nombre %d est pair \n", nmr);
    }
    else
    {
        printf("le nombre %d est impair \n", nmr);
    }
    return 0;
}
