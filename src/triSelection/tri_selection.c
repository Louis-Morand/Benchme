/*
Fonction tri_bulle
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
But:faire le tri d'un tableau donné en paramètre par sélection
Soit: reporter les valeurs
*/
#include "tri_selection.h"
#include <stdio.h>

float temp;
int indexMin;

void tri_selection(float *tab, int tailletab){

    for(int i=0; i<tailletab-1; i++)
    {
        indexMin = i;
        for(int j=i; j<tailletab; j++)
        {
            if(tab[j]<tab[indexMin])
            {
                indexMin = j;
            }
        }
        temp = tab[i];
        tab[i] = tab[indexMin];
        tab[indexMin] = temp;
    }
}