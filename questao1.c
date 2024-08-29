/* Escreva um programa que contenha variáveis inteiras. Compare seus endereços 
e exiba o maior endereço */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10, y = 20;

    printf("endereço de memória x: %p\n", (void*)&x);
    printf("endereço de memória y: %p\n", (void*)&y);

    if(x > y){
        printf("maior endereço de memória: %p\n", (void*)&x);
    }else {
        printf("maior endereço de memória: %p\n", (void*)&y);
    }

}