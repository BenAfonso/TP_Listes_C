#include <stdlib.h>
#include <stdio.h>

typedef struct TListeEntier TListeEntier ;
struct TListeEntier
{
    int valeur;
    struct TListeEntier *precedent;
    struct TListeEntier *suivant;
};

typedef TListeEntier* TListe;

TListe CreerListe();
int EstVide(TListe l);
TListe AjoutDebut(TListe l, int val) ;
void AfficheListe(TListe l);
TListe AjoutFin(TListe l, int val) ;
int Premier(TListe l);
int Dernier(TListe l);
TListe SupprimerTete(TListe l);

/**************************************************/
/* A vous de completer pour les fonctions         */
/* SupprimerFin                                   */
/* NbOccurence                                    */
/**************************************************/


 
