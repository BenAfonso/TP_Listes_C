#ifndef POSITION_H
#define POSITION_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"



PositionN choixPosition();           /* demande de rentrer 2 entiers et en fait une position */

int estTouchee(PositionN p, FlotteN f);   /* retourne 1 si la position paramètre correspond à la position d'un bateau dans la flotte en paramètre, 0 sinon */
int estCoulee(PositionN p, FlotteN f);    /* retourne 1 si la position paramètre correspond au dernier morceau du bateau au préalablement touché,0 sinon, NECESSITE estTouchee(Position, Flotte)==1 */
int estVue(PositionN p, FlotteN f);       /* retourne 1 si une des coordonnées de la position paramètre correspond à un bateau de la flotte, 0 sinon*/
int estRatee(PositionN p, FlotteN f);     /* retourne 1 si la position paramètre ne touche pas et ne voit pas un bateau compris dans la flotte, 0 sinon */
int estValide(PositionN p);            /* retourne 1 si les coordonnées de la position sont comprises entre 1 et 20, et si estDans(Position, Flotte) == 0,  0 sinon */
int estDans(PositionN p, FlotteN f);      /* retourne 1 si la position paramètre est déjà correspondant à une position de bateau dans la flotte */

#endif
