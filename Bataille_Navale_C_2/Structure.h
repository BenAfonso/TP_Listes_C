#ifndef STRUCTURE_H
#define STRUCTURE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Flotte Flotte;
struct Flotte
{
    int nbreBateaux;
    /* Ensemble de bateaux */

};

typedef Flotte* FlotteN;

typedef struct Joueur Joueur ;
struct Joueur
{
    FlotteN flotte;
};

typedef Joueur* JoueurN;

/* Structure de données */
typedef struct Bateau Bateau;
struct Bateau
{
    int taille;
    /*PositionN listeMorceaux[];*/

};
typedef Bateau* BateauN;



typedef struct Position Position ;
struct Position
{
    int X;
    int Y;
};

typedef Position* PositionN;

typedef struct Partie Partie;
struct Partie
{
  JoueurN joueur1;
  JoueurN joueur2;
  JoueurN joueurActif;
  JoueurN joueurInactif;
};
typedef Partie* PartieN;



#endif
