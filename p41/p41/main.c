//
//  main.c
//  p41
//
//  Created by laurent on 17/10/13.
//  Copyright (c) 2013 laurent Benedetti. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NB_ELEMTAB 15


int read (int valeur)
{
	valeur=0;
    scanf("%d",&valeur);
if(valeur<0)
{valeur=valeur*(-1);}
	return valeur;
}
int Puissance2 (int a)
{
	int resultat;
    resultat=0;
    resultat=a*a;;
    return resultat;
}
int Puissance3 (int a)
{
	int resultat;
    resultat=0;
    resultat=a*a*a;;
    return resultat;
}

void affichtab (float tableau[NB_ELEMTAB])
{
    int i;
    i=0;
    for (i=0 ; i<NB_ELEMTAB;i++)
    {
        printf("l element %d vaut %f\n",i, tableau[i]);
    }
}
void remplitab (float tableau[NB_ELEMTAB])
{
    int i ;
    i=0;
    for (i=0 ; i<NB_ELEMTAB;i++)
    {
        tableau[i]=i+5;
    }
}
int pointeur1 (void)
{
    int x=2;
    int *p;
    p=&x;
    
    printf("la valeur de x est : %d\n",x);
  /*  printf("l'adresse de x est : %d\n",p);*/
    printf("la valeur du pointeur est : %d",*p);

    return(0);
}

int main(void) {
	int n, square, cube;
    float tableau[NB_ELEMTAB];
	printf("Veuillez entrer un nombre entier:\n");
	scanf("%d",&n);
	square=Puissance2(n);
	printf("le carré de %d est : %d\n",n,square);
    cube=Puissance3(n);
	printf("et le cube de %d est : %d\n",n,cube);
    remplitab(tableau);
    /*affichtab(tableau);*/
    pointeur1();
	puts("!!!ok!!!"); /* prints !!!Hello World!!! */
	return 0;
}


