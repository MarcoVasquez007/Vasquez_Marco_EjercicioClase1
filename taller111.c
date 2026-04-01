#include <stdio.h>

int main(int argc, char const *argv[])

{
    int n;

    printf("Cuantos numeros desea ingresar? ");
    scanf("%d", &n);

    int a[n];

    printf("\nIngrese los numeros: \n");

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("\nEl resultado es: \n");

    printf("Los elementos del vector son: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("|\n");

    return 0;

}