#include <stdio.h>

int maior2 ( int a , int b )
{
      /*
      * Utilizamos um if ternário (um if que obrigatoriamente retorna um valor).
      * Se 'a >= b', ele retorna 'a', caso contrario, retorna 'b'.
      */
      return (a >= b)?a:b;
}

int maior3 ( int a , int b , int c )
{
      // Verificamos quem é o maior entre os dois primeiros
      int x = maior2(a, b);
      // Depois verificamos quem é o maior entre o resultado da linha anterior e o terceiro
      x = maior2(x, c);
      // Retornamos o maior entre os 3
      return x;
}

int main(int argc, char const *argv[])
{
      // Ler as entradas do usuário
      int a, b, c;
      scanf("%d %d %d", &a, &b, &c);
      // Imprime o valor
      printf("%d\n", maior3(a, b, c));

      return 0;
}
