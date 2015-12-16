#ifndef BATEAU_H
#define BATEAU_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"

Bateau creerBateau(int);        /* crée un bateau à partie d'une taille entrée en paramètre */
Position listeMorceaux(Bateau); /* retourne la liste des positions dont le bateau est composé */
Bateau suppMorceau(Position);   /* supprime une position dans la listeMorceaux si le bateau est touché */
Bateau ajoutMorceau(Position);  /* ajoute une position dans la listeMorceaux lors du placement des bateaux */

#endif