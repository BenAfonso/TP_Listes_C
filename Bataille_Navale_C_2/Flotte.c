#include <stdio.h>
#include "Flotte.h"
#include "Bateau.h"
/*   */
FlotteN creerFlotte()
{
    FlotteN flotte = NULL;
    flotte->nbreBateaux = 5;
    flotte->tableauBateaux = (BateauN)malloc(flotte->nbreBateaux*sizeof(Bateau))
    flotte->tableauBateaux[0]=NULL;
    flotte->tableauBateaux[1]=NULL;
    flotte->tableauBateaux[2]=NULL;
    flotte->tableauBateaux[3]=NULL;
    flotte->tableauBateaux[4]=NULL;
    return flotte;
}

BateauN tableauBateaux(FlotteN f)
{
    return f->tableauBateaux;
}

int nbreBateaux(FlotteN f)
{
  return f->nbreBateaux;
}
int estVideFlotte(FlotteN f)
{
    if (f->nbreBateaux == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
