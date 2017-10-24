#include <stdio.h>
#include <stdlib.h>

int * lerVetorInteiros ( int t )
{
      // Vetor de tamanho dinâmico e contador
      int *v = malloc(sizeof(int)*(t));
      int i;
      // Ler os valores do vetor
      for (i = 0; i < t; i++)
            scanf("%d", &v[i]);
      // Retorna o vetor
      return v;
}

int * juntarVetores ( int *u , int *v , int m , int n )
{
      // Vetor de tamanho dinâmico e contador
      int *new_v = malloc(sizeof(int)*(m+n));
      int i;
      // Salva os valores do primeiro vetor
      for (i = 0; i < m; i++)
            new_v[i] = u[i];
      // Salva os valores do segundo vetor
      for (i = 0; i < n; i++)
            new_v[i+m] = v[i];
      // Retorna o vetor resultante
      return new_v;
}

int main(int argc, char const *argv[])
{
      // Função 'main' definida na questão
      int *v1, *v2, tam1, tam2, *v3;
      scanf("%d", &tam1);
      v1 = lerVetorInteiros(tam1);
      scanf("%d", &tam2);
      v2 = lerVetorInteiros(tam2);
      // Concatena os dois vetores e salva os valores em 'v3'
      v3 = juntarVetores(v1, v2, tam1, tam2);
      // Imprime os valores de 'v3'
      int i;
      for (i = 0; i < (tam1+tam2); i++)
            printf("%d ", v3[i]);
      printf("\n");

      return 0;
}