#include "stdafx.h"


void getKlinkerCount(char[], int[]);

int main() {
	int charamount[] = { 0,0,0,0,0 };
	int *characters = &charamount;
	//Toestand 1

	getKlinkerCount("Het paard is groot", characters);
	//Toestand 4
	printf("Uitvoer: a = %d, e = %d, i = %d, o = %d, u = %d", charamount[0], charamount[1], charamount[2], charamount[3], charamount[4]);

	return 0;
}



void getKlinkerCount(char * word, int *characters)
{
	int charamount[] = { 0,0,0,0,0 };

	int index = 0;
	while (word[index] != '\0') {
		switch (word[index])
		{
		case 'a':
			charamount[0]++;
			break;

		case 'e':
			charamount[1]++;
			break;
		case 'i':
			charamount[2]++;
			break;
		case 'o':
			charamount[3]++;
			break;
		case 'u':
			charamount[4]++;
			break;
		}
		index++;
	}
	//toestand 2
	for (index = 0; index < 5; index++) {
		characters[index] = charamount[index];
	}
	//toestand 3
}
