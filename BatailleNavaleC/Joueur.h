#ifndef Joueur_H
#define Joueur_H
#include <stdlib.h>
#include <stdio.h>
#include "Grille.h"
#include "EnsBateaux.h"
#define Bool int
#define False 0
#define True !False

typedef struct Joueur Joueur ;

// Définition des fonctions

/* Renvoie l'Ensemble de bateaux du Joueur J */
EnsBateaux get_Bateaux(Joueur J);


Grille get_Grille(Joueur J);
/* Crée un set de base de bateau */
EnsBateaux initBateaux(Joueur J);
Bool a_perdu(Joueur J);
// Renvoie True si get_NombreBateauxNonCoules(Joueur)==0

#endif
