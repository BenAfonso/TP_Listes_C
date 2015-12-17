#ifndef BATEAU_H
#define BATEAU_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"



/* Spécification fonctionnelle d'un autre groupe */

BateauN creerBateau(int taille);        /* crée un bateau à partie d'une taille entrée en paramètre */
Position* tableauMorceaux(BateauN b); /* retourne la liste des positions dont le bateau est composé */
BateauN suppMorceau(BateauN b,Position p);   /* supprime une position dans la listeMorceaux si le bateau est touché */
BateauN ajoutMorceau(BateauN b,Position p);  /* ajoute une position dans la listeMorceaux lors du placement des bateaux */
int taille(BateauN);

#endif
