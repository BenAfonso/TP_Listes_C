#ifndef GRILLE_H
#define GRILLE_H
#include <stdlib.h>
#include <stdio.h>
#include "Position.h"
#include "Bateau.h"
#define Bool int
#define False 0
#define True !False

typedef struct Grille Grille;


// Définition des fonctions

/* Renvoie True si la Position est dans la grille */
Bool coordonneeValide(Grille G,Position P);
/* Marquer la position */
Grille marquerPosition(Grille G ,Position P);
// Pré: marquerPosition(Grille,Position) <=> (coordonneeValide(Grille,Position) ET Non(aUnBateau(Grille,Position))) Sinon Renvoyer une ERREUR
Bool aUnBateau(Grille G ,Position P);
// aUnBateau(Grille,Position) => coordonneeValide(Grille,Position)
Bool estIntacte(Grille G,Position P);
// estIntacte(Grille,Position) <=> aUnBateau(Grille,Position) Sinon renvoyer False

/* Renvoie le bateau à la position */
Bateau quelBateau(Grille G,Position P);
// Non(coordonneeValide(Grille,Position)) => ERREUR
Grille enleverPosition(Grille G,Position P);
// enleverPosition(Grille,Position) <=> aUnBateau(Grille,Position)
Bool bateauEnVue(Grille G,Position P);

/* placerBateau : Position x Grille x Bateau -> Grille */
/* Marque la position sur la grille */
Grille placerBateau(Position P,Grille G,Bateau B);
#endif
