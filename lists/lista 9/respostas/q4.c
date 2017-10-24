#include <stdio.h>

void substituir ( char *s , char x , char y )
{
      int i = 0;
      // Percorremos a string inteira
      while (s[i] != '\0')
      {
            // Verificamos se o caractere é o que procuramos
            if (s[i] == x)
                  // Realizamos a substituição
                  s[i] = y;
            // Avançamos no caractere da string
            i++;
      }
}

int main(int argc, char const *argv[])
{
      // Ler as entradas do usuário
      char *s, x, y;
      scanf("%s %c %c", s, &x, &y);
      // Substitui os caracteres
      substituir(s, x, y);
      // Imprime a nova string
      printf("%s\n", s);

      return 0;
}
