// Les 1.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

char giveLastChar(char word[]);


int main()
{
	char word[] = { 'h','i','i','\0' };
	printf("%c\n", giveLastChar(word));
	printf("%c\n", giveLastChar(""));
	return 0;
}

char giveLastChar(char * word) {
	int i = 0;
	char lastchar = '\0';
	while (word[i] != '\0')
	{
		lastchar = word[i];
		i++;
	}
	return lastchar;
}

