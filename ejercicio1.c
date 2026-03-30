#include <stdio.h> 
int main() {
    int inicio, final, incremento, i;

    printf ("Dame el inicio = ");
    scanf ("%d", &inicio );

    printf ("Dame el final =");
    scanf ("%d", &final);

    printf ("Dame el incremento =");
    scanf ("%d", &incremento );

for(i = inicio; i<= final; i+= incremento)
{
    printf ("%d " , i);
}
   return 0; 
}
