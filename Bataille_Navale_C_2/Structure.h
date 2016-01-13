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
    int estPlace;
};


typedef struct Flotte Flotte;
struct Flotte
{
    int nbreBateaux;
    Bateau* tableauBateaux;

};


typedef struct Joueur Joueur ;
struct Joueur
{
    Flotte flotte;
};






typedef struct Partie Partie;
struct Partie
{
  Joueur joueur1;
  Joueur joueur2;
  Joueur joueurActif;
  Joueur joueurInactif;
};




#endif
