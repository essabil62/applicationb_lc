#include <stdio.h>
#include "application.h"
#define PAUSE system("pause");
#define CLEAR system("cls");
#define TAILLE_MAX 100

int main()
{
    int T[TAILLE_MAX], N=0,k=0;
    do
    {
        switch(menu())
        {
        case 1:
            //puts("Remplissage du tableau");
            do{
                puts("Veuillez saisir la taille du tableau");
                scanf("%d",&N);
            }while(N<=0 || N>TAILLE_MAX);
            remplirTableau(T,N);
            break;
        case 2:
            //puts("Affichage du tableau");
            if(N==0)
                puts("Tableau vide !");
            else
                afficherTableau(T,N);
            break;
        case 3:
            switch(menu1())
            {
            case 1:
                //puts("Tri par ordre croissant");
                if(N==0)
                    puts("Tableau vide !");
                else
                    triCroissant(T,N);
                break;
            case 2:
                //puts("Tri par ordre decroissant");
                if(N==0)
                    puts("Tableau vide !");
                else
                    triDecroissant(T,N);
                break;
            }
            break;
        case 4:
            switch(menu2())
            {
            case 1:
                //puts("Decalage a gauche");
                do{
                    puts("Donner le nombre de decalage a faire");
                    scanf("%d",&k);
                }while(k<0);
                if(N==0)
                    puts("Tableau vide !");
                else
                    decalageGauche(T,N,k);
                break;
            case 2:
                //puts("Decalage a droite");
                do{
                    puts("Donner le nombre de decalage a faire");
                    scanf("%d",&k);
                }while(k<0);
                if(N==0)
                    puts("Tableau vide !");
                else
                    decalageDroite(T,N,k);
                break;
            }
            break;
        case 5:
            //puts("Somme des entiers du tableau");
            if(N==0)
                puts("Tableau vide !");
            else
                printf("La somme des entiers du tableau est %d\n",somme(T,N));
            break;
        case 6:
            //puts("Produit des entiers du tableau");
             if(N==0)
                puts("Tableau vide !");
            else
                printf("Le produit des entiers du tableau est %d\n",produit(T,N));
            break;
        case 7:
            //puts("Inverse du tableau");
            if(N==0)
                puts("Tableau vide !");
            else
                inverse(T,N);
            break;
        case 8:
            puts("Bye Bye !!!");
            return 0;
        }
    }
    while(1);
}
