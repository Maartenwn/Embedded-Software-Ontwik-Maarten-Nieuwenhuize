#include "stdafx.h"

int * getKlinkerCount(char[]);

int main() {
	
	int* charamount = getKlinkerCount("Het paard is groot");
	//toestand 3
	printf("Uitvoer: a = %d, e = %d, i = %d, o = %d, u = %d", charamount[0], charamount[1], charamount[2], charamount[3], charamount[4]);

	return 0;
}



int * getKlinkerCount(char * word)
{
	int charamount[] = { 0,0,0,0,0 };

	int index = 0;
	//toestand 1
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
	return charamount;
}
