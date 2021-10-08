#include <stdio.h>
#include "tri_insertion.h"

int i = 0;
float min, temp;


void tri_insertion(float *tab)
{
    // printf("%s", tab);
    min = tab[i];
    if(tab[i+1]<tab[i])
    {
        min = tab[i+1];
    }

    temp = tab[i+1];
    tab[i+1] = tab[i];
    tab[i] = temp;
    // printf("%s", tab);
}