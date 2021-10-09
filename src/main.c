/*Fonction main
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
Fonction globale permettant l'appel aux fonctions de test, qui regroupent l'affectation, les tests, et le rendu au format .csv des résultats.
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


int main(int argc, char *argv[]){

    test_Tri_Bulle(argv[1]);
    test_Tri_Insertion(argv[1]);
    test_Tri_Selection(argv[1]);
    test_Tri_Tas(argv[1]);

	return (0);
}