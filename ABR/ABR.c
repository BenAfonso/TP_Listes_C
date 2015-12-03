#include <stdlib.h>
#include <stdio.h>
#include "ABR.h"

  ABR creer_ABR()
  {
    return NULL;
  }

  int Vide_ABR(ABR A)
  {
    return A == NULL;
  }

  int Est_Feuille_ABR(ABR A)
  {
    if (Vide_ABR(A))
    {
      printf("ERREUR !");
    }
    else
    {
      return Vide_ABR(A.SAG) && Vide_ABR(A.SAD);
    }
  }

  int Est_Racine_ABR(ABR A)
  {
    if (Vide_ABR(A))
    {
      printf("ERREUR !");
    }
    else
    {
      return Vide_ABR(Pere_ABR(A))
    }
  }

  ABR Pere_ABR(ABR A)
  {
    if (Vide_ABR(A))
    {
      printf("Erreur: Arbre Vide.");
      return;
    }
    else if (Est_Racine_ABR(A)){
      return creer_ABR;
    }
    else
    {
      return ABR.Pere;
    }
  }

  ABR Frere_ABR(ABR A)
  {
    if (Vide_ABR(A))
    {
      printf("Erreur: Arbre vide.\n");
      return;
    }
    else if (Est_Racine_ABR(A))
    {
      return creer_ABR():
    }
    else
    {
      if (Pere_ABR(A).SAD == A)
      {
        return Pere_ABR(A).SAG;
      }
      else (Pere_ABR(A).SAG == A)
      {
        return Pere_ABR(A).SAD;
      }
    }
  }

  ABR GrandPere_ABR(ABR A)
  {
    if (Vide_ABR(A))
    {
      printf("Erreur: Liste Vide.\n");
      return;
    }
    // TO BE CONTINUED
  }

}
