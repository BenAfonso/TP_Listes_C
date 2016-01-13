#include <stdio.h>
#include "Flotte.h"
#include "Bateau.h"
/*   */
Flotte creerFlotte()
{

    Flotte flotte;

    flotte.nbreBateaux = 5;


    flotte.tableauBateaux = (Bateau *)malloc(flotte.nbreBateaux*sizeof(Bateau));

    flotte.tableauBateaux[0]=creerBateau(5);
    flotte.tableauBateaux[1]=creerBateau(4);
    flotte.tableauBateaux[2]=creerBateau(3);
    flotte.tableauBateaux[3]=creerBateau(2);
    flotte.tableauBateaux[4]=creerBateau(1);
    return flotte;
}

Bateau* tableauBateaux(Flotte f)
{
    return f.tableauBateaux;
}

int nbreBateaux(Flotte f)
{
  return f.nbreBateaux;
}
int estVideFlotte(Flotte f)
{
    if (f.nbreBateaux == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
