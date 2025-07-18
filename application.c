#include <stdio.h>
#include <stdlib.h>
#include "application.h"
#include <time.h>

int menu()
{
    int choice;
    do
    {
        puts("\nMenu");
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
        puts("\nMenu");
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

void remplirTableau(int T[], int N)
{
    srand(time(0));
    for (int i=0; i<N; i++){
        T[i] = rand()%21;
    }
}

void afficherTableau(int T[], int N)
{
    for (int i=0; i<N; i++){
        printf("%d\t",T[i]);
    }
}

void triCroissant(int T[], int N)
{
    int temp;
    for(int i =0; i < N-1 ; i++) {
        for(int j =i+1; j < N; j++) {
            if(T[j] < T[i]) {
                temp=T[i];
                T[i]=T[j];
                T[j]=temp;

            }
        }
    }
}

void triDecroissant(int T[], int N)
{
    int temp;
    for(int i =0; i < N-1 ; i++) {
        for(int j =i+1; j < N; j++) {
            if(T[j] > T[i]) {
                temp=T[i];
                T[i]=T[j];
                T[j]=temp;

            }
        }
    }
}

void decalageDroite(int T[],int N,int k)
{
    int temp[k];
     for (int i = 0; i < k; i++) {
        temp[i] = T[N - k + i];
    }
    for (int i = N - 1; i >= k; i--) {
        T[i] = T[i - k];
    }
    for(int i=0;i<k;i++){
        T[i]=temp[i];
    }
}

void decalageGauche(int T[],int N,int k)
{
    int temp[k];
     for (int i = 0; i < k; i++) {
        temp[i] = T[i];
    }
    for (int i = 0; i < N-k; i++) {
        T[i] = T[i + k];
    }
    for(int i=0;i<k;i++){
        T[N-k+i]=temp[i];
    }
}

int somme(int T[], int N)
{
    int som=0;
    for (int i=0;i<N;i++){
        som+=T[i];
    }
    return som;
}

int produit(int T[], int N)
{
    int prod=1;
    for (int i=0;i<N;i++){
        prod*=T[i];
    }
    return prod;
}

void inverse(int T[], int N)
{
    for (int i=0;i<N/2; i++) {
        int temp = T[i];
        T[i] = T[N-1-i];
        T[N-1-i] = temp;
    }
}

