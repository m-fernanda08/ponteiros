/* Crie um programa que contenha um array de float contendo 10 elementos. 
Imprima o endereço de cada posição desse array. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[10];
    float *p;
    p = &vetor[0];

    for(int i = 0; i < 10; i++){
        printf("endereço de memória da posição %d do array: %p\n", i, (void*)&vetor[i]);
    }
}