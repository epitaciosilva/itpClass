#include <stdio.h>
#include <stdlib.h>

void ordenar ( int *v , int n )
{
      // Contadores
      int i, j;
      // Variável que diz quando há troca de valores, indice do maior valor e auxiliar, respectivamente
      int mudanca = 0, maior, aux;
      // Selection Sort
      for (i = 0; i < n; i++)
      {
            for (j = i; j < n; j++)
            {
                  // Primeiro valor, salva e pula para os próximos
                  if (j == i)
                  {
                        maior = j;
                        continue;
                  }
                  // Verifica se o valor percorrido atualmente é maior que o valor armazenado como maior
                  else if (v[maior] < v[j])
                  {
                        // Significa que teve troca
                        mudanca = 1;
                        // Salva indice do novo valor
                        maior = j;
                  }
            }
            // Caso não tenha mudanca (valor = 0), significa que o vetor já éstá ordenado
            if (!mudanca)
                  break;
            // Realiza a troca
            aux = v[i];
            v[i] = v[maior];
            v[maior] = aux;
      }
}

int main(int argc, char const *argv[])
{
      // Pegamos o valor de 'n' e alocamos dinamicamente em um vetor chamado 'v'
      int n;
      scanf("%d", &n);
      int *v = malloc(sizeof(int)*n);
      // Ler os valores do vetor
      int i;
      for (i = 0; i < n; i++)
            scanf("%d", &v[i]);
      // Ordena o vetor
      ordenar(v, n);
      // Imprime o vetor
      for (i = 0; i < n; i++)
            printf("%d ", v[i]);
      printf("\n");
      // Libera a memória
      free(v);

      return 0;
}