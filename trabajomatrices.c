#include <stdio.h>


int main () {
    int i, j;
    float notas [5][3];


for ( i = 0 ; i < 5 ; i++) {

    printf ("    Estudiante %d \n    ", i + 1);

    for (j = 0 ; j <3 ; j++ ) {

        do {

            printf ("Ingrese nota de Asignatura %d ( 0 a 10 ):", j + 1 );
            scanf ("%f", &notas [i][j]) ;

            if ( notas [i][j] < 0 || notas [i][j] > 10 ) {
                printf ("Error: la nota tiene que estas entre 0 y 10 \n");
              
            }

           }
         while ( notas [i][j] < 0 || notas [i][j] > 10 ) ; 
        
    }

}