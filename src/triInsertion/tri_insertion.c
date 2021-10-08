#include <stdio.h>
#include "tri_insertion.h"

int i, j;
float min, temp;


void tri_insertion(float *tab, int tailletab)
{

  for (i=1 ; i<=tailletab-1; i++) {
    j = i;
 
    while (j > 0 && tab[j-1] > tab[j]) {
      temp = tab[j];
      tab[j] = tab[j-1];
      tab[j-1] = temp;

      j--;
    }
  }
}