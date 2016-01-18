#include "Bateau.h"
#include "Position.h"



Bateau creerBateau(int taille)
{
    Bateau bateau;
    bateau.taille = taille;
    bateau.tableauMorceaux = (Position*)malloc(taille*sizeof(Position));
    /* Initialisation de tous les morçeaux de bateaux */
    int i = 0;
    while (i < taille) {
        bateau.tableauMorceaux[i]=creerPosition();
        i++;
    }

    bateau.estPlace = 0;
    return bateau;

}

Bateau set_EstPlace(Bateau bateau)
{
    bateau.estPlace = 1;
    return bateau;
}

int get_EstPlace(Bateau bateau)
{
    return bateau.estPlace;
}

/* Renvoie la taille du bateau passé en paramètre */
int taille(Bateau bateau)
{
  return bateau.taille;
}

Bateau redimensionner(Bateau bateau, int taille)
{
  bateau.taille = taille;
  return bateau;
}

Position* tableauMorceaux(Bateau bateau)
{
    return bateau.tableauMorceaux;
}

/* Précondition: p appartient à bateau */
Bateau suppMorceau(Bateau bateau, Position p)
{
    int i=0;
    int sortDeBoucle=0;
    while(i<taille(bateau) && sortDeBoucle==0)
    {
      if(tableauMorceaux(bateau)[i].X==p.X && tableauMorceaux(bateau)[i].Y==p.Y)
      {

        /* On desactive la position */
        tableauMorceaux(bateau)[i]=DesactiverPos(tableauMorceaux(bateau)[i]);
        bateau=redimensionner(bateau,taille(bateau)-1);
        sortDeBoucle=1;
      }
      i++;
    }

    return bateau;
}

int estDetruit(Bateau bateau)
{
  int cpt=0;
  for(int i=0;i<taille(bateau);i++)
  {
    if (estActivePos(tableauMorceaux(bateau)[i]))
    {
      cpt++;
    }
  }
  return (cpt == 0);
}

Bateau ajoutMorceau(Bateau bateau, Position p)
{
    int i = 0;
    while (i < taille(bateau) && estActivePos(tableauMorceaux(bateau)[i]))
    {
      i++;
    }
    /* Soit aucune position non active ou la position i n'est pas active. */
    if (i == taille(bateau))
    {
      printf("\nTous les morçeaux sont déjà placés");
    }
    /* Si la position i n'est pas active */
    else
    {
      printf("\nAjout d'un morçeau.");
      p=ActiverPos(p);
      tableauMorceaux(bateau)[i] = p;
      printf("\n%d %d ETAT %d\n",tableauMorceaux(bateau)[i].X,tableauMorceaux(bateau)[i].Y, estActivePos(tableauMorceaux(bateau)[i]));
      afficherMorceaux(bateau);
    }
    return bateau;

}

void afficherMorceaux(Bateau bateau)
{
  int i=0;
  /* On parcourt chaque morçeau un à un */
  while (i<taille(bateau))
  {
    if (estActivePos(tableauMorceaux(bateau)[i]))
    {
        printf("(%d,%d)\n",tableauMorceaux(bateau)[i].X,tableauMorceaux(bateau)[i].Y);
    }

    i++;
  }
}
