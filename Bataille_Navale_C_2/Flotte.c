#include <stdio.h>
#include "Flotte.h"
#include "Bateau.h"
/*   */
Flotte creerFlotte()
{

    Flotte flotte;

    flotte.nbreBateaux = 5;


    flotte.tableauBateaux = (Bateau *)malloc(flotte.nbreBateaux*sizeof(Bateau));

    flotte.tableauBateaux[0]=creerBateau(4);
    flotte.tableauBateaux[1]=creerBateau(3);
    flotte.tableauBateaux[2]=creerBateau(2);
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
    if (nbreBateaux(f) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

Flotte ajoutBateau(Flotte f, Bateau bateau)
{
    /* Ajout dans le premier vide */
    int i=0;
    set_EstPlace(bateau);
    while(i < nbreBateaux(f) && get_EstPlace(tableauBateaux(f)[i]))
    {
        i=i+1;
    }
    /* Quand on sort, soit le bateau i n'est pas placé, soit i = nombrebateaux */
    if (i == nbreBateaux(f))
    {
        printf("Aucun bateau non placé !");
    }
    /* On est sur le premier bateau non placé */
    else
    {
        tableauBateaux(f)[i] = bateau;
        i=nbreBateaux(f);
    }
    return f;
}
