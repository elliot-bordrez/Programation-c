// TP 1 exo 3 Tableau.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include<stdio.h>
int main()
{
	float t[10];
	int a, b, c, d, e, f, g, h, i, j, somme;

	printf("Entrer la premiere valeur  : ");
	scanf_s("%d", &a);

	printf("Entrer la deuxieme valeur  : ");
	scanf_s("%d", &b);

	printf("Entrer la troisieme valeur : ");
	scanf_s("%d", &c);

	printf("Entrer la quatrieme valeur : ");
	scanf_s("%d", &d);

	printf("Entrer la cinquieme valeur : ");
	scanf_s("%d", &e);

	printf("Entrer la sixieme valeur   : ");
	scanf_s("%d", &f);

	printf("Entrer la septieme valeur  : ");
	scanf_s("%d", &g);

	printf("Entrer la huitieme valeur  : ");
	scanf_s("%d", &h);
		
	printf("Entrer la neuvieme valeur  : ");
	scanf_s("%d", &i);

	printf("Entrer la dixieme valeur   : ");
	scanf_s("%d", &j);

	somme = a + b + c + d + e + f + g + h + i + j;

	printf("La somme de t est = %d\n", somme);

	return 0;
}