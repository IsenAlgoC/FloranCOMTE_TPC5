#pragma once
typedef struct Tableau {
	int* elt;
	int size;
	int eltsCount;
}TABLEAU;

TABLEAU newArray();
int incrementArraySize(TABLEAU* , int);
int setElement(TABLEAU* , int , int);
int displayElements(TABLEAU* , int , int);
int deleteElements(TABLEAU*, int, int);