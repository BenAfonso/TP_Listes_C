#ifndef POSITION_H
#define POSITION_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"



Position choixPosition();           /* demande de rentrer 2 entiers et en fait une position */

/* Crée une position non active */
Position creerPosition();
/* Post: estActivePos(creerPosition()) == 0 */

/* Permet de savoir si une position est utilisée par un morçeau de bateau */
int estActivePos(Position p);
Position ActiverPos(Position p);

int estTouchee(Position p, Flotte f);   /* retourne 1 si la position paramètre correspond à la position d'un bateau dans la flotte en paramètre, 0 sinon */
int estCoulee(Position p, Flotte f);    /* retourne 1 si la position paramètre correspond au dernier morceau du bateau au préalablement touché,0 sinon, NECESSITE estTouchee(Position, Flotte)==1 */
int estVue(Position p, Flotte f);       /* retourne 1 si une des coordonnées de la position paramètre correspond à un bateau de la flotte, 0 sinon*/
int estRatee(Position p, Flotte f);     /* retourne 1 si la position paramètre ne touche pas et ne voit pas un bateau compris dans la flotte, 0 sinon */
int estValide(Position p);            /* retourne 1 si les coordonnées de la position sont comprises entre 1 et 20, et si estDans(Position, Flotte) == 0,  0 sinon */
int estDans(Position p, Flotte f);      /* retourne 1 si la position paramètre est déjà correspondant à une position de bateau dans la flotte */


/* Aides */

/* Renvoie le bateau à la position passée en paramètre. */
/* Renvoie un bateau vide si aucun bateau n'est sur la position (pourt l'instant)*/
Bateau quelBateau(Position p,Flotte f);

#endif
