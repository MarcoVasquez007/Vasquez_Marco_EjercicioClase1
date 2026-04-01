#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mv[500];

    srand(time(NULL));

    for (int i = 0; i < 500; i++) {
        mv[i] = rand() % 100;

        printf("%d\n ", mv[i]);

    }
   
return 0;
}


