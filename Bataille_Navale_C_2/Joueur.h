#ifndef JOUEUR_H
#define JOUEUR_H

#include <stdlib.h>
#include <stdio.h>
#include "Flotte.h"

typedef struct Joueur Joueur ;
struct Joueur
{
    FlotteN flotte;
};

typedef Joueur* JoueurN;

JoueurN creerJoueur();           /* crée un joueur inactif, incluant également la création de sa flotte */
FlotteN flotte(JoueurN);          /* retourne la flotte du joueur */
JoueurN placerBateau(JoueurN);    /* pour 5 bateaux de taille respectives 1, 2, 2, 3, 4, demande au joueur de rentrer une position et une direction qui sera représentée par un entier (0 pour horizontal et 1 pour vertical), plaçant automatiquement les positions correspondantes dans la listeMorceaux de chaque bateau et ajoute le bateau dans la flotte du joueur */

#endif
