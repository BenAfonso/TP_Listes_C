#ifndef BATEAU_H
#define BATEAU_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"

/* Structure de données */
typedef struct Bateau Bateau;
struct Bateau
{
    int taille;
    Position[] listeMorceaux;

}

/* Spécification fonctionnelle d'un autre groupe */

Bateau creerBateau(int taille);        /* crée un bateau à partie d'une taille entrée en paramètre */
Position[] listeMorceaux(Bateau b); /* retourne la liste des positions dont le bateau est composé */
Bateau suppMorceau(Position p);   /* supprime une position dans la listeMorceaux si le bateau est touché */
Bateau ajoutMorceau(Position p);  /* ajoute une position dans la listeMorceaux lors du placement des bateaux */

#endif
