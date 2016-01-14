# include <stdio.h>

#include "Flotte.h"
#include "Joueur.h"
#include "Position.h"
#include "Bateau.h"

Joueur creerJoueur(int numero)
{
    Joueur joueur;
    joueur.numero=numero;
    joueur.flotte = creerFlotte();

    return joueur;
}

Flotte flotte(Joueur J)
{
    return J.flotte;
}

int quelNumero(Joueur J)
{
    return J.numero;
}

/* pour 5 bateaux de taille respectives 1, 2, 2, 3, 4, demande au joueur de rentrer une position et une direction qui sera représentée par un entier (0 pour horizontal et 1 pour vertical), plaçant automatiquement les positions correspondantes dans la listeMorceaux de chaque bateau et ajoute le bateau dans la flotte du joueur */
Joueur placerBateau(Joueur J)
{
    int i = 0;
    int j = 0;
    while (i < 5)
    {
      Bateau BateauCourant = tableauBateaux(J.flotte)[i];

      j=0;
      /* Prompt de position */
      Position pos1 = choixPosition();
      /* Prompt de direction */
      int D;
      printf("\nEntrez une direction (0 horizontal - 1 vertical): ");
      scanf("%d",&D);
      if (!(D == 0 || D == 1))
      {
        printf("[ERREUR] Direction non valide !\n");
        /* Pour refaire la dernière saisie ? */
        i=i-1;
      }
      /* Générer toutes les positions et les tester (estValide(Position))*/
      while (j < taille(BateauCourant))
      {
         /* Sélection des morçeaux de bateaux un par un */
         /* Ajouts positions dans la liste des morçeaux */

         printf("\n[Placement] Bateau %d, Morceau %d\n",i,j);
         /* CAS D'ERREURS ? */
         ajoutMorceau(BateauCourant,pos1);
         printf("[Info] Le bateau %d, Morceau %d a bien été placé\n",i,j);

         if (D == 0){
           pos1.X = pos1.X+1;
         }
         else
         {
           pos1.Y = pos1.Y+1;
         }
         j=j+1;
      }


      /* Ajouts du bateau dans la flotte */
      i=i+1;
    }
    return J;
    /* A faire plus tard */
}
