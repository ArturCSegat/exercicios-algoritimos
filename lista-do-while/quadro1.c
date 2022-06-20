#include <stdio.h>

int
main ()
{
  int count = 1;


  do
    {
      char nome;
      printf ("Insira seu nome (Uma unica letra): ");
      scanf ("\n%c", &nome);

      int nota1, nota2, media;

      printf ("Insira suas notas: ");
      scanf ("%d %d", &nota1, &nota2);

      media = (nota1 + nota2) / 2;

      printf ("Media das notas: %d\n", media);

      count++;

    }
  while (count <= 5);
}
