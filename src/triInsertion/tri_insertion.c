/**
 * @file tri_insertion.c
 * @author Louis MORAND, Benoit ARQUILLIERE
 * @brief Faire le tri d'un tableau donné en parmètre par insertion
 * @version 2
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include "tri_insertion.h"

int i, j;
float val;


/**
 * @brief Faire le tri d'un tableau donné en parmètre par insertion
 * Sélectionner une valeur, et la déplacer dans le tableau jusqu'a ce qu'elle soit à sa place.
 * 
 * @param[in] tab Tableau à trier
 * @param[in] tailletab Taille du tableau
 */
void tri_insertion(float *tab, int tailletab)
{
   for (i=1; i<tailletab; ++i) {
       val=tab[i];
       for (j=i; j>0 && tab[j-1]>val; j--) tab[j]=tab[j-1]; //compare avec la cellule précedente, et decale jusqu'à la bonne position
       tab[j]=val;
   }
}
