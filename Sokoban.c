#include <stdio.h>
#include <stdlib.h>

/* Creation du plateau */
int *CreerPlateau(int h, int l) {
	int i,j;	
	int * res =NULL;
	res=(int*)malloc(sizeof(int));
	res->tableau = (char **)malloc(sizeof(char*) * h);
	for ( i = 0 ; i < h ; i ++)
	{
		res->tableau[i] = (char *)malloc(sizeof(char) * l);
	}
	res->longueur=l;
	res->hauteur=h;
	return res;
}
/* Affichage du plateau */	
void AfficherPlateau(int *AffichPlat)
{
	int i , j;
	for(i=0 ;i < AffichPlat->hauteur; i++)
	{
		for(j=0;j < AffichPlat->longueur; j++)
		{
			printf(" %c",AffichPlat->tableau[i][j]);
		}
		printf("\n");
	}
}

int main()
{

    return 0;
}