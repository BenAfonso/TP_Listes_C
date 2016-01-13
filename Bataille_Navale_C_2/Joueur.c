# include <stdio.h>

#include "Flotte.h"
#include "Joueur.h"

Joueur creerJoueur()
{
    Joueur joueur;

    joueur.flotte = creerFlotte();

    return joueur;
}

FlotteN flotte(Joueur J)
{
    return J.flotte;
}

Joueur placerBateau(Joueur J)
{
    return J;
    /* A faire plus tard */
}
