#include <stdio.h>
int main()
{
    char nom[20];
    char ap1[20];
    char ap2[20];
    
    printf("Ingresa tu nombre: ");
    scanf("%19s",&nom);
    printf("\nIngresa tu primer apellido: ");
    scanf("%19s",&ap1);
    printf("\nIngresa tu segundo apellido: ");
    scanf("%19s",&ap2);
    
    printf("\nTu nombre completo es: %s %s %s",nom, ap1, ap2);
    printf("\ntus iniciales son: %c %c %c",nom[0], ap1[0], ap2[0]);
    
    return 0;
}

