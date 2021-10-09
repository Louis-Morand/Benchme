/*
Fonction tri_bulle
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
*/

#include <stdio.h>
#include "tri_insertion.h"

int i, j;
float val;


/**
 * @brief Faire le tri d'un tableau donné en parmètre par insertion
 *        Sélectionner une valeur, et la déplacer dans le tableau jusqu'a ce qu'elle soit à sa place.
 * 
 * @param tab Tableau à trier
 * @param tailletab Taille du tableau
 */
void tri_insertion(float *tab, int tailletab)
{
   for (i=1; i<tailletab; ++i) {
       val=tab[i];
       for (j=i; j>0 && tab[j-1]>val; j--) tab[j]=tab[j-1]; //compare avec la cellule précedente, et decale jusqu'à la bonne position
       tab[j]=val;
   }
}
