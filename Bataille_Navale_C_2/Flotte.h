#ifndef FLOTTE_H
#define FLOTTE_H

#include <stdlib.h>
#include <stdio.h>
#include "Bateau.h"

typedef struct Flotte Flotte;
struct Flotte
{
    int nbreBateaux;
    /* Ensemble de bateaux */

};

typedef Flotte* FlotteN;


FlotteN creerFlotte();           /* crée une flotte vide */
int estVideFlotte(FlotteN f);      /* retourne 1 si la flotte est vide, 0 sinon, estVideFlotte(creerFlotte())==1 */
BateauN listeBateaux(FlotteN f);    /* retourne la liste de bateaux dont est composée la flotte, retourne vide si elle est vide */
FlotteN ajoutBateau(BateauN b);     /* ajoute un bateau dans la listeBateaux lors du placement des bateaux */
FlotteN suppBateau(BateauN b);      /* supprime un bateau dans la listeBateaux si ce même bateau est coulé */
int nbreBateaux(FlotteN f);        /* retourne le nombre de bateaux de la listeBateaux */

#endif
