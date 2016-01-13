#include "Bateau.h"
#include "Position.h"



Bateau creerBateau(int taille)
{
    Bateau bateau;
    bateau.taille = taille;
    bateau.tableauMorceaux = (Position*)malloc(bateau.taille*sizeof(Position));
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

int taille(Bateau bateau)
{
  /* A REVOIR  */
  return sizeof(bateau.tableauMorceaux);
}
