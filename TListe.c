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
	if (!EstVide(l)){
		nouvelElement->valeur = val;
		nouvelElement->suivant = NULL;
		nouvelElement->precedent = nouvelElement;
		
		
	}
	else{
		nouvelElement->valeur = val;
		nouvelElement->suivant = NULL;
		nouvelElement->precedent = NULL;
	}
	return nouvelElement;
}


/* AfficheListe(TListe l) ->  : Affiche le contenu de la liste */
void AfficheListe(TListe l)
{
	if (!EstVide(l))
	{
		printf("%d ->",l->valeur);
		AfficheListe(l->suivant);
	}
}


/* AjoutFin: TListeEntier Ã— int â†’ TListeEntier â€“ â€“ retourne la liste obtenue en ajoutant lâ€™entier donneÌe en fin de
liste ; si la liste est vide, se comporte comme AjoutDeÌbut. */
/* TListe AjoutFin(TListe l, int val)
{
*************************
* A completer           *
*************************
}*/


/* Premier: TListeEntier â†’ int â€“ â€“ retourne le premier eÌleÌment de la liste ; renvoie une erreur si la liste est vide. */
/* int Premier(TListe l)
{
*************************
* A completer           *
*************************
}*/


/*Dernier: TListeEntier â†’ int â€“ â€“ retourne le dernier eÌleÌment de la liste ; renvoie une erreur si la liste est vide.*/
/* int Dernier(TListe l)
{
*************************
* A completer           *
*************************
}*/


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
