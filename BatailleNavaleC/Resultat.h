#ifndef RESULTAT_H
#define RESULTAT_H
#include <stdlib.h>
#include <stdio.h>
#include "Position.h"
#include "Grille.h"
#include "Bateau.h"

/************************/
/* Structure de données */
/* Amusez vous :)       */
/************************/


typedef struct Resultat Resultat ;


/*******************************/
/* Spécification Fonctionnelle */
/*******************************/

/* Teste si la position (du tir) a touché une position intacte dans la GRILLE ADVERSE en paramètre*/
/* En fonction d'une série de test sur la position appel une des fonctions ci-dessous */
void creerResultat(Grille,Position);


/* Renvoie une chaîne de caractère => Loupé */
char* creerLoupe(Resultat);

/* Enleve une case du bateau à la position dans la grille adverse et renvoie une chaîne de caractères */
/* (1) creerCoule => caseTouche(Bateau) */
char* creerCoule(Resultat);


/* Renvoie une chaîne de caractères (En vue) */
/* creerEnVue(Resutat) <=> BateauEnVue(Grille,Position) */
char* creerEnVue(Resultat);

/* Enleve une case du bateau à la position dans la grille adverse et renvoie une chaîne de caractères */
/* (2) creerCoule => caseTouche(Bateau) */
char* creerTouche(Resultat);


#endif
