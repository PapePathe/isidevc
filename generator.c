#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "generator.h"


/**
 * Une fonction qui génére un nom de famille sénégalais
 *
 */
void fkr_nom_famille (char *destination)
{

	int index; // on déclarse un entier contenant l'indice généré aléatoirement

	index = rand() % (sizeof(noms)/TAILLE_MAX_NOM); // genere l'index

	strcpy(destination, noms[index]);  // on copie le nom de famille à la destination

}


/**
 * A function that generates senegalese male's firstname
 *
 */
void fkr_prenom_homme (char *destination)
{

	int index; // on déclare un entier contenant l'indice généré aléatoirement

	index = rand() % (sizeof(noms_hommes)/TAILLE_MAX_NOM); // genere l'index

	strcpy(destination, noms_hommes[index]);  // on copie le prénom à la destination
}

/**
 * A function that generates senegalese female's firstname
 *
 */
void fkr_prenom_femme (char *destination)
{

	int index; // on déclare un entier contenant l'indice généré aléatoirement

	index = rand() % (sizeof(noms_hommes)/TAILLE_MAX_NOM); // genere l'index

	strcpy(destination, noms_femmes[index]);  // on copie le prénom à la destination
}

