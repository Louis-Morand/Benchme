/*Fonction main
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
Fonction globale regroupant l'affectation, les tests, et le rendu au format .csv des résultats.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
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


float* crea_tab(int taille_tab, int graine){
    //Fonction de création et remplissage du tableau selon les paramètres donnés.
    float *tableau;
    tableau = malloc(taille_tab*sizeof(float));
    srand(graine);
    for(int i=0;i<taille_tab;i++){
        tableau[i]= ((rand() % (int)pow(10,6))+1);
    }
    return tableau;
}

void test_generique(){//renommer et changer pour chaque algo de tri
    float *tableau, moyenne;
    int taille=100;
    time_t deb, fin;

    for (int j = 0; j < 6; j++){//on veux tester chaque algo avec 6 tableaux différents, de 100 à 10⁷ valeurs, donc 6 itérations
        moyenne = 0; //initialisation de la taille de base du tableau, et de la moyenne, à chaque nouvelle taille de tableau testé
        for(int i=0;i<3;i++){//on veux que chaque algo soit testé 3 fois par taille de tableau, avec des valeurs différentes
            tableau = crea_tab(taille, i);
            deb = time(NULL);
            //printf("\ntempsDeb:%d", deb);
            //APPEL DE LA FONCTION DE TRI
            tri_insertion(tableau, taille);
            fin = time(NULL);
            printf("\niteration:%d pour tableau:%d", i+1, taille);
            free(tableau);//libération du tableau en mémoire pour gain de place
            //printf("\ntempsFin:%d", fin);
            moyenne += difftime(fin,deb);
        }
        moyenne=moyenne/3;
        printf("\nTableau de taille:%d ; tempsMoyen:%.6f", taille, moyenne);
        taille = taille*10;//on incrémente la taille du tableau de 10 en 10
    }
}

void main(){
    
    // int taille = 10;
    // float tableau[taille];
    // for(int i=0;i<=taille; i++){
    //     tableau[i]= ((rand() % 1000000)+1);
    // }

    // printf("\n");
    // for(int i=0;i<=taille; i++){
    //     printf("%.2f; ", tableau[i]);
    // }
    // printf("\n");

    // tri_insertion(tableau, taille);

    // tri_selection(tableau, taille);

    // tri_tas(tableau, taille);

    // tri_bulle(tableau, taille);
    //test avec tri_bulle
    test_generique();

	return;
}