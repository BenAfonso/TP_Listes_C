#ifndef FLOTTE_H
#define FLOTTE_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"




Flotte creerFlotte();           /* crée une flotte vide */
int estVideFlotte(Flotte f);      /* retourne 1 si la flotte est vide, 0 sinon, estVideFlotte(creerFlotte())==1 */
Bateau* tableauBateaux(Flotte f);    /* retourne la liste de bateaux dont est composée la flotte, retourne vide si elle est vide */
Flotte ajoutBateau(Flotte f, Bateau b);     /* ajoute un bateau dans la listeBateaux lors du placement des bateaux */
Flotte suppBateau(Flotte f, Bateau b);      /* supprime un bateau dans la listeBateaux si ce même bateau est coulé */
int nbreBateaux(Flotte f);        /* retourne le nombre de bateaux de la listeBateaux */

int aLaPosition(Flotte f, Position p);

/* Aides */
void afficherBateaux(Flotte f);
#endif
