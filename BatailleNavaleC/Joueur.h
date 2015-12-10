#ifndef Joueur_H
#define Joueur_H
#include <stdlib.h>
#include <stdio.h>
#include "Grille.h"
#include "EnsBateaux.h"
#define Bool int
#define False 0
#define True !False


/************************/
/* Structure de données */
/* Amusez vous :)       */
/************************/

typedef struct Joueur Joueur ;

/*******************************/
/* Spécification Fonctionnelle */
/*******************************/

/* Affecte un nom à un joueur */
Joueur set_NomJoueur(char[]);

/* Retourne le nom d'un joueur */
char* get_NomJoueur(Joueur J);

/* Renvoie l'Ensemble de bateaux du Joueur J */
EnsBateaux get_Bateaux(Joueur J);

/* Retourne la Grille associée au joueur */
Grille get_Grille(Joueur J);

/* Initialise le set de base de bateau du joueur automatiquement lors de sa création  */
EnsBateaux initBateaux(Joueur J);

/* Renvoie True si le joueur J a perdu, false sinon */
/* a_perdu(J) <=> get_NombreBateauxNonCoules(J)==0, False sinon */
Bool a_perdu(Joueur J);


#endif
