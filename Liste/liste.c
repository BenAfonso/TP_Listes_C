#include <stdlib.h>
#include <stdio.h>
#include "TListe.h"


/*********************************************/
/* Progamme de test du module TListe         */
/* A vous de decommenter ligne par ligne     */
/* au fur et Ã  mesure de votre avancement   */
/* dans les fichiers TListe.h et TListe.c    */
/*********************************************/

int main (void)
{
printf("Lancement du programme des tests du module liste \n");
printf("\n");


TListe l = CreerListe() ;

if(EstVide(l))
	printf("La liste nouvellement crée est bien vide \n");
else
	printf("La liste n'est pas vide\n");

AfficheListe(l);

l=AjoutDebut(l, 3);
printf("Element 3 ajouté \n");
AfficheListe(l);

l=AjoutDebut(l, 5);
printf("Element 5 ajouté \n");
AfficheListe(l);


l=AjoutDebut(l, 1);
printf("Element 1 ajouté \n");
AfficheListe(l);


l=AjoutFin(l, 11);
printf("Element 11 ajouté en fin de liste \n");
AfficheListe(l);


l=AjoutFin(l, 14);
printf("Element 11 ajouté en fin de liste \n");
AfficheListe(l);


printf("Premier de la liste : %d\n",Premier(l));
printf("Dernier de la liste : %d\n",Dernier(l));

printf("Premier(Vide) va provoquer une erreur\n");
printf("Premier de la liste : %d\n",Premier(CreerListe()));




printf("Dernier(Vide) va provoquer une erreur\n");
printf("Dernier de la liste : %d\n",Dernier(CreerListe()));

l=SupprimerTete(l);
printf("Element de tete supprimé\n");
AfficheListe(l);

l=SupprimerFin(l);
printf("Element de fin supprimé\n");
AfficheListe(l);

int e=11;
printf("Nombre d'occurence de %d: %d\n",e,NbOccurence(e,l));






   return 0;
}
