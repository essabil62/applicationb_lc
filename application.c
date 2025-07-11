#include "appliB.h"
#include <time.h>

int menu()
{
    int choice;
    do
    {
        puts("Menu");
        puts("1. Remplissage du tableau");
        puts("2. Affichage du tableau");
        puts("3. Tri du tableau");
        puts("4. Decalage du tableau");
        puts("5. Somme dse entiers du tableau");
        puts("6. Produit des entiers du tableau");
        puts("7. Inverse du tableau");
        puts("8. Quitter");
        puts("Faites un choix !");
        scanf("%d",&choice);
    }
    while(choice<1 || choice>8);
    return choice;
}

int menu1()
{
    int choice;
    do
    {
        puts("Menu");
        puts("1. Par ordre croissant");
        puts("2. Par ordre décroissant");
        puts("Faites un choix !");
        scanf("%d",&choice);
    }
    while(choice!=1 && choice!=2);
    return choice;
}

int menu2()
{
    int choice;
    do
    {
        puts("Menu");
        puts("1. A Gauche");
        puts("2. A Droite");
        puts("Faites un choix !");
        scanf("%d",&choice);
    }
    while(choice!=1 && choice!=2);
    return choice;
}

void remplirTableau(int T[], int N){
    srand(time(0));
    for (int i=0; i<N; i++){
        T[i] = rand()%21;
    }
}

void afficherTableau(int T[], int N){
    for (int i=0; i<N; i++){
        printf("%d\t",T[i]);
    }
}


