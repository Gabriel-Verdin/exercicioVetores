#include<stdio.h>
int main() {

    int numero[6];
    int i = 0;
    int par = 0, impar = 0;

    for(i=0;i<6;i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &numero[i]);

        if(numero[i] < 0) {
            impar += 1;
        }
        else{
            par += 1;
        }
    }    
    printf("\nForam digitados %d numeros impares", impar);
    printf("\nForam digitados %d numeros pares", par);

}