// Desenvolver um programa para ler dois vetores, A e B, com 20 elementos cada.
// Construir um vetor C, em que cada elemento de C é a soma dos elementos 
// correspondentes aos índices dos vetores A com B.

#include<stdio.h>
int main() {

    int vectA[20], vectB[20], vectC[20];
    int i = 0;

    for(i=0;i<20;i++) {
        printf("Digite o %do numero do primeiro vetor: ", i+1);
        scanf("%d", &vectA[i]);
    }
    for(i=0;i<20;i++) {
        printf("Digite o %do numero do segundo vetor: ", i+1);
        scanf("%d", &vectB[i]);
    }

    for(i=0;i<20;i++) {
        vectC[i] = vectA[i] + vectB[i];
    }

    printf("A soma dos valores dos dois vetore eh igual a: ");

    for(i=0;i<20;i++) {

        printf("\n%d", vectC[i]);
 
    }


}