#include "Partie.h"
#include "Joueur.h"
#include "Flotte.h"
#include "Position.h"
 /* creer une partie vide, incluant création de 2 Joueurs, d'une flotte pour chaque Joueur */
Partie creerPartie()
{
    /* Création de deux Joueurs */
    Joueur Joueur1 = creerJoueur(1);
    Joueur Joueur2 = creerJoueur(2);

    /* Creation d'une partie */
    Partie partie;
    partie.joueur1 = Joueur1;
    partie.joueur2 = Joueur2;
    printf("La partie est créée !\n");
    return partie;
}

Partie commencerPartie(Partie partie)
{
    partie.joueurActif = partie.joueur1;
    partie.joueurInactif = partie.joueur2;
    return partie;
}

Joueur joueur1(Partie partie)
{
    return partie.joueur1;
}

Joueur joueur2(Partie partie)
{
    return partie.joueur2;
}

Joueur joueurActif(Partie partie)
{
    return partie.joueurActif;
}

Joueur joueurInactif(Partie partie)
{
    return partie.joueurInactif;
}

Partie changerJoueurActif(Partie partie)
{
    Joueur temp;
    /* On échange les Joueurs actifs et inactifs */
    temp = partie.joueurActif;
    partie.joueurActif = partie.joueurInactif;
    partie.joueurInactif = temp;
    return partie;
}

Partie tirer(Partie partie)
{

    printf("\n============== TIREEEEEZ ! ===============\n");
    Position PosTir=choixPosition();
    if (estValide(PosTir))
    {
        if (estVue(PosTir,flotte(joueurInactif(partie)))==1){
            if(estTouchee(PosTir,flotte(joueurInactif(partie)))==1){
                if(estCoulee(PosTir,flotte(joueurInactif(partie)))==1){
                     partie.joueurInactif.flotte=suppBateau(flotte(joueurInactif(partie)),quelBateau(PosTir,flotte(joueurInactif(partie))));
                     /* Prov */
                     printf("\nCoulé !");
                }
                else
                {
                  printf("\nTouché !");

                  /* On desactive le position de tir */
                  PosTir=DesactiverPos(PosTir);

                  /* Faire les modifications nécessaires sur le bateau touché */
                }
            }
            else
            {
                printf("\nEn vue !");
            }
        }
        else {
            printf("\nRaté !");
        }
    }
    else
    {
        printf("\nQuel fromage ! Position non valide.");
    }
    return partie;
}

int estFinie(Partie partie)
{
  return (estVideFlotte(flotte(joueur1(partie))) || estVideFlotte(flotte(joueur1(partie))));

}
