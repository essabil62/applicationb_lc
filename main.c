#include <stdio.h>
#define PAUSE system("pause");
#define CLEAR system("cls");
#define TAILLE_MAX 100

main()
{
    int T[TAILLE_MAX], N=0;
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
                break;
            case 2:
                //puts("Tri par ordre decroissant");
                break;
            }
            break;
        case 4:
            switch(menu2())
            {
            case 1:
                //puts("Decalage a gauche");
                break;
            case 2:
                //puts("Decalage a droite");
                break;
            }
            break;
        case 5:
            //puts("Somme des entiers du tableau");
            break;
        case 6:
            //puts("Produit des entiers du tableau");
            break;
        case 7:
            puts("Inverse du tableau");
            break;
        case 8:
            puts("Bye Bye !!!");
            return 0;
        }
    }
    while(1);
}
