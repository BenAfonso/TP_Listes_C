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
  printf("\n 5");
  int i = 0;
  int j = 0;
  int sortDeBoucle = 0;
  while (i < nbreBateaux(f) && sortDeBoucle == 0 )
  {
    Bateau b = tableauBateaux(f)[i];
    while (j < taille(b) && (!(tableauMorceaux(b)[i].X == p.X && tableauMorceaux(b)[i].Y == p.Y)))
    {
        j++;
    }
    if (j < taille(b))
    {
      printf("Bateau touché\n");
      sortDeBoucle = 1;
    }
    i++;

  }
  if (sortDeBoucle == 1)
  {
    return 1;
  }
  else{
    return 0;
  }

}   /* retourne 1 si la position paramètre correspond à la position d'un bateau dans la flotte en paramètre, 0 sinon */

int estCoulee(Position p, Flotte f)
{
  printf("\n0");

    printf("\n 1");
    int i = 0;
    int j = 0;
    int sortDeBoucle = 0;
    while (i < nbreBateaux(f) && sortDeBoucle == 0)
    {
      Bateau b = tableauBateaux(f)[i];
      while (j < taille(b) && (!(tableauMorceaux(b)[i].X == p.X && tableauMorceaux(b)[i].Y == p.Y)))
      {
          j++;
      }
      printf("\n 1.5");
      /* Soit aucun morceau touché : j == taille(b) soit morceau touché j = numero du morceau du bateau */
      if (j < taille(b))
      {

        /* Sortie de la boucle */
        sortDeBoucle = 1;
        /* Détruire le bateau */
      }
      i++;

    }
    printf("\n 2");
    if (sortDeBoucle == 1)
    {

      /* return (taille(b)==1); */
      return 1;
    }
    else{
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
    while (j < taille(b) && (!(tableauMorceaux(b)[i].X == p.X || tableauMorceaux(b)[i].Y == p.Y)))
    {
        j++;
    }
    if (j < taille(b))
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
 return (estTouchee(p,f) || estVue(p,f));
}     /* retourne 1 si la position paramètre ne touche pas et ne voit pas un bateau compris dans la flotte, 0 sinon */
int estValide(Position p)
{
  return (p.X >= 0 && p.X <= 20 && p.Y >= 0 && p.Y <= 20);
}            /* retourne 1 si les coordonnées de la position sont comprises entre 1 et 20, et si estDans(Position, Flotte) == 0,  0 sinon */

int estDans(Position p, Flotte f)
{
    return estTouchee(p,f);
}      /* retourne 1 si la position paramètre est déjà correspondant à une position de bateau dans la flotte */

int estActivePos(Position p)
{
    return p.Active;
}

Position ActiverPos(Position p)
{
    p.Active = 1;
    return p;
}
