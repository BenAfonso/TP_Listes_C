#ifndef ENSBATEAUX_H
#define ENSBATEAUX_H
#include <stdlib.h>
#include <stdio.h>
#include "Bateau.h"

typedef struct EnsBateaux EnsBateaux ;

// Définition des fonctions
// Creer bateau à faire

/* Renvoie le n-ieme bateau */
Bateau get_Bateau(EnsBateaux,int);
/* Renvoie le premier bateau */
Bateau get_Premier_Bateau(EnsBateaux);
// get_Premier_Bateau(EnsBateaux) <=> get_NombreBateauxPlaces(EnsBateaux) > 0

/* Renvoie le nombre de bateaux places */
int get_NombreBateauxPlaces(EnsBateaux);
/* Renvoie le nombre de bateaux coules */
int get_NombreBateauxCoules(EnsBateaux);
/* Renvoie le nombre de bateaux NonPlaces */
int get_NombreBateauxNonPlaces(EnsBateaux);

/* Ajouter un bateau à l'ensemble des bateaux*/
EnsBateaux addBateau(EnsBateaux,Bateau);
/* Retirer un bateau de l'ensemble des bateaux*/
EnsBateaux retirerBateau(EnsBateaux,Bateau);
// retirerBateau(EnsBateaux,Bateau) <=> estPlace(Bateau)
#endif
