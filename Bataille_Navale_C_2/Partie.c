#include "Partie.h"

 /* creer une partie vide, incluant création de 2 joueurs, d'une flotte pour chaque joueur */
Partie creerPartie()
{
    /* Création de deux joueurs */
    Joueur joueur1;
    Joueur joueur2;
    /* Création d'une flotte pour les joueurs */


    /* Creation d'une partie */
    Partie partie;
    partie->joueur1 = joueur1;
    partie->joueur2 = joueur2;
    return partie;
}

Partie commencerPartie(Partie partie)
{
    partie->joueurActif = partie->joueur1;
    partie->joueurInactif = partie->joueur2;
    return partie;
}

Joueur joueur1(Partie partie)
{
    return partie->joueur1;
}

Joueur joueur2(Partie partie)
{
    return partie->joueur2;
}

Joueur joueurActif(Partie partie)
{
    return partie->joueurActif;
}

Joueur joueurInactif(Partie partie)
{
    return partie->joueurInactif;
}

Partie changerJoueurActif(Partie partie)
{
    Joueur temp;
    /* On échange les joueurs actifs et inactifs */
    temp = partie->joueurActif;
    partie->joueurActif = partie->joueurInactif;
    partie->joueurInactif = temp;
    return partie
}

Partie tirer(Partie partie)
{
    /* A FAIRE */
}

int estFinie(Partie partie)
{
  /* A FAIRE */
}
