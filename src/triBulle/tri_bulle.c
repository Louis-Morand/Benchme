/*Fonction tri_bulle
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
But:faire le tri d'un tableau donné en paramètre par bulle
Soit: tri des valeurs du tableau 2 à 2, en bouclant sur le tableau jusqu'a ce qu'il soit trié
*/
#include <stdio.h>
#include "tri_bulle.h"

void tri_bulle (float *tab, int tailletab){
    //on ne peux pas trouver la taille du tableau via sizeoftab/sizeof(char), donc on la passe en parametre
    float val_inter;
    int nb_chmgt;//le nombre de changements encore à réaliser sur le tableau
    do{
        nb_chmgt = 0;
        for (int i =0; i<tailletab-1; i++){
            if(tab[i] > tab[i+1]){//Inversion des valeurs du tableau en cas de valeur plus grande située avant une pkus petite
                val_inter = tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=val_inter;
            }
        }//Recherche du nombre de changements encore à réaliser, et donc si le programme doit boucler ou non
        for (int i =0; i<tailletab-1; i++){
            if(tab[i] > tab[i+1]){
                nb_chmgt++;
            }
        }
    }while(nb_chmgt !=0);
}