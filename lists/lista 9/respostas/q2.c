#include <stdio.h>

int qtdDivisores ( int x )
{
      // Contador do 'for' e contador de divisores, respectivamente
      int i, divisores = 0;
      // Vamos apenas até a metade do valor de 'x', pois não existe divisores após esse valor
      for (i = 1; i <= (x/2); i++)
            // Utilizaremos o if ternário para somar '1' quando 'i' for divisor e '0' quando não for
            divisores += (x%i == 0)?1:0;
      // Retorna a quantidade de divisores. Somamos +1 pois o próprio número é divisor dele mesmo
      return ++divisores;
}

int ehPrimo ( int x )
{
      // Recolhe a quantidade de divisores
      int divisores = qtdDivisores(x);
      /*
      * Se for igual a 2, significa que é primo.
      * Pois um número primo conta apenas com 4 divisores: -1, 1, -x, x.
      * Porém só contamos os inteiros positivos, por isso comparamos apenas a 2
      */
      if (divisores == 2)
            return 1;
      // Caso não seja primo
      return 0;
}

int main(int argc, char const *argv[])
{
      // Ler a entrada do usuário
      int x;
      scanf("%d", &x);
      // Imprime se é primo ou não
      printf("%d\n", ehPrimo(x));

      return 0;
}
