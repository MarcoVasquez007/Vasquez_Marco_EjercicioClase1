#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    int Var[3];
 
    for (int i = 0; i < 3; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &Var[i]);
    }
 
    for (int i = 0; i < 3; i++) {
        printf("%d ", Var[i]);
    }
 
    return 0;
}