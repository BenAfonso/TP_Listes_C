#include "Partie.h"
#include "Joueur.h"
#include "Flotte.h"
 /* creer une partie vide, incluant création de 2 Joueurs, d'une flotte pour chaque Joueur */
PartieN creerPartie()
{
    printf("1\n");
    /* Création de deux Joueurs */
    Joueur Joueur1 = creerJoueur();
    Joueur Joueur2 = creerJoueur();

    /* Creation d'une partie */
    PartieN partie = NULL;
    partie->joueur1 = Joueur1;
    partie->joueur2 = Joueur2;
    printf("La partie est créée !\n");
    return partie;
}

PartieN commencerPartie(PartieN partie)
{
    partie->joueurActif = partie->joueur1;
    partie->joueurInactif = partie->joueur2;
    return partie;
}

Joueur joueur1(PartieN partie)
{
    return partie->joueur1;
}

Joueur joueur2(PartieN partie)
{
    return partie->joueur2;
}

Joueur joueurActif(PartieN partie)
{
    return partie->joueurActif;
}

Joueur joueurInactif(PartieN partie)
{
    return partie->joueurInactif;
}

PartieN changerPartieActif(PartieN partie)
{
    Joueur temp;
    /* On échange les Joueurs actifs et inactifs */
    temp = partie->joueurActif;
    partie->joueurActif = partie->joueurInactif;
    partie->joueurInactif = temp;
    return partie;
}

PartieN tirer(PartieN partie)
{
    return NULL;
    /* A FAIRE */
}

int estFinie(PartieN partie)
{
  return 0;
  /* A FAIRE */
}
