// Exemple.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	float t[3][4];
	int i, j, row, col;

	printf(" Entrez le nombre de lignes (max 10): ");
	scanf("%d", &row);
	printf(" Entrez le nombre de colonne (max 10): ");
	scanf("%d", &col);
	printf(" Entrez les %d éléments de tableau : ", row*col);

	for (i = 0; i < row; i++)

	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", &t[i][j]);
		}
	}
	printf(" Le tableau 2D = \n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%4d", t[i][j]);
		}
		printf("\n");
		somme = i + j
	}
}