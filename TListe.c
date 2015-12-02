#include <stdlib.h>
#include <stdio.h>
#include "TListe.h"


/*CreÌerListe: â†’ TListeEntier â€“ â€“ retourne la liste vide : EstVide(CreÌerListe()) retourne true.*/
TListe CreerListe()
{
	return NULL;
}



/* EstVide: TListeEntier â†’ bool â€“ â€“ retourne true si la liste est vide, false sinon. */
int EstVide(TListe l)
{
	return (l == NULL);
}


/* AjoutDeÌbut: TListeEntier Ã— int â†’ TListeEntier */
TListe AjoutDebut(TListe l, int val)
{
	TListeEntier* nouvelElement = malloc(sizeof(TListeEntier));
	nouvelElement->valeur = val;
	nouvelElement->precedent = NULL;
	if (EstVide(l)){
		nouvelElement->suivant = NULL;
	}
	else{
		l->precedent = nouvelElement;
		nouvelElement->suivant = l;
	}
	return nouvelElement;
}


/* AfficheListe(TListe l) ->  : Affiche le contenu de la liste */
void AfficheListe(TListe l)
{
	if (!(EstVide(l)))
	{
		printf("%d",l->valeur);
		if (!(EstVide(l->suivant)))
		{
				printf(" -> ");
				AfficheListe(l->suivant);
		}
		else printf("\n");
	}
	else printf("La liste est vide\n");
	return;
}


/* AjoutFin: TListeEntier Ã— int â†’ TListeEntier â€“ â€“ retourne la liste obtenue en ajoutant lâ€™entier donneÌe en fin de
liste ; si la liste est vide, se comporte comme AjoutDeÌbut. */
TListe AjoutFin(TListe l, int val)
{
	  TListe tmp;
	  if ((EstVide(l)))
	  {
	    return AjoutDebut(l,val);
	  }
	  else
	  {
	    tmp = l;
	    while (!(EstVide(tmp->suivant)))
	    {
	      tmp = tmp->suivant;
	    }
	    TListe element = (TListeEntier *) malloc(sizeof(TListeEntier));
	    element->valeur = val;
	    element->precedent = tmp;
	    element->suivant = NULL;
	    tmp->suivant = element;
	    return l ;
	  }


}


/* Premier: TListeEntier â†’ int â€“ â€“ retourne le premier eÌleÌment de la liste ; renvoie une erreur si la liste est vide. */
int Premier(TListe l)
{
		if (EstVide(l))
		{
			printf("ERREUR: Liste vide.\n");
		}
		else return l->valeur;

}


/*Dernier: TListeEntier â†’ int â€“ â€“ retourne le dernier eÌleÌment de la liste ; renvoie une erreur si la liste est vide.*/
int Dernier(TListe l)
{
		TListe temp;
		temp = l;
		if (EstVide(l))
		{
			printf("ERREUR : Liste vide.\n");
		}

		else if (EstVide(temp->suivant))
		{
			return temp->valeur;
		}
		else
		{
			temp = temp->suivant;
			Dernier(temp);
		}
}


/* SupprimerTeÌ‚te: TListeEntier â†’ TListeEntier â€“ â€“ retourne la liste obtenue en ayant supprimeÌ le premier eÌleÌment
de la liste ; Erreur si la liste est vide. */
/* TListe SupprimerTete(TListe l)
{
*************************
* A completer           *
* penser a deallouer    *
* l'espace memoire      *
*************************
}*/



/**************************************************/
/* A vous de completer pour les fonctions         */
/* SupprimerFin                                   */
/* NbOccurence                                    */
/**************************************************/
