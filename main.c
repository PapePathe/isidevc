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

