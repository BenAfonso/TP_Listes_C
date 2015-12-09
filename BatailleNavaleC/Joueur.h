#ifndef Joueur J_H
#define Joueur J_H
#include <stdlib.h>
#include <stdio.h>
#include "Grille.h"
#include "EnsBateaux.h"
#define Bool int
#define False 0
#define True !False
typedef Joueur* Joueur;

// Définition des fonctions

/* Renvoie l'Ensemble de bateaux du Joueur J */
EnsBateaux get_Bateaux(Joueur J);

int get_NombreBateauxNonPlaces(Joueur J);
int get_NombreBateauxPlaces(Joueur J);
int get_NombreBateauxNonCoules(Joueur J);

Grille get_Grille(Joueur J);
/* Crée un set de base de bateau */
EnsBateaux initBateaux(Joueur J);
Bool a_perdu(Joueur J);
// Renvoie True si get_NombreBateauxNonCoules(Joueur)==0

#endif
