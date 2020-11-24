#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include"tab.h"

#define TAB2SIZE 100
#define TAILLEAJOUT 1

int initTab(int *tab, int size) {
	if (tab == NULL || size < 0) {
		return (-1);
	}
	for (int j = 0 ; j < size; j++) {
		tab[j] = 0;
	}
	return 0;
}

int afficheTab(int* tab, int size, int nbElts) {
	if (tab == NULL || size < 0 || size < nbElts) {
		return (-1);
	}
	for (int i = 0; i < nbElts; i++) {
			printf("%d ", tab[i]);
	}
	return 0;
}

	int* ajoutElementDansTableau(int* tab, int* size, int* nbElts, int element) {
		if (tab == NULL || size == NULL || nbElts == NULL || *size < 0 || *nbElts < 0) 
			return NULL;
		if (*nbElts + 1 > * size) { // On regarde si il y a dépassement
			int* tmp = tab; //On garde l'ancien au cas ou
			tab = (int*)realloc(tab, (*size + TAILLEAJOUT) * sizeof(int)); //Mémoire +
			if (tab == NULL) { //Vérif mémoire
				tab = tmp;
				return NULL;
			}
			*size += TAILLEAJOUT;
		}
		*(tab + *nbElts) = element;
		*nbElts += 1;
		return tab;
	}