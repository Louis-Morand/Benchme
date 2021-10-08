#include <stdio.h>
#include "tri_insertion.h"

int i, j;
float val;

void tri_insertion(float *tab, int tailletab)
{
   for (i=1; i<tailletab; ++i) {
       val=tab[i];
       for (j=i; j>0 && tab[j-1]>val; j--) tab[j]=tab[j-1];
       tab[j]=val;
   }
}