#ifndef BATEAU_H
#define BATEAU_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"



/* Spécification fonctionnelle d'un autre groupe */

Bateau creerBateau(int taille);        /* crée un bateau à partie d'une taille entrée en paramètre */
Position* tableauMorceaux(Bateau b); /* retourne la liste des positions dont le bateau est composé */
Bateau suppMorceau(Bateau b,Position p);   /* supprime une position dans la listeMorceaux si le bateau est touché */
Bateau ajoutMorceau(Bateau b,Position p);  /* ajoute une position dans la listeMorceaux lors du placement des bateaux */

int taille(Bateau b);

#endif
