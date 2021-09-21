// ConsoleApplication6.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<conio.h>

int main(int argc, char* argv[])
{
	int n1, n2, n3;
	printf("Rentrer la premiere valeur : ");
	scanf("%d", &n1);
	printf("Rentrer la deuxieme valeur : ");
	scanf("%d", &n2);
	printf("Rentrer la troisieme valeur : ");
	scanf("%d", &n3);

	if (n1 > n2 && n1 > n3)
	{
		printf("Le plus grand nombre est donc n1\n");

			if (n2 > n1)
			{
				printf("ordre croissant : %d %d %d",n3, n1, n2);
			}
	}
	else if (n2 > n1 && n2 > n3)
	{
		printf("Le plus grand nombre est donc n2\n");

			if (n1 > n2)
			{
				printf("ordre croissant : %d %d %d",n3, n2, n1);
			}
	}
	else if (n3 > n1 && n3 > n2)
	{
		printf("Le plus grand nombre est donc n3\n");

	}

	_getch();

	return 0;
    
}


