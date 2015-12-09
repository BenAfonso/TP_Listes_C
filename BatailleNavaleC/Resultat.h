#ifndef RESULTAT_H
#define RESULTAT_H
#include <stdlib.h>
#include <stdio.h>
#include "Position.h"
#include "Grille.h"
#include "Bateau.h"

typedef Resultat* Resultat;

// Définition des fonctions

/* Teste si la position (du tir) a touché une position intacte dans la GRILLE ADVERSE en paramètre*/
void creerResultat(Grille,Position);
// En fonction d'une série de test appel Affiche le resultat d'une des fonctions ci-dessous

/* Renvoie une chaîne de caractère => Loupé */
char* creerLoupe(Resultat);

/* Enleve une case du bateau à la position dans la grille adverse et renvoie une chaîne de caractères */
char* creerCoule(Resultat);
// (1) creerCoule => caseTouche(Bateau)

/* Renvoie une chaîne de caractères (En vue) */
char* creerEnVue(Resultat);

/* Enleve une case du bateau à la position dans la grille adverse et renvoie une chaîne de caractères */
char* creerTouche(Resultat);
// (1) creerCoule => caseTouche(Bateau)

#endif
