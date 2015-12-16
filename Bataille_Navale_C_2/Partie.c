#include "Partie.h"
#include "Joueur.h"
 /* creer une partie vide, incluant création de 2 JoueurNs, d'une flotte pour chaque JoueurN */
PartieNN creerPartie()
{
    /* Création de deux JoueurNs */
    JoueurN Joueur1;
    JoueurN Joueur2;
    /* Création d'une flotte pour les JoueurNs */


    /* Creation d'une partie */
    PartieN partie;
    partie->Joueur1 = Joueur1;
    partie->Joueur2 = Joueur2;
    return partie;
}

PartieN commencerPartie(PartieN partie)
{
    partie->joueurActif = partie->Joueur1;
    partie->joueurInactif = partie->Joueur2;
    return partie;
}

JoueurN Joueur1(PartieN partie)
{
    return partie->Joueur1;
}

JoueurN Joueur2(PartieN partie)
{
    return partie->Joueur2;
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
    /* A FAIRE */
}

int estFinie(PartieN partie)
{
  /* A FAIRE */
}
