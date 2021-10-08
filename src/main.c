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
int main(){
    
    int taille = 10;
    float tableau[taille];
    for(int i=0;i<=taille; i++){
        tableau[i]= ((rand() % 1000000)+1);
    }

    float tab1[taille];
    for(int i=0;i<=taille; i++){
        tab1[i] = tableau[i];
    }
    
    printf("\n\nINSERTION - TABLEAU AVANT:\n");
    for (int i = 0; i<=taille; i++){
        printf("%.f ", tab1[i]);
    }

    tri_insertion(tab1, taille);

    printf("\nINSERTION - TABLEAU APRES:\n");
    for (int i = 0; i<=taille; i++){
        printf("%.2f ", tab1[i]);
    }

    float tab2[taille];
    for(int i=0;i<=taille; i++){
        tab2[i] = tableau[i];
    }

    printf("\n\nSELECTION - TABLEAU AVANT:\n");
    for (int i = 0; i<=taille; i++){
        printf("%.f ", tab2[i]);
    }

    tri_insertion(tab2, taille);

    printf("\nSELECTION - TABLEAU APRES:\n");
    for (int i = 0; i<=taille; i++){
        printf("%.2f ", tab2[i]);
    }

    float tab3[taille];
    for(int i=0;i<=taille; i++){
        tab3[i] = tableau[i];
    }

	printf("\n\nTAS - TABLEAU AVANT:\n");
    for (int i = 0; i<=taille; i++){
        printf("%.2f ", tab3[i]);
    }

    tri_tas(tab3, taille);

    printf("\nTAS - TABLEAU APRES:\n");
    for (int i = 0; i<=taille; i++){
        printf("%.2f ", tab3[i]);
    }

    float tab4[taille];
    for(int i=0;i<=taille; i++){
        tab4[i] = tableau[i];
    }

    printf("\n\nBULLE - TABLEAU AVANT:\n");
    for (int i = 0; i<=taille; i++){
        printf("%.2f ", tab4[i]);
    }
    
    tri_bulle(tab4, taille);

    printf("\nBULLE - TABLEAU APRES:\n");
    for (int i = 0; i<=taille; i++){
        printf("%.2f ", tab4[i]);
    }

	return (0);
}