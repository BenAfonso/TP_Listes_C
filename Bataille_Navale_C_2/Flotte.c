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

int nbreBateauxActifs(Flotte f)
{
  int cpt=0;
  for (int i=0;i<nbreBateaux(f);i++)
  {
    if (!(estDetruit(tableauBateaux(f)[i])))
    {
      cpt++;
    }
  }
  return cpt;
}
int estVideFlotte(Flotte f)
{
    if (nbreBateauxActifs(f) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int aLaPosition(Flotte f, Position p)
{
  int i=0;
  int j=0;
  int sortDeBoucle=0;
  while (i < nbreBateaux(f) && sortDeBoucle == 0)
  {
    /* On parcourt les bateaux */
    j=0;
      while (j<taille(tableauBateaux(f)[i]))
      {
        if (tableauMorceaux(tableauBateaux(f)[i])[j].X == p.X && tableauMorceaux(tableauBateaux(f)[i])[j].Y == p.Y)
        {
          /* On sort de la boucle */
          sortDeBoucle=1;
        }
        j++;
      }
      i++;
    /* Puis les morçeaux */
  }
  return sortDeBoucle;
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
        printf("\nERREUR Aucun bateau non placé !");
    }
    /* On est sur le premier bateau non placé */
    else
    {
        tableauBateaux(f)[i] = bateau;
        i=nbreBateaux(f);
    }
    return f;
}

Flotte suppBateau(Flotte f,Bateau b)
{
  b.estPlace = 0;
  /*f.nbreBateaux = f.nbreBateaux - 1;*/
  return f;
}


void afficherBateaux(Flotte f)
{
  int i =0;
  /* On parcourt un à un les bateaux */
  while (i<nbreBateaux(f))
  {
      printf("===== BATEAU %d\n",i);
      afficherMorceaux(tableauBateaux(f)[i]);
      printf("===============\n");
      i=i+1;
  }
}
