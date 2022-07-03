
/*
 Introdução a Computação - v1.0. - 06 / 06 / 2022
 Author: 770493_Iago
 
 Para compilar em terminal (janela de comandos):

 Linux : gcc -o codigo codigo.c
 Windows: gcc -o codigo codigo.c

 Para executar em terminal (janela de comandos):
 Linux : ./codigo
 Windows: codigo
*/


// dependencias
#include "io.h"
#include <stdio.h>

void codigo( void ){
    

    //Dados
    char x[80];
    int resposta = 0;
    char c = '0';
    int tamanho = 0;
    int posicao = 0;
    int contador = 0;
        

    //Identificar
    printf("\n");
    printf("%s\n","Introducao a computacao - C - Programa = v1.0");
    printf("%s\n", "Autor: 770493_Iago");
    printf("\n");

    //Acoes
    printf("---------------------------------------------\n");
    printf("\nLer uma palavra do teclado e mostrar as letras minusculas: ");
    printf("\nInsira uma palavra: ");
    scanf("%s",x);
    printf("\nSua Palavra: = [%s]\n",x);

    tamanho = strlen (x);

    printf("Letras minusculas -\n");
    for(posicao = 0; posicao < tamanho; posicao = posicao +1){
        c = x [posicao];//separar
        if('a' <= c && c <= 'z'){
            contador = contador + 1;
            printf("%c\n", c);
            
        }
    }
    
    resposta = contador + resposta;
    printf("Minusculas = [%d]\n", resposta);
    

    getchar();
 
    printf("\n---------------------------------------------\n");

    printf("\nAperte ENTER para finalizar.");
    getchar();
    
}

int main (void)
{

    codigo();

}
