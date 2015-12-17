tirer dans Partie.h qui demande une saisie. Interface dans type abstrait

/* Cette fonction devrait retourner un ensemble de Position et non une Position */
Position listeMorceaux(Bateau b); /* retourne la liste des positions dont le bateau est composé */

/* Interface dans type abstrait */
PositionN choixPosition();/* demande de rentrer 2 entiers et en fait une position */

/* A quel flotte l'ajoute-t-on ? */
FlotteN ajoutBateau(BateauN b);     /* ajoute un bateau dans la listeBateaux lors du placement des bateaux */

/* De quel flotte Supprime-t-on bateau ? */
FlotteN suppBateau(BateauN b);      /* supprime un bateau dans la listeBateaux si ce même bateau est coulé */

/* Retourne une liste ou un bateau ? */
BateauN listeBateaux(FlotteN f);    /* retourne la liste de bateaux dont est composée la flotte, retourne vide si elle est vide */

/* Comment savoir quel bateau a été touché sans refaire les tests ?
Obligé de re-parse tout le tableau */
int estCoulee(Position p, FlotteN f);
/* retourne 1 si la position paramètre correspond au dernier morceau du bateau au préalablement touché,0 sinon, NECESSITE estTouchee(Position, Flotte)==1 */

/* Pourquoi cette fonction ? */
int estRatee(Position p, FlotteN f)
{
 return (estTouchee(p,f) || estVue(p,f));
}     /* retourne 1 si la position paramètre ne touche pas et ne voit pas un bateau compris dans la flotte, 0 sinon */


/* Wtf ? */
int estValide(Position p);         /* retourne 1 si les coordonnées de la position sont comprises entre 1 et 20, et si estDans(Position, Flotte) == 0,  0 sinon */
int estDans(Position p, FlotteN f);    /* retourne 1 si la position paramètre est déjà correspondant à une position de bateau dans la flotte */

/* Pourquoi avoir besoin de estDans ? Même chose que estTouche(p,f)*/
int estDans(Position p, FlotteN f)
{
    return estTouche(p,f);
}      /* retourne 1 si la position paramètre est déjà correspondant à une position de bateau dans la flotte */


estValide(p) <=> estDans(p,Flotte) /*<= QUELLE FLOTTE?*/

/* Préconditions ? estDans(p,f)*/
BateauN suppMorceau(Position p);   /* supprime une position dans la listeMorceaux si le bateau est touché */
BateauN ajoutMorceau(Position p);  /* ajoute une position dans la listeMorceaux lors du placement des bateaux */
