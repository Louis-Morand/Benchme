/*Fonction main
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
Fonction globale regroupant l'affectation, les tests, et le rendu au format .csv des résultats.
*/
#include <stdio.h>
#include "./triInsertion/tri_insertion.h"
#include "./triBulle/tri_bulle.h"
#include "./triSelection/tri_selection.h"
#include "./triTas/tri_tas.h"
/*
Pour les tests: incluer blibliotheque time pour mesurer le temps d'exécution des progs
mettre 1 time avant 1 time apres et faire la diff des 2 pour voir temps d'execution
TODO: fait une fonction pour mettre au format csv => plus propre ?
*/
int main(int argc, char *argv[])
{
	float tableau[] = {3.0,2.0,5.0,1.0,4.0};
	int tableau2[] = {5,7,15,365,1};

    printf("\nINSERTION - TABLEAU AVANT:\t");
    for (int i = 0; i<=4; i++){
        printf("%.2f ", tableau[i]);
    }

    tri_insertion(tableau, 5);

    printf("\nINSERTION - TABLEAU APRES:\t");
    for (int i = 0; i<=4; i++){
        printf("%.2f ", tableau[i]);
    }

    printf("%c\n", " ");

	printf("\nTAS - TABLEAU AVANT:\t");
    for (int i = 0; i<=4; i++){
        printf("%d ", tableau2[i]);
    }

	//tri_bulle(tableau2, 5);
    tri_tas(tableau2, 5);

    printf("\nTAS - TABLEAU APRES:\t");
    for (int i = 0; i<=4; i++){
        printf("%d ", tableau2[i]);
    }

    printf("%c\n", " ");

    printf("\nBULLE - TABLEAU AVANT:\t");
    for (int i = 0; i<=4; i++){
        printf("%d ", tableau2[i]);
    }
    
	//tri_bulle(tableau2, 5);
    tri_bulle(tableau2, 5);

    printf("\nBULLE - TABLEAU APRES:\t");
    for (int i = 0; i<=4; i++){
        printf("%d ", tableau2[i]);
    }
	return (0);
}