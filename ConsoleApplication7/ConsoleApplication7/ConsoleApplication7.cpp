// ConsoleApplication7.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<conio.h>

int main()
{
	int poids = 0;
	printf("Entrer le poids : ");
	scanf("%d", &poids);

	if (poids < 20) {
		printf("Vous devez payez 3 frcs");
	};

	if (poids >=20 && poids < 50) {
		printf("Vous devez payez 3.95 frcs");
	};

	if (poids >= 50) {
		printf("Vous devez payez 5.90 frcs");
	};

}

