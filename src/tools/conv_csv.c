#include <stdio.h>
#include "../triBulle/tri_bulle.h"
#include "../triInsertion/tri_insertion.h"
#include "../triSelection/tri_selection.h"
#include "../triTas/tri_tas.h"

/*Fonction main
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
Fonction permettant la conversion au format .csv des données passées en paramètre
Prends en entrée les temps moyens de calcul pour les 4 fonctions et eur type, les écrit sur un fichier .Csv, créé ou ouvert au besoin
*/

void conv_csv(char *TypeTri,int taille_Echantillon, float Exec_Moyen){
    FILE *fich;//Création d'un pointeur de type fichier
    fich = fopen("./resultats.csv","a");//ouverture, et création du fichier si il n'existe pas, pour rajout de conetnu via l'option a
    
    if(fich == NULL){//si le pointeur fich n'est pas alloué, il est de valeur NULL, donc on retourne et erreur et termine le programme
        printf("Erreur d'ouverture/création du fichier");
        exit(1);
    }

    fprintf(fich,"%s", "Type_tri,Taille_echantillon,Temps_exec_moyen,");

    fclose(fich);//fermeture du fichier
}

