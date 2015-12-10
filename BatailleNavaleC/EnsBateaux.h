#ifndef ENSBATEAUX_H
#define ENSBATEAUX_H
#include <stdlib.h>
#include <stdio.h>
#include "Bateau.h"


/************************/
/* Structure de données */
/* Amusez vous :)       */
/************************/


typedef struct EnsBateaux EnsBateaux ;


/*******************************/
/* Spécification Fonctionnelle */
/*******************************/

/* Renvoie le n-ieme bateau, Renvoie Vide s'il n'y a pas de bateau */
Bateau get_Bateau(EnsBateaux,int);

/* Renvoie le premier bateau, Renvoie Vide s'il n'y a pas de bateaux */
/* get_Premier_Bateau(EnsBateaux) <=> get_NombreBateauxPlaces(EnsBateaux) > 0 */
Bateau get_Premier_Bateau(EnsBateaux);


/* Renvoie le nombre de bateaux places */
int get_NombreBateauxPlaces(EnsBateaux);

/* Renvoie le nombre de bateaux coules */
int get_NombreBateauxCoules(EnsBateaux);

/* Renvoie le nombre de bateaux NonPlaces */
int get_NombreBateauxNonPlaces(EnsBateaux);

/* Ajouter un bateau à l'ensemble des bateaux*/
EnsBateaux addBateau(EnsBateaux,Bateau);

/* Retirer un bateau de l'ensemble des bateaux*/
/* retirerBateau(EnsBateaux,Bateau) <=> estPlace(Bateau) */
EnsBateaux retirerBateau(EnsBateaux,Bateau);

#endif
