#include "stdafx.h"


void getKlinkerCount(char[], char *a, char *e, char *i, char *o, char *u);

int main() {
	int amountA = 0, amountE = 0, amountI = 0, amountO = 0, amountU = 0;
	int *amountAptr = &amountA;
	int *amountEptr = &amountE;
	int *amountIptr = &amountI;
	int *amountOptr = &amountO;
	int *amountUptr = &amountU;

	getKlinkerCount("Het paard is groot", amountAptr, amountEptr, amountIptr, amountOptr, amountUptr);
	printf("Uitvoer: a = %d, e = %d, i = %d, o = %d, u = %d",amountA,amountE,amountI,amountO,amountU);
	
	return 0;
}



void getKlinkerCount(char * word,char *a,char *e, char *i, char *o, char *u)
{
	int amountA = 0, amountE = 0, amountI = 0, amountO = 0, amountU = 0;

	int index = 0;
	while (word[index] != '\0') {
		switch (word[index])
		{
		case 'a':
			amountA++;
			break;

		case 'e':
			amountE++;
			break;
		case 'i':
			amountI++;
			break;
		case 'o':
			amountO++;
			break;
		case 'u':
			amountU++;
			break;
		}
		index++;
	}

	*a = amountA;
	*e = amountE;
	*i = amountI;
	*o = amountO;
	*u = amountU;

}
