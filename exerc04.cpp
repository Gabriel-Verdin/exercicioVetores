#include<stdio.h>
int main() {

    int vect[8];
    int i = 0, menor = 0, pos = 0;

    for(i=0;i<8;i++) {
        printf("Digite o valor do %do numero: ", i+1);
        scanf("%d", &vect[i]);
    }
    menor = vect[0];

    for(i=0;i<8;i++) {
        if(vect[i] < menor) {
            menor = vect[i];
            pos = i;
        }
    }
    printf("\nO menor elemento do vetor eh: %d", menor);
    printf("\nA posicao do menor numero eh: %d", pos);
}