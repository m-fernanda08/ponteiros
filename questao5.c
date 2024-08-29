/* Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima 
o dobro de cada valor. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5];
    int *p;
    p = &array[0];

    for (int i = 0; i < 5; i++){
        printf("insira um valor: \n", i+1);
        scanf("%d", p + i);
    }
  for (int i = 0; i < 5; i++){
    printf("o dobro do valor %d é: %d\n", i+1, *(p + i) * 2);
  }
}