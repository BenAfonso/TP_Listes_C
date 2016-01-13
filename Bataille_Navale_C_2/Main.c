
#include <stdlib.h>
#include <stdio.h>
#include "Partie.h"
#include "Joueur.h"


int main (void)
{

    printf("John Cena welcomes you to Bataillette Navale 2015. In the most mindblowing, balltwisting battleship match of the century, two players will face their destinies in the arena of death. \n");
/* crée une partie appelée "partie" */

    Partie partie = creerPartie();

/* initialise une variable j1 correspondant au joueur 1 de la partie */
    printf("Test2\n");
    Joueur j1 = joueur1(partie);

/* initialise une variable j2 correspondant au joueur 2 de la partie */
    printf("Test3\n");
    Joueur j2 = joueur2(partie);

 /* modifie la partie en appelant commencerPartie(Partie) -> rend j1 actif et laisse j2 inactif */
    printf("Test4\n");
    partie = commencerPartie(partie);



/* demande à j1 de placer ses bateaux */
    printf("Player 1 needs to place his ships \n");
    placerBateau(j1);


/* demande à j2 de placer ses bateaux */
    printf("Player 2 needs to place his ships \n");
    placerBateau(j2);

/* tant que la partie n'est pas terminé -> la flotte de j1 ou j2 n'est pas vide */
/*
    while((estFinie(partie))==0)
    {

        partie = tirer(partie);
        partie = changerJoueurActif(partie);
    }
*/
    /* une des flottes est vide */

/* si la flotte de j1 est vide */
/*
    if (estVideFlotte(flotte(j1)) == 1) {
        printf("GAME OVER! Player 2 is the winner.");
    }
    else
    {
        printf("GAME OVER! Player 1 is the winner.");
    }
*/
    return 0;

}
