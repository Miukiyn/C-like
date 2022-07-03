/*
 Introdução a Computação - v1.0. - 07 / 06 / 2022
 Author: 770493_Iago
*/

using System;

class Program {
  public static void Main (string[] args) {
    string x;
        int tamanho = 0;
        int posicao = 0;
        int contador = 0;
        int resposta = 0;
    char c = '0';
        

    Console.WriteLine("");
        Console.WriteLine("Introducao a computacao - C# - Programa = v1.0");
        Console.WriteLine("Autor: 770493_Iago");
        Console.WriteLine("---------------------------------------------");
        Console.WriteLine("Ler uma palavra do teclado e mostrar as letras minusculas: ");
        Console.WriteLine("Insira uma palavra: ");
        x = Console.ReadLine();
        Console.WriteLine("Sua palavra [" + x + "]");
    
  tamanho = x.Length;

    Console.WriteLine("Letras minuscula: ");
        for(posicao = 0; posicao < tamanho; posicao = posicao + 1)
        {
            c = x[posicao]; // separar
            if ('a' <= c && c <= 'z')
            {
                contador = contador + 1;
                Console.WriteLine(c);
            }
        }

     resposta = contador + resposta;
        Console.WriteLine("Minusculas = [" + resposta + "]");

        Console.WriteLine("---------------------------------------------");   
  }
}
