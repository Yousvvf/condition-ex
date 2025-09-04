#include <stdio.h>

int main()
{
    char car;

    printf("entrez une caractere voyelle : ");
    scanf("%c", &car);

    switch (car)
    {
    case 'a': case 'A':
        printf(" caractere saisi est une voyelle \n");
        break;
    case 'e': case 'E':
        printf(" caractere saisi est une voyelle \n");
        break;
    case 'i': case 'I':
        printf(" caractere saisi est une voyelle \n");
        break;    
    case 'o': case 'O':
        printf(" caractere saisi est une voyelle \n");
        break;
    case 'u': case 'U':
        printf(" caractere saisi est une voyelle \n");
        break;    
    default:
        printf("caractere saisi incorrect \n");
        break;
    }
    return 0;
}
