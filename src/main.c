/*Fonction main
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
Fonction globale regroupant l'affectation, les tests, et le rendu au format .csv des résultats.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./triInsertion/tri_insertion.h"
#include "./triBulle/tri_bulle.h"
#include "./triSelection/tri_selection.h"
#include "./triTas/tri_tas.h"
/*
Pour les tests: incluer blibliotheque time pour mesurer le temps d'exécution des progs
mettre 1 time avant 1 time apres et faire la diff des 2 pour voir temps d'execution
TODO: fait une fonction pour mettre au format csv => plus propre ?
*/
//Attention, tri à bulle limité à 10⁵ maximum


float* crea_tab(taille_tab, graine){
    //Fonction de création et remplissage du tableau selon les paramètres donnés.
    float tableau[taille_tab];
    srand(graine);
    for(int i=0;i<taille_tab;i++){
        tableau[i]= ((rand() % pow(10,6))+1);
    }
    return tableau;
}

void test_generique(){//renommer et changer pour chaque algo de tri
    float *tableau;
    int taille=100;
    for (int j = 0; j < 3; j++){//on veux tester chaque algo 3 fois avec des tableaux différents
        for(int i=0;i<6;i++){//on veux des tableau de 100 à 10⁷ valeurs, donc 6 itérations
            tableau = crea_tab(taille, j);
            //TODO: mettre tests relatifs à l'exécution par algo
            // Mettre résultat dans fichier
            taille = taille*10;
        }
    }
}

void main(){
    
    int taille = 10;
    float tableau[taille];
    for(int i=0;i<=taille; i++){
        tableau[i]= ((rand() % 1000000)+1);
    }


    tri_insertion(tableau, taille);

    tri_selection(tableau, taille);

    tri_tas(tableau, taille);

    tri_bulle(tableau, taille);

	return (0);
}