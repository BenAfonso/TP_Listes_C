#ifndef POSITION_H
#define POSITION_H
#include <stdlib.h>
#include <stdio.h>
#include "Joueur.h"
#include "Bateau.h"
#include "Grille.h"

#define Bool int
#define False 0
#define True !False

typedef struct Position Position ;

int getX(Position);
int getY(Position);

/* get_Tire : Position -> Bool */
/* Renvoie True si la position est un tir, False sinon */
Bool get_Tire(Position);

/* set_Tire : Position -> Position */
/* Defini si la position est un tir ou non */
Position set_Tire(Position);
// get_Tire(set_Tire(Position))



Bool est_AdjacenteX(Position Position1,Position Position2);
// Renvoie True si abs(getX(Position1)-getX(Position2))==1

Bool est_AdjacenteY(Position Position1,Position Position2);
// Renvoie True si abs(getY(Position1)-getY(Position2))==1

#endif
