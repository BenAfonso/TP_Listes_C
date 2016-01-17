#include <stdio.h>

#include "Flotte.h"
#include "Position.h"
#include "Bateau.h"

Position creerPosition()
{
  Position pos;
  pos.X = -1;
  pos.Y = -1;
  pos.Active = 0;
  return pos;
}
Position choixPosition()
{           /* demande de rentrer 2 entiers et en fait une position */
    int X,Y;
    printf("Entrez une valeur de X: ");
    scanf("%d",&X);
    printf("\nEntrez une valeur de Y: ");
    scanf("%d",&Y);
    Position pos;
    pos.X = X;
    pos.Y = Y;

    pos.Active=0;

    return pos;
}

int estTouchee(Position p, Flotte f)
{
  int i = 0;
  int j = 0;
  int sortDeBoucle = 0;
  while (i < nbreBateaux(f) && sortDeBoucle == 0 )
  {
    Bateau b = tableauBateaux(f)[i];
    j=0;
    while (j <= taille(b) && (!(tableauMorceaux(b)[j].X == p.X && tableauMorceaux(b)[j].Y == p.Y)))
    {
        printf("\nCoordonnées position: %d %d\n",tableauMorceaux(b)[j].X,tableauMorceaux(b)[j].Y);
        j++;
    }
    /* j == taille(b) ou les positions coïcident avec le morçeau j du ième bateau */
    if (j <= taille(b))
    {
      printf("\nBateau touché\n");
      sortDeBoucle = 1;
    }
    i++;

  }
  /* i == nbreBateaux ou sortDeBoucle = 1 */
  if (sortDeBoucle == 1 && estActivePos(tableauMorceaux(tableauBateaux(f)[i-1])[j]))
  {
    /* Modification nécessaires à la mort d'un bateau */
    Bateau BateauTouche = tableauBateaux(f)[i-1];
    /* Désactivation de la position */
    tableauMorceaux(tableauBateaux(f)[i-1])[j]=DesactiverPos(tableauMorceaux(tableauBateaux(f)[i-1])[j]);
    /* Décrémentation de la taille */
    tableauBateaux(f)[i-1]=redimensionner(BateauTouche,taille(BateauTouche)-1);
    return 1;
  }

  else
  {
    return 0;
  }

}   /* retourne 1 si la position paramètre correspond à la position d'un bateau dans la flotte en paramètre, 0 sinon */

int estCoulee(Position p, Flotte f)
{
    if (estTouchee(p,f))
    {
        Bateau bateau=quelBateau(p,f);
        if (taille(bateau) == 0)
        {
          /* Le bateau n'a plus que 1 case */
          return 1;
        }
        else
        {
          return 0;
        }
    }
    else
    {
        /* Le bateau n'est même pas touché ! */
        return 0;
    }

  /* retourne 1 si la position paramètre correspond à la position d'un bateau dans la flotte en paramètre, 0 sinon */

}
/* retourne 1 si la position paramètre correspond au dernier morceau du bateau au préalablement touché,0 sinon, NECESSITE estTouchee(Position, Flotte)==1 */
int estVue(Position p, Flotte f)
{

  int i= 0;
  int j=0;
  int sortDeBoucle = 0;
  while (i < nbreBateaux(f) && sortDeBoucle == 0)
  {
    Bateau b = tableauBateaux(f)[i];
    j=0;
    /* Pas certain pour le estActivePos() mais les tests ont l'air concluants (pour l'instant) */
    while (j <= taille(b) && ((!(tableauMorceaux(b)[j].X == p.X || tableauMorceaux(b)[j].Y == p.Y) && estActivePos(tableauMorceaux(b)[j]))))
    {
        j++;
    }
    if (tableauMorceaux(b)[j].X == p.X || tableauMorceaux(b)[j].Y == p.Y)
    {
      sortDeBoucle = 1;
    }
    i++;

  }
  if (sortDeBoucle == 1){
      return 1 ;
  }
  else {
      return 0;

  }
}   /* retourne 1 si la position paramètre correspond à la position d'un bateau dans la flotte en paramètre, 0 sinon */

     /* retourne 1 si une des coordonnées de la position paramètre correspond à un bateau de la flotte, 0 sinon*/
int estRatee(Position p, Flotte f)
{
 return !(estTouchee(p,f) || estVue(p,f));
}     /* retourne 1 si la position paramètre ne touche pas et ne voit pas un bateau compris dans la flotte, 0 sinon */
int estValide(Position p)
{
  return (p.X >= 0 && p.X <= 20 && p.Y >= 0 && p.Y <= 20);
}            /* retourne 1 si les coordonnées de la position sont comprises entre 1 et 20, et si estDans(Position, Flotte) == 0,  0 sinon */

int estDans(Position p, Flotte f)
{
    return estTouchee(p,f);
}      /* retourne 1 si la position paramètre est déjà correspondant à une position de bateau dans la flotte */

Bateau quelBateau(Position p,Flotte f)
{
  int i=0;
  int j=0;
  int sortDeBoucle=0;
  while (i<nbreBateaux(f) && sortDeBoucle==0)
  {
      j=0;
      while (j<=taille(tableauBateaux(f)[i]) && sortDeBoucle == 0)
      {
          if (tableauMorceaux(tableauBateaux(f)[i])[j].X == p.X && tableauMorceaux(tableauBateaux(f)[i])[j].Y == p.Y)
          {
              sortDeBoucle = 1;
          }
          j++;
      }
      i++;
  }
  if (sortDeBoucle == 1 && estActivePos(tableauMorceaux(tableauBateaux(f)[i-1])[j-1]))
  {
      printf("Un bateau a été trouvé !\n");
      afficherMorceaux(tableauBateaux(f)[i-1]);
      return tableauBateaux(f)[i-1];
  }
  else
  {
      printf("Aucun bateau\n");
      return creerBateau(0);
  }
}
int estActivePos(Position p)
{
    return p.Active;
}

Position ActiverPos(Position p)
{
    p.Active = 1;
    return p;
}

Position DesactiverPos(Position p)
{
    p.Active = 0;
    return p;
}
