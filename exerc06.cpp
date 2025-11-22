// Faça um programa, que leia 2 vetores de 10 elementos inteiros cada 
// e que construa um terceiro vetor composto somente com os elementos que estão nos dois vetores. 
// Nesse caso, considere que não há elementos duplicados em cada um dos vetores.

#include<stdio.h>
int main() {

    int vectA[10], vectB[10], vectC[10];
    int i=0, j=0, k=0;

    for(i=0;i<10;i++) {

        printf("\nDigite o %do numero do primeiro vetor: ", i+1);
        scanf("%d", &vectA[i]);

        printf("\nDigite o %do numero do segundo vetor: ", i+1);
        scanf("%d", &vectB[i]);

    }
    
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {

            if(vectA[i] == vectB[j]) {
                vectC[k] = vectA[i];
                k++;
            }
        }
    }

    printf("\n");

    for(i=0;i<10;i++) {

        printf("\n%d", vectC[i]);

    }
}