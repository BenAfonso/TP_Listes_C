#ifndef BATEAU_H
#define BATEAU_H
#include <stdlib.h>
#include <stdio.h>

#define Bool int
#define False 0
#define True !False

/************************/
/* Structure de données */
/* Amusez vous :)       */
/************************/


typedef struct Bateau Bateau ;



/*******************************/
/* Spécification Fonctionnelle */
/*******************************/


/* Renvoie la taille d'un bateau */
int get_taille(Bateau);

/* Renvoie True si le bateau est placé, False sinon */
Bool get_estPlace(Bateau);

/* Renvoie le nombre de cases intactes du bateau */
int get_nbCasesIntactes(Bateau);

/* set la taille d'un bateau */
Bateau set_taille(Bateau,int);

/* set_estPlace(Bateau) => get_estPlace(Bateau)*/
Bateau set_estPlace(Bateau,Bool);

/* Enleve une case intacte à un bateau.*/
/* caseTouche(Bateau) => get_nbCasesIntactes(Bateau) - 1 */
/* caseTouche(Bateau) <=> Non(estCoule(Bateau)) Sinon ERREUR*/
Bateau caseTouche(Bateau);

/* Renvoie True si le bateau est coulé <=> get_nbCasesIntactes(Bateau) == 0 */
Bool estCoule(Bateau);


#endif
