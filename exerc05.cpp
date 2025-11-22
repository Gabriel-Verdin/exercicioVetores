// Faça um programa, que leia 10 números reais e os armazene em um vetor. 
// Em seguida, o programa deve calcular a média entre os números 
// e verificar quantos estão acima da média calculada.

#include<stdio.h>
int main() {

    int vect[10];
    int i = 0, soma = 0, acima = 0;
    float media = 0;

    for(i=0;i<10;i++) {

        printf("Digite o %do numero: ", i+1);
        scanf("%d", &vect[i]);

        soma += vect[i];
        
    }
    media = soma / 10;

    for(i=0;i<10;i++) {

        if(vect[i] > media) {
            acima += 1;
        }

    }
    printf("\nForam %d numeros acima da media", acima);
} 