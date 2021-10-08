#include "tri_selection.h"
#include <stdio.h>

float temp, min;

void tri_selection(float *tab, int tailletab){

    for(int i=0; i<tailletab-1; i++)
    {
        if(tab[i]<tab[i+1]){
            min = tab[i];
        }
        printf("%f", min);

        //TODO: a finir
    }
}