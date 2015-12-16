#ifndef PARTIE_H
#define PARTIE_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"

typedef struct Partie Partie;
struct Partie
{
  Joueur joueur1;
  Joueur joueur2;
  Joueur joueurActif;
  Joueur joueurInactif;
}
Partie creerPartie();               /* creer une partie vide, incluant création de 2 joueurs, d'une flotte pour chaque joueur */
Joueur joueur1(Partie p);             /* retourne le joueur 1 de la partie */
Joueur joueur2(Partie p);             /* retourne le joueur 2 de la partie */
Partie commencerPartie(Partie p);     /* rend le joueur 1 actif et le joueur 2 inactif */
Joueur joueurActif(Partie p);         /* retourne le joueur actif de la partie */
Joueur joueurInactif(Partie p);       /* retourne le joueur inactif de la partie */
Partie changerJoueurActif(Partie p);  /* changer l'état de chaque joueur (actif -> inactif) et (inactif -> actif) */
Partie tirer(Partie p);               /* demande de rentrer une position au joueur actif, vérifie si cette position touche, coule, voit ou rate un bateau de la flotte du
                                        joueur inactif et modifie ce dernier si nécessaire, donc la partie est modifiée */
int estFinie(Partie p);               /* retourne 1 si un des joueur a une flotte vide, 0 sinon */

#endif
