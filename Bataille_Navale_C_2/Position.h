#ifndef POSITION_H
#define POSITION_H

#include <stdlib.h>
#include <stdio.h>


typedef struct Position Position ;
struct Position
{
    int X;
    int Y;
};

typedef Position* PositionN;

PositionN choixPosition();           /* demande de rentrer 2 entiers et en fait une position */

int estTouchee(PositionN, FlotteN);   /* retourne 1 si la position paramètre correspond à la position d'un bateau dans la flotte en paramètre, 0 sinon */
int estCoulee(PositionN, FlotteN);    /* retourne 1 si la position paramètre correspond au dernier morceau du bateau au préalablement touché,0 sinon, NECESSITE estTouchee(Position, Flotte)==1 */
int estVue(PositionN, FlotteN);       /* retourne 1 si une des coordonnées de la position paramètre correspond à un bateau de la flotte, 0 sinon*/
int estRatee(PositionN, FlotteN);     /* retourne 1 si la position paramètre ne touche pas et ne voit pas un bateau compris dans la flotte, 0 sinon */
int estValide(PositionN);            /* retourne 1 si les coordonnées de la position sont comprises entre 1 et 20, et si estDans(Position, Flotte) == 0,  0 sinon */
int estDans(PositionN, FlotteN);      /* retourne 1 si la position paramètre est déjà correspondant à une position de bateau dans la flotte */

#endif
