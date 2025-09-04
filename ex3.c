#include <stdio.h>

int main()
{
    int a, b, resultat;

    printf("entrez le premier entier : ");
    scanf("%d", &a);

    printf("entrez le deuxième entier : ");
    scanf("%d", &b);

    if (a == b)
    {
        resultat = (a + b) * 3;
    }
    else
    {
        resultat = a + b;
    }

    printf("resultat : %d \n", resultat);

    return 0;
}
