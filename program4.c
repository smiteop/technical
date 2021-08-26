#include <stdio.h>

int main ()
{
  int n, s[100], j, i, c;

  printf ("\nEnter Numbers count");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      printf ("\nEnter %d -th  Numbers :", i);
      scanf ("%d", &s[i - 1]);
    }

  printf ("\nInput Numbers\n");

  for (i = 0; i < n; i++)
    {

      printf ("%d\t", s[i]);

    }

  printf ("\n1 : %d\n", n);
  for (i = 2; i <= 9; i++)
    {

      c = 0;
      for (j = 0; j < n; j++)
{
 if (s[j] % i == 0)
   c++;
}
      printf ("%d : %d\n", i, c);
    }

  return 0;
}