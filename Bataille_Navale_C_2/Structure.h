#ifndef STRUCTURE_H
#define STRUCTURE_H
#define NOMBREBATEAUX = 5
#include <stdlib.h>
#include <stdio.h>


/* Structure de données */




typedef struct Position Position ;
struct Position
{
    int X;
    int Y;
};

typedef struct Bateau Bateau;
struct Bateau
{
    int taille;
    Position* tableauMorceaux;

};
typedef Bateau* BateauN;

typedef struct Flotte Flotte;
struct Flotte
{
    int nbreBateaux;
    /* Ensemble de bateaux */
    BateauN tableauBateaux;

};

typedef Flotte* FlotteN;

typedef struct Joueur Joueur ;
struct Joueur
{
    FlotteN flotte;
};

typedef Joueur* JoueurN;





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
