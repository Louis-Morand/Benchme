/*Fonction main
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
Fonction globale regroupant l'affectation, les tests, et le rendu au format .csv des résultats.
*/
#include <stdio.h>
#include <stdlib.h>
#include "./triInsertion/tri_insertion.h"
#include "./triBulle/tri_bulle.h"
#include "./triSelection/tri_selection.h"
#include "./triTas/tri_tas.h"
/*
Pour les tests: incluer blibliotheque time pour mesurer le temps d'exécution des progs
mettre 1 time avant 1 time apres et faire la diff des 2 pour voir temps d'execution
TODO: fait une fonction pour mettre au format csv => plus propre ?
*/
int main(int argc, char *argv[]){
    
    int taille = 10;
    float tableau[taille];
    for(int i=0;i<=taille; i++){
        tableau[i]= ((rand() % 1000000)+1);
    }
   

    printf("\nINSERTION - TABLEAU AVANT:\t");
    for (int i = 0; i<=taille; i++){
        printf("%.f ", tableau[i]);
    }

    tri_insertion(tableau, taille);

    printf("\nINSERTION - TABLEAU APRES:\t");
    for (int i = 0; i<=taille; i++){
        printf("%.2f ", tableau[i]);
    }

    printf("%c\n", " ");

	printf("\nTAS - TABLEAU AVANT:\t");
    for (int i = 0; i<=taille; i++){
        printf("%.2f ", tableau[i]);
    }

    tri_tas(tableau, taille);

    printf("\nTAS - TABLEAU APRES:\t");
    for (int i = 0; i<=taille; i++){
        printf("%.2f ", tableau[i]);
    }

    printf("%c\n", " ");

    printf("\nBULLE - TABLEAU AVANT:\t");
    for (int i = 0; i<=taille; i++){
        printf("%.2f ", tableau[i]);
    }
    
    tri_bulle(tableau, taille);

    printf("\nBULLE - TABLEAU APRES:\t");
    for (int i = 0; i<=taille; i++){
        printf("%.2f ", tableau[i]);
    }
    printf("\n");

	return (0);
}