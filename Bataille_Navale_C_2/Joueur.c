# include <stdio.h>

#include "Flotte.h"
#include "Joueur.h"

JoueurN creerJoueur()
{
    JoueurN joueur;
    joueur->flotte = creerFlotte();
    return joueur;
}

FlotteN flotte(JoueurN J)
{
    return J->flotte;
}

JoueurN placerBateau(JoueurN J)
{
    /* A faire plus tard */
}
