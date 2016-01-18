#ifndef BATEAU_H
#define BATEAU_H

#include <stdlib.h>
#include <stdio.h>
#include "Structure.h"



/* Spécification fonctionnelle d'un autre groupe */

Bateau creerBateau(int taille);        /* crée un bateau à partie d'une taille entrée en paramètre */
Position* tableauMorceaux(Bateau b); /* retourne la liste des positions dont le bateau est composé */
Bateau suppMorceau(Bateau b,Position p);   /* supprime une position dans la listeMorceaux si le bateau est touché */
Bateau ajoutMorceau(Bateau b,Position p);  /* ajoute une position dans la listeMorceaux lors du placement des bateaux */

/* Fonctions privées */
Bateau set_EstPlace(Bateau b);
int get_EstPlace(Bateau b);

/* AJOUTS */
int estDetruit(Bateau b);
int taille(Bateau b);
Bateau redimensionner(Bateau b, int taille);



/* Aides */
void afficherMorceaux(Bateau b);

#endif
