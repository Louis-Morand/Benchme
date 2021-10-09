/**
 * @file main.c
 * @author Louis MORAND, Benoit ARQUILLIERE
 * @brief Fonction globale permettant l'appel aux fonctions de test, qui regroupent l'affectation, les tests, et le rendu au format .csv des résultats.
 * @version 2
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
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

/**
 * @mainpage Benchme
 * 
 *
 * @brief Documentation générale du projet Benchme, écrit en C
 * Le but de ce TP est l'implémentation de divers algorithmes de tri
 * 
 * L'exécution se fait via ./output/main, en passant en paramètre le nom du fichier dans lequel écrire, qui sera créé si besoin est, ou écrit à la suite de l'existant
 * 
 */

/**
 * @brief Focntion main, sert à appeler les fonctions de tri
 * @param[in] argc Nombre d'arguments passés en paramètre lors de l'appel de la fonction
 * @param[in] argv[] Arguments passés en paramètre lors de l'appel de la fonction
 * argv[0] est le nom de la fonction, et
 * argv[1] est le nom du fichier sur lequel écrire
 */
int main(int argc, char *argv[]){

    test_Tri_Bulle(argv[1]);
    test_Tri_Insertion(argv[1]);
    test_Tri_Selection(argv[1]);
    test_Tri_Tas(argv[1]);

	return (0);
}