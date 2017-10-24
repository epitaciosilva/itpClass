#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * substituir ( char *s , char x , char y )
{
      // Alocamos memória para a nova string de acordo com o tamanho da string passada ('s')
      char * new_s = malloc(sizeof(char)*strlen(s));
      int i = 0;
      // Percorremos a string inteira
      while (s[i] != '\0')
      {
            // Verificamos se o caractere é o que procuramos
            if (s[i] == x)
                  // Realizamos a substituição
                  new_s[i] = y;
            else
                  new_s[i] = s[i];
            // Avançamos no caractere da string
            i++;
      }
      // Retorna a nova string
      return new_s;
}

int main(int argc, char const *argv[])
{
      // Ler as entradas do usuário
      char *s, x, y;
      scanf("%s %c %c", s, &x, &y);
      // Imprime a nova string
      printf("%s\n", substituir(s, x, y));
      printf("%s\n", s);

      return 0;
}
