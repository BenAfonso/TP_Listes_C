#include "Bateau.h"
#include "Position.h"



Bateau creerBateau(int taille)
{
    Bateau bateau;
    bateau.taille = taille;
    bateau.tableauMorceaux = (Position*)malloc(bateau.taille*sizeof(Position));
    bateau.estPlace = 0;
    return bateau;

}

Position* tableauMorceaux(Bateau bateau)
{
    return bateau.tableauMorceaux;
}


Bateau suppMorceau(Bateau bateau, Position p)
{
  int i = 0;
  while ((i < bateau.taille))
  {
    i++;
  }
  if (i != bateau.taille)
  {
    while (i < bateau.taille)
    {
      bateau.tableauMorceaux[i] = bateau.tableauMorceaux[i+1];
    }
  }
  bateau.taille = bateau.taille-1;
  return bateau;
}

Bateau ajoutMorceau(Bateau bateau, Position p)
{
    int i = 0;
    while (i < bateau.taille)
    {
      i++;
    }
    if (i != bateau.taille)
    {
      bateau.tableauMorceaux[i+1] = p;
    }
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
int taille(Bateau bateau)
{
  /* A REVOIR  */
  return bateau.taille;
}
