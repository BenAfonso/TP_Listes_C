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


/************************/
/* Structure de données */
/* Amusez vous :)       */
/************************/


typedef struct Position Position ;


/*******************************/
/* Spécification Fonctionnelle */
/*******************************/

/* Renvoie la coordonnée X de la Position */
int getX(Position);
/* Renvoie la coordonnée Y de la Position */
int getY(Position);


/* Renvoie True si la position saisie correspond à un tir, False sinon */
Bool get_Tire(Position);

/* Defini si la position est un tir ou non */
/* get_Tire(set_Tire(Position)) */
Position set_Tire(Position);



/* Renvoie True si abs(getX(Position1)-getX(Position2))==1 */
Bool est_AdjacenteX(Position Position1,Position Position2);

/* Renvoie True si abs(getX(Position1)-getX(Position2))==1 */
Bool est_AdjacenteY(Position Position1,Position Position2);


#endif
