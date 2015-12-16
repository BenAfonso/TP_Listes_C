#ifndef FLOTTE_H
#define FLOTTE_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"

Flotte creerFlotte();           /* crée une flotte vide */
int estVideFlotte(Flotte);      /* retourne 1 si la flotte est vide, 0 sinon, estVideFlotte(creerFlotte())==1 */
Bateau listeBateaux(Flotte);    /* retourne la liste de bateaux dont est composée la flotte, retourne vide si elle est vide */
Flotte ajoutBateau(Bateau);     /* ajoute un bateau dans la listeBateaux lors du placement des bateaux */
Flotte suppBateau(Bateau);      /* supprime un bateau dans la listeBateaux si ce même bateau est coulé */
int nbreBateaux(Flotte);        /* retourne le nombre de bateaux de la listeBateaux */

#endif