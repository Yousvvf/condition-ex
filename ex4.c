#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s1, s2;
    float dl;

    printf("entrez la valeur de A : ");
    scanf("%f", &a);

    printf("entrez la valeur de B : ");
    scanf("%f", &b);

    printf("entrez la valeur de C : ");
    scanf("%f", &c);

    dl = (b * b) - (4 * a * c);

    if (dl > 0)
    {
        s1 = (-b + sqrt(dl)) / (2 * a);
        s2 = (-b - sqrt(dl)) / (2 * a);
        printf("deux solutions reelles distinctes : S1 = %.2f, S2 = %.2f \n", s1, s2);
    }
    else if (dl == 0)
    {
        s1 = -b / (2 * a);
        printf("une solution double : S = %.2f \n", s1);
    }
    else 
    {
        printf("pas de solution rrelle \n");
    }

    return 0;
}
