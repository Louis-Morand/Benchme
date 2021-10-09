/*
Fonction tri_bulle
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
*/

#include "tri_selection.h"
#include <stdio.h>

float temp;
int indexMin;


/**
 * @brief Faire le tri d'un tableau donné en paramètre par sélection
 *        Soit: reporter les valeurs
 * 
 * @param tab 
 * @param tailletab 
 */
void tri_selection(float *tab, int tailletab){

    for(int i=0; i<tailletab-1; i++)
    {
        indexMin = i;
        for(int j=i; j<tailletab; j++)
        {
            if(tab[j]<tab[indexMin]) //on récupère l'index de la valeur minimum
            {
                indexMin = j;
            }
        }
        //inversion des valeurs selon l'index
        temp = tab[i]; 
        tab[i] = tab[indexMin];
        tab[indexMin] = temp;
    }
}
