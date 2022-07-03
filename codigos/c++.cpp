/*
 Introdução a Computação - v1.0. - 06 / 06 / 2022
 Author: 770493_Iago

 Para compilar em terminal (janela de comandos):

 Linux : g++ -o codigo2.exe codigo2.cpp
 Windows: g++ -o codigo2.exe codigo2.cpp

 Para executar em terminal (janela de comandos):
 Linux : ./codigo2
 Windows: codigo2
*/


#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(){

    // Dados
    char x[80];
    int resposta = 0;
    char c = 0;
    int tamanho = 0;
    int posicao = 0;
    int contador = 0;
    
    //Identificar

    printf("\n\n");

    cout << "Introducao a computacao - C++ - Programa = v1.0" << endl;
    cout << "Autor: 770493_Iago" << endl;

    //Ações
    printf("---------------------------------------------\n");
    cout << "Ler uma palavra do teclado e mostrar as letras minusculas: " << endl;
    cout << "Insira uma palavra: " << endl;
    cin.getline(x, sizeof(x));
    cout << "Sua palavra: = [" << x << "]" << endl;

    tamanho = strlen(x);

    //Repetição
    cout << "Letras minusculas - " << endl;
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        c = x[posicao]; // separar
        if ('a' <= c && c <= 'z')
        {
            contador = contador + 1;
            cout << c << endl;
        }
    }
    

    resposta = contador + resposta;
    cout << "Minusculas = [" << resposta << "]" << endl;   

    printf("\n---------------------------------------------\n"); 

    return 0;
}
