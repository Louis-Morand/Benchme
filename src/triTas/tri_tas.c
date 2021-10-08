/*Fonction tri_tas
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
but: faire le tri d'un tableau donné en parmètre par tas
Le but est de chercher le plus grande nombre comparativement à un bout du tableau, la racine.
D'inverser ce plus grand nombre avec la racine de maniere à le placer à un bout du tableau
puis de travailler récursivement sur le tableau de manière à ordonner le tableau
*/
#include "tri_tas.h"
#include <stdio.h>

void tri_tas (float *tab, int max){
    float nb_inter, ind_inter;
    float nb_max = tab[max-1];
    int ind_max = max-1;//le max temporaire est le nombre le plus à droite du tableau
    if(max==0){
        return;//quand on arrive en bout de tableau, il aura normalement été trié
    }
    for (int i = ind_max; i >= 0; i--){//parcours pour recherche du plus grand su 1,max
        if(nb_max < tab[i]){//si un max est trouvé, on inverse le nombre avec le nouveau max, si <= boucle d'echange infinie possible
            nb_inter=nb_max;//on stocke l'ancien max
            nb_max=tab[i];//on renseigne le nouveau maximum
            tab[ind_max]=tab[i];//on place le nouveau max en bout de tableau
            tab[i]=nb_inter;//on place l'ancien max à l'ancienne position du nouveau
        }
    }
    tri_tas( tab, max-1);//appel récursif, en décalant de 1
}