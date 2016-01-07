# include <stdio.h>

#include "Flotte.h"
#include "Joueur.h"

JoueurN creerJoueur()
{
    JoueurN joueur = NULL;
    joueur->flotte = creerFlotte();
    return joueur;
}

FlotteN flotte(JoueurN J)
{
    return J->flotte;
}

JoueurN placerBateau(JoueurN J)
{
    return NULL;
    /* A faire plus tard */
}
