/**

 * QUESTIONS

 * créer des enregistrements dans chaque structure

 * afficher le nom et le prénom des pilotes qui ont utilisé des avions dont le nombre de
   places dépasse 100 appartenant à la compagnie AIR SENEGAL durant l'année 2012

 * afficher le nom des avions de AIR FRANCE qui on été utilisés plus d'une fois par le pilote 201 au mois
   de janvier 2013.

 */


#include <stdio.h>
#include <stdlib.h>


//#include "generator.h"


int main() // programme principal ------------------------------------------------------------------------
{

    srand(time(NULL));

    char *dst;
    int i;
    for (i=0; i<90; i++)
    {
        fkr_nom_famille(dst);//        fkr_nom_famille(dst); fkr_nom_famille

        printf("%-15s ", dst);

        fkr_prenom_homme(dst);

        printf("%15s | ", dst);

        fkr_prenom_femme(dst);

        printf("%-15s\n", dst);
    }


} // fin programme principal ------------------------------------------------------------------------------

