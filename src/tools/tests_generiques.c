/*
Fonction tri_bulle
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
Fichier regroupant les différentes fonctions de tri, ainsi que celle de création de tableau, et l'appel à l'ecriture fichier
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "tools.h"
#include "../triInsertion/tri_insertion.h"
#include "../triBulle/tri_bulle.h"
#include "../triSelection/tri_selection.h"
#include "../triTas/tri_tas.h"


/**
 * @brief Fonction de création et remplissage du tableau selon les paramètres donnés.
 * 
 *  Cette fonction permet de créer un tableau via malloc, et de la remplir de valeurs pseudo-aléatoires
 *  Elle initialise un tableau de taille donnée, puis le remplis avec les nombres pseudo-aléatoires générés selon le schéma donné
 * @param taille_tab taille du tablau à crer
 * @param graine Graine, pour la fonction srand
 * @return float* Retourtne le tableau créé
 */
float* crea_tab(int taille_tab, int graine){
    float *tableau;
    tableau = malloc(taille_tab*sizeof(float));
    srand(graine);
    for(int i=0;i<taille_tab;i++){
        tableau[i]= ((rand() % (int)pow(10,6))+1);
    }
    return tableau;
}

/**
 * @brief Fonction de test du tri à bulle
 *  Appelle la fonction de tri par bulle, qui trie les éléments du tableau contigus 2 à 2.
 *  Fais en plus une mesure du temps d'execution du tri pour la tableau donné, et range les résultats dans un fichier
 *  Réalise 6 itérations, pour des tailles de tableau de 100 à 10^7, et selon 3 schémas de nombres pasudo-aléatoires
 * 
 * @param nomFich Prends en parametre le nom du fichier dans lequel écrire
 */
void test_Tri_Bulle(char *nomFich){
    float *tableau, moyenne;
    char typeTri[]="Tri_Bulle";
    int taille=100;
    time_t deb, fin;

    for (int j = 0; j < 6; j++){//on veux tester chaque algo avec 6 tableaux différents, de 100 à 10⁷ valeurs, donc 6 itérations
        moyenne = 0; //initialisation de la taille de base du tableau, et de la moyenne, à chaque nouvelle taille de tableau testé
        for(int i=0;i<3;i++){//on veux que chaque algo soit testé 3 fois par taille de tableau, avec des valeurs différentes
            tableau = crea_tab(taille, i);
            deb = time(NULL);
            tri_bulle(tableau, taille);
            fin = time(NULL);
            free(tableau);//libération du tableau en mémoire pour gain de place
            moyenne += difftime(fin,deb);
        }
        moyenne=moyenne/3;

        //appel de la fonction d'ecriture dans le fichier pour permettre le remplissage des données
        data_to_csv(nomFich, typeTri, taille, moyenne);
        taille = taille*10;//on incrémente la taille du tableau de 10 en 10
    }
}

/**
 * @brief Fonction de test du tri par Insertion
 * 
 *  Appelle la fonction de tri par insertion, qui décale les éléments du tableau 1 à 1 de manière à les ranger de manière croissante
 *  Fais en plus une mesure du temps d'execution du tri pour la tableau donné, et range les résultats dans un fichier
 *  Réalise 6 itérations, pour des tailles de tableau de 100 à 10^7, et selon 3 schémas de nombres pasudo-aléatoires
 * 
 * @param nomFich Prends en parametre le nom du fichier dans lequel écrire
 */
void test_Tri_Insertion(char *nomFich){
    float *tableau, moyenne;
    char typeTri[]="Tri_Insertion";
    int taille=100;
    time_t deb, fin;

    for (int j = 0; j < 6; j++){//on veux tester chaque algo avec 6 tableaux différents, de 100 à 10⁷ valeurs, donc 6 itérations
        moyenne = 0; //initialisation de la taille de base du tableau, et de la moyenne, à chaque nouvelle taille de tableau testé
        for(int i=0;i<3;i++){//on veux que chaque algo soit testé 3 fois par taille de tableau, avec des valeurs différentes
            tableau = crea_tab(taille, i);
            deb = time(NULL); 
            tri_insertion(tableau, taille);
            fin = time(NULL);
            free(tableau);//libération du tableau en mémoire pour gain de place
            moyenne += difftime(fin,deb);
        }
        moyenne=moyenne/3;

        //appel de la fonction d'ecriture dans le fichier pour permettre le remplissage des données
        data_to_csv(nomFich, typeTri, taille, moyenne);

        taille = taille*10;//on incrémente la taille du tableau de 10 en 10
    }
}

/**
 * @brief Fonction de test du tri par Selection
 *  
 *  Appelle la fonction de tri par selection, qui cherche la plus petite valeur du tableau pour la placer au plus petit index auquel elle appartient
 *  Fais en plus une mesure du temps d'execution du tri pour la tableau donné, et range les résultats dans un fichier
 *  Réalise 6 itérations, pour des tailles de tableau de 100 à 10^7, et selon 3 schémas de nombres pasudo-aléatoires
 * 
 * @param nomFich Prends en parametre le nom du fichier dans lequel écrire
 */
void test_Tri_Selection(char *nomFich){
    float *tableau, moyenne;
    char typeTri[]="Tri_Selection";
    int taille=100;
    time_t deb, fin;

    for (int j = 0; j < 6; j++){//on veux tester chaque algo avec 6 tableaux différents, de 100 à 10⁷ valeurs, donc 6 itérations
        moyenne = 0; //initialisation de la taille de base du tableau, et de la moyenne, à chaque nouvelle taille de tableau testé
        for(int i=0;i<3;i++){//on veux que chaque algo soit testé 3 fois par taille de tableau, avec des valeurs différentes
            tableau = crea_tab(taille, i);
            deb = time(NULL);
            tri_selection(tableau, taille);
            fin = time(NULL);
            free(tableau);//libération du tableau en mémoire pour gain de place
            moyenne += difftime(fin,deb);
        }
        moyenne=moyenne/3;

        //appel de la fonction d'ecriture dans le fichier pour permettre le remplissage des données
        data_to_csv(nomFich, typeTri, taille, moyenne);

        taille = taille*10;//on incrémente la taille du tableau de 10 en 10
    }
}

/**
 * @brief Fonction de test du tri par Tas
 * 
 *  Appelle la fonction de tri par tas, qui trie les éléments du tableau en les permutants.
 *  Fais en plus une mesure du temps d'execution du tri pour la tableau donné, et range les résultats dans un fichier
 *  Réalise 6 itérations, pour des tailles de tableau de 100 à 10^7, et selon 3 schémas de nombres pasudo-aléatoires
 * 
 * @param nomFich Prends en parametre le nom du fichier dans lequel écrire
 */
void test_Tri_Tas(char *nomFich){
    float *tableau, moyenne;
    char typeTri[]="Tri_Tas";
    int taille=100;
    time_t deb, fin;

    for (int j = 0; j < 6; j++){//on veux tester chaque algo avec 6 tableaux différents, de 100 à 10⁷ valeurs, donc 6 itérations
        moyenne = 0; //initialisation de la taille de base du tableau, et de la moyenne, à chaque nouvelle taille de tableau testé
        for(int i=0;i<3;i++){//on veux que chaque algo soit testé 3 fois par taille de tableau, avec des valeurs différentes
            tableau = crea_tab(taille, i);
            deb = time(NULL);
            tri_tas(tableau, taille);
            fin = time(NULL);
            free(tableau);//libération du tableau en mémoire pour gain de place
            moyenne += difftime(fin,deb);
        }
        moyenne=moyenne/3;

        //appel de la fonction d'ecriture dans le fichier pour permettre le remplissage des données
        data_to_csv(nomFich, typeTri, taille, moyenne);

        taille = taille*10;//on incrémente la taille du tableau de 10 en 10
    }
}