// Escreva um programa, que lê um vetor A(10) 
// e escreva a posição de cada elemento igual a 10 deste vetor.

#include<stdio.h>
int main() {

    int vect[10];
    int i = 0;

    for(i=0;i<10;i++) {

        printf("Digite o %do numero: ", i+1);
        scanf("%d", &vect[i]);

    }
    
    printf("\nA posicao dos numeros que sao iguas a 10 sao: ");

    for(i=0;i<10;i++) {
        if(vect[i] == 10) {
            printf("\n%d", i);
        }
    }
}