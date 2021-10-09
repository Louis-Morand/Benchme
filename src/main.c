/*Fonction main
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
Fonction globale regroupant l'affectation, les tests, et le rendu au format .csv des résultats.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "./tools/tools.h"
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

void main(){

    void test_Tri_Bulle();
    test_Tri_Insertion();
    test_Tri_Selection();
    test_Tri_Tas();

	return;
}