/*Fonction tri_bulle
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
But:faire le tri d'un tableau donné en parmètre par bulle, soit: tri les valeurs du tableau 2 à 2 et boucler jusqu'a ce qu'il soit trié
*/
#include <stdio.h>
#include "tri_bulle.h"

void tri_bulle (float *tab, int tailletab){
    //on ne peux pas trouver la taille du tableau via sizeoftab/sizeof(char), donc on la passe en parametre
    float val_inter;
    int nb_chmgt=0;
    do{
        nb_chmgt = 0;
        for (int i =0; i<tailletab-1; i++){
            if(tab[i] > tab[i+1]){
                val_inter = tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=val_inter;
            }
        }
        for (int i =0; i<tailletab-1; i++){
            if(tab[i] > tab[i+1]){
                nb_chmgt++;
            }
        }
    }while(nb_chmgt !=0);
}