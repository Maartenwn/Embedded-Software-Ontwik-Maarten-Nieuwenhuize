#include  <stdio.h>
#include  <string.h>
struct vriend
{
	char naam[30];
	int leeftijd;
};
/*
Vult het "vrienden"-array met minimaal 2 vrienden (meer mag)
- De vrienden staan "hard coded" in de code.
- Het aantal vrienden dat zit moet meegegeven worden als invoer-en uitvoerparameter
*/
void vulVrienden(struct vriend *vrienden, int *amount)
{
	vrienden[*amount] = (struct vriend) {"Piet", 20 };
	vrienden[*amount + 1] = (struct vriend) {"Klaas", 19};
	*amount = *amount + 2;
}
/*
Vult het "vrienden"-array aan met 1 extra vriend.
- Invoer komt van de commandoregel.
- Het aantal vrienden dat al in het array zit moet meegegeven worden
als invoer-en uitvoerparameter
- Gebruik voor het inlezen van de naam de functie gets.
- Gebruik voor het inlezen van de leeftijd de functie scanf.*/
void vulVriendenAanMet1Vriend(struct vriend vrienden[], int *amount)
{
	char name[30];
	int age= 0;
	printf("Naam:");
	scanf("%s", &name);
	printf("Leeftijd:");
	scanf("%i", &age);
	struct vriend test;
	test.leeftijd = age;
	strcpy(test.naam, name);
	vrienden[*amount] = test;
	*amount = *amount + 1;
}
/*
Drukt alle vrienden af in vorm:
<naam>, <leeftijd>
telkens op een nieuwe regel.
*/
void drukAlleVriendenAf(struct vriend *vrienden, int amount)
{
	for (size_t i = 0; i < amount; i++)
	{
		printf("<%s>, <%i>\n", vrienden[i].naam, vrienden[i].leeftijd);
	}
}
void main()
{
	struct vriend vrienden[10];
	int aantalVrienden = 0;
	vulVrienden(vrienden, &aantalVrienden);
	vulVriendenAanMet1Vriend(vrienden,&aantalVrienden);
	drukAlleVriendenAf(vrienden, aantalVrienden);
}