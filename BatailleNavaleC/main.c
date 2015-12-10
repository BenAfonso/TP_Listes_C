#include <stdio.h>
#include "Bateau.h"
#include "EnsBateaux.h"
#include "Joueur.h"
#include "Grille.h"
#include "Partie.h"
#include "Resultat.h"
#include "Position.h"





int main() {


  // On créé la partie

/* Création de la partie et initialisation des joueurs *//*
  Partie partie;
  Joueur Joueur1;
  Joueur Joueur2;
  set_Joueur1(partie,Joueur1);
  set_Joueur2(partie,Joueur2);
*/

  /* On demande les noms des joueurs :: Definir le joueur actif*//*
  printf("Nom joueur 1:");
  scanf("Entrez le nom du Joueur 1: %s",&nomJ1);
  set_NomJoueur(Joueur1,nomJ1)
  printf("Nom joueur 2:");
  scanf("Entrez le nom du Joueur 2: %s",&nomJ2);
  set_NomJoueur(Joueur2 ,nomJ2)
*/




  // On place les bateaux d'UN SEUL JOUEUR !!!
  /*
  printf("Joueur actif: %s",get_NomJoueur(get_JoueurActif(partie)));
  printf("Placez vos bateaux !");
  int j = 0;
  while (get_NombreBateauxNonPlaces(get_Bateaux(get_JoueurActif(partie))) > 0)
  {
      j++;
      printf("Bateau n°%d",j);
      for (size_t i = 0; i < get_taille(get_Bateau(get_Bateaux(get_JoueurActif(partie)),j-1)); i++) {
        int x, y;
        printf("X : \n");
        scanf("%d", &x);
        printf("Y :\n");
        scanf("%d", &y);
        //Position Pos1;
      }

  }
*/

  /* On commence la scéance de tir
  uniquement quand tout les bateaux sont placés
  ET tant que Partie.get_JoueurActif().a_perdu() ne renvoie pas Vrai
            ( à faire ) *//*
  while (!(a_perdu(get_JoueurActif(partie)))) {

    //printf(get_NomJoueur(get_JoueurActif(partie)));
    printf(">> TIR : ");
    int x,y;
    printf("X : \n");
    scanf("%d", &x);
    printf("Y :\n");
    scanf("%d", &y);
    //Position PosTir;
    //PosTir->X = x;
    //PosTir->Y = y;


    //Resultat res;

    printf("Joueur suivant ->\n");
    joueurSuivant(partie);
  }
*/





  return 0 ;
}
