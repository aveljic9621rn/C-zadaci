#include <stdio.h>
#include <stdlib.h>
/**Napisati program koji za dati niz A, dužine N, ispisuje sortirani niz A u neopadajucem poretku.*/
int main()
{
  int array[100], n, j, i, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j + 1]) /** For decreasing order use '<' instead of '>' */
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
     printf("%d\n", array[i]);

  return 0;
}
