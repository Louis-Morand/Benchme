/**
 * @file tri_selection.c
 * @author Louis MORAND, Benoit ARQUILLIERE
 * @brief Faire le tri d'un tableau donné en parmètre par tas
 * @version 2
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 *

 * @param tab Tableau à trier
 * @param max Taille du tableau à trier
 */
#include "tri_selection.h"
#include <stdio.h>

float temp;
int indexMin;


/**
 * @brief Faire le tri d'un tableau donné en paramètre par sélection
 * 
 * Soit: reporter les valeurs à leur juste position dans le tableau
 * Le but est de chercher le plus grande nombre et de la placer à un bout du tableau, pour constituer la racine.
 * Le fonctionnement consiste à inverser le plus grand nombre trouvé avec la racine actuelle de maniere à le placer à un bout du tableau,
 * pour constituer la nouvelle racine, puis de travailler récursivement sur le tableau juqu'a ce qu'il soit trié,
 * en passant à chaque fois en paramètre le tableau sans les nombres déjà triés.
 * Cependant, cet algorithme n'est potentiellement pas une implémentation correcte du tri par tas
 *
 * @param[in] tab tableau passé en paramètre
 * @param[in] tailletab 
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
