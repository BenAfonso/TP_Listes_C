#ifndef PARTIE_H
#define PARTIE_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"

Partie creerPartie();               /* creer une partie vide, incluant création de 2 joueurs, d'une flotte pour chaque joueur */
Joueur joueur1(Partie);             /* retourne le joueur 1 de la partie */
Joueur joueur2(Partie);             /* retourne le joueur 2 de la partie */
Partie commencerPartie(Partie);     /* rend le joueur 1 actif et le joueur 2 inactif */
Joueur joueurActif(Partie);         /* retourne le joueur actif de la partie */
Joueur joueurInactif(Partie);       /* retourne le joueur inactif de la partie */
Partie changerJoueurActif(Partie);  /* changer l'état de chaque joueur (actif -> inactif) et (inactif -> actif) */
Partie tirer(Partie);               /* demande de rentrer une position au joueur actif, vérifie si cette position touche, coule, voit ou rate un bateau de la flotte du
                                        joueur inactif et modifie ce dernier si nécessaire, donc la partie est modifiée */
int estFinie(Partie);               /* retourne 1 si un des joueur a une flotte vide, 0 sinon */

#endif