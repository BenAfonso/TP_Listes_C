#include "Bateau.h"
#include "Position.h"



BateauN creerBateau(int taille)
{
    BateauN bateau;
    bateau->taille = taille;
    bateau->tableauMorceaux = malloc(bateau->taille*size_of(Position));
    return bateau;

}

Position* tableauMorceaux(BateauN bateau)
{
    return bateau->listeMorceaux;
}


BateauN suppMorceau(BateauN bateau, Position p)
{
  int i = 0;
  while (i < bateau->taille && bateau->tableauMorceaux[i] != NULL)
  {
    i++;
  }
  if (i != bateau->taille)
  {
    while i < bateau->taille
    {
      bateau->tableauMorceaux[i] = bateau -> tableauMorceaux[i+1]
    }
  }
  return bateau;
}

BateauN ajoutMorceau(BateauN bateau, Position p)
{
    int i = 0;
    while (i < bateau->taille && bateau->tableauMorceaux[i] != NULL)
    {
      i++;
    }
    if (i != bateau->taille)
    {
      bateau->tableauMorceaux[i+1] = p;
    }
    return bateau;
}

int taille(BateauN bateau)
{
  /* A REVOIR  */
  return sizeof(bateau->tableauMorceaux);
}
