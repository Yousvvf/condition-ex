#include <stdio.h>

int main()
{
    float an;
    
    printf("entrez annee : ");
    scanf("%f", &an);

    int mois = an * 12;
    printf("contient : %d mois \n", mois);

    int jours = an * 365;
    printf("contient : %d jours \n", jours);

    int heures = jours * 24;
    printf("contient : %d heurs \n ", heures);

    int minutes = heures * 60;
    printf("contient : %d minutes \n", minutes);

    int secondes = minutes * 60;
    printf("contient : %d secondes \n", secondes);

    return 0;
}