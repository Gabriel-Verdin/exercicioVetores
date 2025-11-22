// Faça um programa, que leia 10 valores 
// e os escreva na ordem contrária à que foram digitados.

#include<stdio.h>
int main() {

    int vect[10];
    int i = 0;

    for(i=0;i<10;i++) {

        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vect[i]);

    }
    printf("\nA ordem contraria dos numeros digitados eh: ");

    for(i=9;i>=0;i--) {

        printf("\n%d", vect[i]);

    }
    
}