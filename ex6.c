#include <stdio.h>

int main()
{
    int num;

    printf("entrez nombre : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("le nombre selectionne est positif");
    }
    else if (num < 0);
    {
        printf("le nombre selectionne est negatif");
    }
    else 
    {
        printf("le nombre nul")
    }
    
    return 0;
}