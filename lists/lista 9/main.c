#include <stdio.h>
#include <stdlib.h>

void diferenca (int px , int py , int qx , int qy , int *dx , int * dy )
{
      int tempx, tempy =0;
      tempx = (qx-px);
      tempy = (qy-py);
      *dx = tempx;
      *dy = tempy;
}

int main(){
      int a,b,c,d = 0;
      int *dx = (int *) malloc(sizeof(int));
      int *dy = (int *) malloc(sizeof(int));

      printf("Digite o valor de x e y do primeiro ponto:\n");
      scanf("%i %i",&a, &b);
      printf("Digite o valor de x e y do segundo ponto:\n");
      scanf("%i %i",&c, &d);

      diferenca(a,b,c,d,dx,dy);

      printf("A diferença entre p(%i, %i) e q(%i, %i) é d(%i, %i)\n",a,b,c,d,*dx,*dy);

      free(dx); 
      free(dy); 
      return 0;
}