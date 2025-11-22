// Faça um programa,  que realize a leitura dos salários 
// de um funcionário durante o ano, em um vetor e depois:​
//     Mostre os valores mensais.​
//     Mostre o salário anual e o salário médio.

#include<stdio.h>
int main() {

    float salario[12];
    int i = 0;
    float media = 0, total = 0;

    for(i=0;i<12;i++) {

        printf("Digite o salario do %do mes: ", i+1);
        scanf("%f", &salario[i]);

        total += salario[i];
    }
    media = total / 12;

    for(i=0;i<12;i++) {

        printf("\n%do mes: %.2f",i+1, salario[i]);

    }
    printf("\nO salario anual eh: %.2f", total);
    printf("\nA media dos salarios eh: %.2f", media);

}