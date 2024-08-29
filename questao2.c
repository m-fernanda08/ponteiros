/* Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis 
do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;

    printf("insira o valor de x: \n", x);
    scanf("%d", &x);
    printf("insira o valor de y: \n", y);
    scanf("%d", &y);

    printf("endereço de memória da variável x: %p\n", (void*)&x);
    printf("endereço de memória da variável y: %p\n", (void*)&y);

    if(&x > &y){
        printf("conteúdo do maior endereço: %d\n", x);
    }else{
        printf("conteúdo do maior endereço: %d\n", y);
    }

}