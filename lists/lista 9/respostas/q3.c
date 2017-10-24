#include <stdio.h>
#include <math.h>   // função 'abs'

void diferenca ( int px , int py , int qx , int qy , int * dx , int * dy )
{
      /*
      * Usamos os ponteiros para armazenar os valores na variável passada como argumento.
      * Utilizamos a função 'abs' para realizar a operação matemática de módulo: |x|.
      * Principalmente pq não existe distância negativa.
      */
      // dx = |qx - px|
      *dx = abs(qx - px);
      // dy = |qy - py|
      *dy = abs(qy - py);
}

int main(int argc, char const *argv[])
{
      // Ler as entradas do usuário
      int px, py;
      int qx, qy;
      int dx, dy;
      scanf("%d %d", &px, &py);
      scanf("%d %d", &qx, &qy);
      // Salvamos os valores que representam a diferença entre os pontos
      diferenca(px, py, qx, qy, &dx, &dy);
      // Imprime a diferença
      printf("%d %d\n", dx, dy);

      return 0;
}
