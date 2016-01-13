#ifndef PARTIE_H
#define PARTIE_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"


PartieN creerPartie();               /* creer uneartie vide, incluant création de 2 joueurs, d'une flotteour chaque joueur */
Joueur joueur1(PartieN p);             /* retourne le joueur 1 de laartie */
Joueur joueur2(PartieN p);             /* retourne le joueur 2 de laartie */
PartieN commencerPartie(PartieN p);     /* rend le joueur 1 actif et le joueur 2 inactif */
Joueur joueurActif(PartieN p);         /* retourne le joueur actif de laartie */
Joueur joueurInactif(PartieN p);       /* retourne le joueur inactif de laartie */
PartieN changerJoueurActif(PartieN p);  /* changer l'état de chaque joueur (actif -> inactif) et (inactif -> actif) */
PartieN tirer(PartieN p );               /* demande de rentrer uneosition au joueur actif, vérifie si cetteosition touche, coule, voit ou rate un bateau de la flotte du
                                        joueur inactif et modifie ce dernier si nécessaire, donc laartie est modifiée */
int estFinie(PartieN p);               /* retourne 1 si un des joueur a une flotte vide, 0 sinon */

#endif
