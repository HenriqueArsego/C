#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeroSecreto = 5;
    int chute;
    int numeroChutes = 0;
    int limiteChutes = 3;
    int acabouChutes = 0;

    while (chute != numeroSecreto && acabouChutes == 0) {
        if (numeroChutes < limiteChutes) {
            printf("Digite um número:\n");
            scanf("%d", &chute);
            numeroChutes ++;
        } else {
            acabouChutes = 1;
        }
      }
      if (acabouChutes == 1) {
        printf("Acabaram as tentativas");
      }else {
        printf("Parabéns, o número secreto é %d.\n", chute);
        printf("Você acertou em %d tentativa(s).", numeroChutes);
        return 0;
        }
}
