#include <stdio.h>
#include "Flotte.h"
#include "Bateau.h"
/*   */
FlotteN creerFlotte()
{

    FlotteN flotte = NULL;
    printf("Jusqu'ici tout va bien.\n");
    flotte->nbreBateaux = 5;
    printf("1\n");

    flotte->tableauBateaux = (Bateau *)malloc(flotte->nbreBateaux*sizeof(Bateau));

    flotte->tableauBateaux[0]=creerBateau(5);
    flotte->tableauBateaux[1]=creerBateau(4);
    flotte->tableauBateaux[2]=creerBateau(3);
    flotte->tableauBateaux[3]=creerBateau(2);
    flotte->tableauBateaux[4]=creerBateau(1);
    return flotte;
}

Bateau* tableauBateaux(FlotteN f)
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
