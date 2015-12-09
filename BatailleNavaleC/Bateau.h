#ifndef BATEAU_H
#define BATEAU_H
#include <stdlib.h>
#include <stdio.h>

#define Bool int
#define False 0
#define True !False

typedef Bateau* Bateau;

// Définition des fonctions
// Creer bateau à faire

int get_taille(Bateau);

Bool get_estPlace(Bateau);
int get_nbCasesIntactes(Bateau);
Bateau set_taille(Bateau,int);
Bateau set_estPlace(Bateau,bool);

Bateau caseTouche(Bateau);
Bool estCoule(Bateau);
// estCoule(Bateau) <=> get_nbCasesIntactes(Bateau) == 0 et get_estPlace(Bateau)
// caseTouche(Bateau) <=> get_nbCasesIntactes(Bateau) > 0
#endif
