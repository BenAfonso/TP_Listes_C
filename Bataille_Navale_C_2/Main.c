#include <stdlib.h>
#include <stdio.h>
#include "Partie.h"
#include "Flotte.h"
#include "Joueur.h"
#include "Position.h"
#include "Bateau.h"

int main (void)
{

    printf("John Cena welcomes you to Bataillette Navale 2015. In the most mindblowing, balltwisting battleship match of the century, two players will face their destinies in the arena of death. \n");

    PartieN partie = creerPartie();          /* crée une partie appelée "partie" */

    JoueurN j1 = joueur1(partie);            /* initialise une variable j1 correspondant au joueur 1 de la partie */
    JoueurN j2 = joueur2(partie);            /* initialise une variable j2 correspondant au joueur 2 de la partie */

    partie = commencerPartie(partie);            /* modifie la partie en appelant commencerPartie(Partie) -> rend j1 actif et laisse j2 inactif */

    printf("Player 1 needs to place his ships \n");
    placerBateau(j1);                                   /* demande à j1 de placer ses bateaux */
    printf("Player 2 needs to place his ships \n");
    placerBateau(j2);                                   /* demande à j2 de placer ses bateaux */

    while((estFinie(partie))==0)            /* tant que la partie n'est pas terminé -> la flotte de j1 ou j2 n'est pas vide */
    {
        partie = tirer(partie);                 /* le joueur actif tire sur le joueur inactif et modifie la partie si nécessaire */
        partie = changerJoueurActif(partie);    /* modifie la partie en inversant l'état de chaque joueur */
    }

    /* une des flottes est vide */

    if (estVideFlotte(flotte(j1)) == 1) {               /* si la flotte de j1 est vide */
        printf("GAME OVER! Player 2 is the winner.");
    }
    else                                             /* si la flotte de j2 est vide */
    {
        printf("GAME OVER! Player 1 is the winner.");
    }

    return 0;

}
