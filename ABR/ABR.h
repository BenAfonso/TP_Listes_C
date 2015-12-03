#include <stdlib.h>
#include <stdio.h>

// Structure de données ABR
typedef struct ABRNV ABRNV ;
struct ABRNV
{
    int racine;
    struct ABRNV *SAG;
    struct ABRNV *SAD;
    struct ABRNV *Pere;
};

typedef ABRNV* ABR;

// Définition des fonctions
ABR creer_ABR();
int Vide_ABR(ABR A);
int Est_Feuille_ABR(ABR A);
int Est_Racine_ABR(ABR A);
ABR Pere_ABR(ABR A);
ABR Frere_ABR(ABR A);
ABR GrandPere_ABR(ABR A);
