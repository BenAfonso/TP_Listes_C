#ifndef PARTIE_H
#define PARTIE_H

#include <stdlib.h>
#include <stdio.h>
#include "Joueur.h"

typedef struct Partie Partie;
struct Partie
{
  JoueurN joueur1;
  JoueurN joueur2;
  JoueurN joueurActif;
  JoueurN joueurInactif;
};
typedef Partie* PartieN;

PartieN creerPartie();               /* creer uneartie vide, incluant création de 2 joueurs, d'une flotteour chaque joueur */
JoueurN joueur1(PartieN p);             /* retourne le joueur 1 de laartie */
JoueurN joueur2(PartieN p);             /* retourne le joueur 2 de laartie */
PartieN commencerPartie(PartieN p);     /* rend le joueur 1 actif et le joueur 2 inactif */
JoueurN joueurActif(PartieN p);         /* retourne le joueur actif de laartie */
JoueurN joueurInactif(PartieN p);       /* retourne le joueur inactif de laartie */
PartieN changerJoueurActif(PartieN p);  /* changer l'état de chaque joueur (actif -> inactif) et (inactif -> actif) */
PartieN tirer(PartieN p );               /* demande de rentrer uneosition au joueur actif, vérifie si cetteosition touche, coule, voit ou rate un bateau de la flotte du
                                        joueur inactif et modifie ce dernier si nécessaire, donc laartie est modifiée */
int estFinie(PartieN p);               /* retourne 1 si un des joueur a une flotte vide, 0 sinon */

#endif
