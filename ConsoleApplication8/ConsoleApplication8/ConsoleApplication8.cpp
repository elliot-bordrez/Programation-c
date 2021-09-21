// ConsoleApplication8.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<conio.h>

int main()
{
	int age, sexe,  nbcinema, FastFood, nbFastFood, Sport;

	printf("Entrer votre age : ");
	scanf("%d", &age);

	printf("Quelle est votre sexe ? Entrez 1 pour fille, Entrez 2 pour garcon : ");
	scanf("%d", &sexe);

	printf("Nombre de fois ou vous allez au cinema par mois : ");
	scanf("%d", &nbcinema);

	printf("Quelle Fast Food preferez vous ? Entrez 1 pour Quick,  Entrez 2 pour MacDo : ");
	scanf("%d", &FastFood);

	printf("Combien de fois allez vous au FastFood par moi ? : ");
	scanf("%d", &nbFastFood);

	printf("Pratiquez vous un Sport ? Si oui , lequel , 1 pour le foot, 2 pour le tennis, 3 pour le basket, 4 pour le judo, 5 pour Natation : ");
	scanf("%d", &Sport);

	return 0;

}

