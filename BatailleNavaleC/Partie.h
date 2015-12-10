#ifndef PARTIE_H
#define PARTIE_H
#include <stdlib.h>
#include <stdio.h>
#include "Joueur.h"

/* La partie crée 2 joueurs et initialise leurs bateaux */

/************************/
/* Structure de données */
/* Amusez vous :)       */
/************************/


typedef struct Partie Partie ;

/*******************************/
/* Spécification Fonctionnelle */
/*******************************/

/* Renvoie le premier joueur */
Partie set_Joueur1(Partie,Joueur);
/* Renvoie le second joueur */
Partie set_Joueur2(Partie,Joueur);
/* Renvoie le premier joueur */
Joueur get_Joueur1(Partie);
/* Renvoie le second joueur */
Joueur get_Joueur2(Partie);
/* Renvoie le joueur actif (lors de l'appel) */
Joueur get_JoueurActif(Partie);
/* Renvoie le prochain joueur actif (lors de l'appel) */
Joueur get_nextJoueur(Partie);

/* Defini le premier joueur à jouer */
Partie set_PremierJoueur(Partie,Joueur);

/* Change le joueur actif (et le joueur suivant) */
Partie joueurSuivant(Partie);

#endif
