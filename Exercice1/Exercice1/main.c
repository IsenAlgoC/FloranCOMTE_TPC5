#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include "tab.h"

#define TAB2SIZE 100
#define TAILLEAJOUT 1

int main() {
	int myTab1[10];
	initTab(myTab1, 10);
	afficheTab(myTab1, 10, 3);

	int* myTab2 = NULL;
	myTab2 = (int*)malloc(TAB2SIZE * sizeof(int));
	if (myTab2 != NULL) { 
		initTab(myTab2, TAB2SIZE); 
	}
	else { 
		printf("Memoire insuffisante."); return (-1); 
	}

	for (int i = 0; i < 20; i++) {
		myTab2[i] = i + 1;
	}

	afficheTab(myTab2, TAB2SIZE, 20);
	free(myTab2);
}