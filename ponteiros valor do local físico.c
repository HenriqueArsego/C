#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade = 30;
    int * pIdade = &idade;

    printf("%p\n", &idade); /* local da memória */
    printf("%d", *pIdade); /* valor no local da memória */


    return 0;

}
