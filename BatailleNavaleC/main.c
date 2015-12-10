#include <stdio.h>
#include "Bateau.h"
#include "EnsBateaux.h"
#include "Joueur.h"
#include "Grille.h"
#include "Partie.h"
#include "Resultat.h"
#include "Position.h"





void placerBateaux(){


}

int main() {

<<<<<<< HEAD
  // On créé la partie

  Partie* partie;

  // On place les bateaux du J1
	printf("===> Placer vos bateaux <====\n");
  placerBateaux();

  // On change de joueur
  joueurSuivant();

  // On place les bateaux du J2
  placerBateaux();


  /* On commence la scéance de tir
  uniquement quand tout les bateaux sont placés
  ET tant que Partie.get_JoueurActif().a_perdu() ne renvoie pas Vrai
            ( à faire ) */
  while () {
    print Partie.get_JoueurActif().get_NomJoueur()+" >> TIR : \n"
    int X, Y;
    printf("X : \n");
    scanf("%d", X));
    printf("Y :\n");
    scanf("%d", Y));
    PosTir = Position(X,Y);
    Resultat(PosTir,Partie.get_nextJoueur().get_Grille())
    printf("Joueur suivant\n");
    joueurSuivant();
  }


=======
  // Creer Partie
  // 
>>>>>>> 3ad65940cbea5da412f313e0066d88f3ecceddd7



  return 0 ;
}
