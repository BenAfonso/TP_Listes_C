#ifndef BATEAU_H
#define BATEAU_H

#include <stdlib.h>
#include <stdio.h>
#include "Position.h"
#include "Bateau.h"

/* Structure de données */
typedef struct Bateau Bateau;
struct Bateau
{
    int taille;
    /*PositionN listeMorceaux[];*/

};
typedef struct Bateau* BateauN;

/* Spécification fonctionnelle d'un autre groupe */

BateauN creerBateau(int taille);        /* crée un bateau à partie d'une taille entrée en paramètre */
PositionN listeMorceaux(BateauN b); /* retourne la liste des positions dont le bateau est composé */
BateauN suppMorceau(PositionN p);   /* supprime une position dans la listeMorceaux si le bateau est touché */
BateauN ajoutMorceau(PositionN p);  /* ajoute une position dans la listeMorceaux lors du placement des bateaux */

#endif
