#ifndef _TOOLS_H
#define _TOOLS_H

void data_to_csv(char *nomFich, char *TypeTri,int taille_Echantillon, float Exec_Moyen);
float* crea_tab(int taille_tab, int graine);
//void test_Tri_Bulle(char *nomFich);
void test_Tri_Bulle();
void test_Tri_Insertion(char *nomFich);
void test_Tri_Selection(char *nomFich);
void test_Tri_Tas(char *nomFich);

#endif