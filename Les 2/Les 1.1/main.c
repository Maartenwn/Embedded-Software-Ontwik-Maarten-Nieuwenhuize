#include "stdafx.h"
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

#define _CRT_SECURE_NO_WARNINGS

/******************************************************************/
// From Kernighan & Ritchie pp 26 
//    
// readline(): reads a line of characters in to a character array
// returns number of characters read. 
/******************************************************************/

int main()
{
	char c = 'a';
	int getal = 3;
	char regel[23];
	char regel2[] = "xyz";
	char *p;
	p = regel;
	// Toestand 1
	printf("Geef een getal: ");
	scanf("%i", &getal);
	scanf("%*[^\n]");
	// gooit rest characters inclusief new line uit  
	scanf("%*c");
	// input buffer anders gaat de volgende scanf fout  
	// Toestand 2
	printf("Geef een karakter: ");
	scanf("%c", &c);
	scanf("%*[^\n]");// gooit rest characters inclusief new line uit   
	scanf("%*c");
	// input buffer anders gaat de volgende scanf fout 
	// Toestand 3
	printf("Geef een string: ");
	scanf("%s", regel);
	//Deze werkt soms niet!! 
	//getline(regel, 128); //Dan is dit een goed alternatief om een string 
	//te lezen   
	//gets(regel);         
	//of anders dit ook 
	// Toestand 4
	printf("getal = %i\n", getal);
	printf("c = %c\n", c);
	printf("regel = %s\n", regel);
	// Toestand 5
	getchar();	
}