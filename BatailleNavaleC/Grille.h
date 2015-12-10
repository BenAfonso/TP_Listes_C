#ifndef GRILLE_H
#define GRILLE_H
#include <stdlib.h>
#include <stdio.h>
#include "Position.h"
#include "Bateau.h"
#define Bool int
#define False 0
#define True !False


/************************/
/* Structure de données */
/* Amusez vous :)       */
/************************/

typedef struct Grille Grille;


/*******************************/
/* Spécification Fonctionnelle */
/*******************************/

/* Renvoie True si la Position est dans la grille, False sinon */
Bool coordonneeValide(Grille G,Position P);

/* Marquer la position */
/* marquerPosition(Grille,Position) <=> (coordonneeValide(Grille,Position) ET Non(aUnBateau(Grille,Position))) Sinon Renvoyer une ERREUR */
Grille marquerPosition(Grille G ,Position P);

/* Renvoie True si un bateau se trouve à la position, False sinon */
/* aUnBateau(Grille,Position) => coordonneeValide(Grille,Position) */
Bool aUnBateau(Grille G ,Position P);

/* Renvoie True si la 'case' est intacte, False sinon */
/* estIntacte(Grille,Position) <=> aUnBateau(Grille,Position) Sinon renvoyer False*/
Bool estIntacte(Grille G,Position P);

/* Renvoie le bateau à la position */
/* Non(coordonneeValide(Grille,Position)) => ERREUR */
/* quelBateau(G,P) <=> aUnBateau(G,P) Renvoie une erreur sinon */
Bateau quelBateau(Grille G,Position P);

/* Enlever une position de la grille */
/* enleverPosition(Grille,Position) <=> aUnBateau(Grille,Position) */
Grille enleverPosition(Grille G,Position P);

/* Renvoie True si un bateau est sur la ligne et/ou colonne */
/* Non(coordonneeValide(Grille,Position)) => ERREUR */
Bool bateauEnVue(Grille G,Position P);

/* Placer un bateau dans la grille */
/* Marque la position sur la grille */
Grille placerBateau(Position P,Grille G,Bateau B);
#endif
