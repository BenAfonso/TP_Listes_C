#ifndef PARTIE_H
#define PARTIE_H
#include <stdlib.h>
#include <stdio.h>
#include "Joueur.h"

/* La partie crée 2 joueurs et initialise leurs bateaux */
typedef struct Partie Partie ;

// Définition des fonctions
/* Renvoie le premier joueur */
Joueur get_Joueur1(Partie);
/* Renvoie le second joueur */
Joueur get_Joueur2(Partie);
/* Renvoie le joueur actif (lors de l'appel) */
Joueur get_JoueurActif(Partie);
/* Renvoie le prochain joueur actif (lors de l'appel) */
Joueur get_nextJoueur(Partie);

/* Defini le premier joueur à jouer */
Joueur set_PremierJoueur(Partie,Joueur);

/* Change le joueur actif (et le joueur suivant) */
Joueur joueurSuivant(Partie);

#endif
