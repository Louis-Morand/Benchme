/*
Fonction d'ecriture/ de création du fichier csv
Auteur: Louis MORAND, Benoit ARQUILLIERE
Version : 1
Fonction permettant la conversion au format .csv des données passées en paramètre
Prends en entrée le type de tri, la taille de l'echantillon, et le temps d'exécution, et kes rajoute sur une ligne du fichier csv créé
*/

#include <stdio.h>
#include <stdlib.h>
#include "tools.h"
#include "../triBulle/tri_bulle.h"
#include "../triInsertion/tri_insertion.h"
#include "../triSelection/tri_selection.h"
#include "../triTas/tri_tas.h"


void data_to_csv(char *nomFich, char *TypeTri,int taille_Echantillon, float Exec_Moyen){
    int taille_fich;
    FILE *fich;//Création d'un pointeur de type fichier
    fich = fopen(nomFich,"a");//ouverture, et création du fichier si il n'existe pas, pour rajout de conetnu via l'option a
    
    if(fich == NULL){//si le pointeur fich n'est pas alloué, il est de valeur NULL, donc on retourne et erreur et termine le programme
        printf("\nErreur d'ouverture/création du fichier\n");
        exit(1);
    }
    //Fonction de vérification de la taille du fichier
    if (NULL != fich) {
    fseek (fich, 0, SEEK_END);//ouvre le fichier, va au caractère de fin
    taille_fich = ftell(fich);//retourne la position du pointeur dans la fichier
        if (taille_fich == 0) {
            fprintf(fich,"%s", "Type_tri,Taille_echantillon,Temps_exec_moyen\n");
            //ajout au début de fichier de l'entete
        }
    }
    fprintf(fich,"%s;%d;%.5f\n", TypeTri, taille_Echantillon, Exec_Moyen);
    //ajout dans le fihcier des informations relatives à la fonction passée en paraèmtre
    fclose(fich);//fermeture du fichier
}

