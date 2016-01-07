#include "Partie.h"
#include "Joueur.h"
#include "Flotte.h"
 /* creer une partie vide, incluant création de 2 JoueurNs, d'une flotte pour chaque JoueurN */
PartieN creerPartie()
{
    /* Création de deux JoueurNs */
    JoueurN Joueur1 = NULL;
    JoueurN Joueur2 = NULL;
    /* Création d'une flotte pour les JoueurNs */
    FlotteN flotte1 = creerFlotte();
    FlotteN flotte2 = creerFlotte();

    Joueur1->flotte = flotte1;
    Joueur2->flotte = flotte2;

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

JoueurN joueur1(PartieN partie)
{
    return partie->joueur1;
}

JoueurN joueur2(PartieN partie)
{
    return partie->joueur2;
}

JoueurN joueurActif(PartieN partie)
{
    return partie->joueurActif;
}

JoueurN joueurInactif(PartieN partie)
{
    return partie->joueurInactif;
}

PartieN changerPartieActif(PartieN partie)
{
    JoueurN temp;
    /* On échange les JoueurNs actifs et inactifs */
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
