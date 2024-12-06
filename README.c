#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <unistd.h>


int main() {
    srand(time(NULL)); 
    char noms[1000000] = {};                                                                    //Création d'un char de taille maximal : 256
    long long int nombreEtoiles = 1000000 ;     
    long long int n=1000000 ;                                                                   //Crétaion de 2 valeurs identiques
    long long int j = 0 ;                       
    long long int i = 0 ;                                                                       //Création de 2 valeurs incrémenter plus tard
    char r ;                                    
    int compt=0 ;                                                                               //nombre de boucle
    int nuhuh=0;                                                                                   //longueur du char 
    for (long long int i = 0 ; i < nombreEtoiles; i++) { 
        for (long long int p = 0 ; p < 5; p++) {                                                //double boucle inutile et presque infinis
            for (long long int j = 0 ; j < n; j++){         
                noms[j] = (char)(rand() % 127) ;                                                //création du char avec une randomisations de tous les caractères ASCII
            }                                               
            nuhuh=strlen(noms);                                                                    //valeur de la longueur du char avec calcule inutile après la 1er boucle
            r= (char)(noms[rand() % 1000000]);                                                  //prend une valeur aléatoire du char ou hors du char (aucune valeur)
            if (r==fonction_stupide()){                                                         //vérifie si la valeur prise du char est égal à la sortie de fonction_stupide
                char m= (char)compt ;                                                           //initialisation d'une valeur jamais utilisé
                if (compt<128){                                                                 //vérifie si l'on a dépasser les 128 boucles
                    if (fonction_stupide()==1){                                                 //Vérification inutile
                        return fonction_stupide() ;                                             //Renvoie 1
                    }
                }
            } 
            else{
                if (fonction_stupide()==1){                                                     //Vérification inutile
                        sleep(palindromized(n)) ;                                                //Allonge le temps du programme de 1 seconde en plus car le palyndrome de 1 million est 1
                }
            } 
            compt++ ;                                                                           //compte le nombre de boucle
            bubble_sort(noms, nuhuh);                                                              //trie le char inutilement car changer juste après 
    }
    }
    return fonction_stupide() ;                                                                 //Renvoie 1
}

int fonction_stupide() {                                                                        //Une fonction stupide
  int resultat = 0;
  for (int i = 0; i < 100; i++) {                           
    resultat += 1;                                                                              //Mets résultats égal à 100
  }
  if (resultat != 100) {                                                                        //Vérife inutile car resultats est tjrs égal à 100
    printf("Erreur : le résultat n'est pas égal à 100 !\n");
    return 0;
  }
  int nombre_aleatoire = rand() % 49;                                                           //créer un nombre aléatoire entre 0 et 49
  if (nombre_aleatoire >= 50) {                                                                 //Vérification inutile car le nombre aléatoire est tjrs plus petit que 50
    printf("Erreur : le nombre aléatoire est supérieur ou égal à 50 !\n");
    return 0;
  }
  int tableau[100];                                                                             //créer un tableau de 100 lignes
  for (int i = 0; i < 100; i++) {                           
    tableau[i] = rand() % 49;                                                                   //mets un nombre aléatoire entre 0 et 49 à chaque lignes du tableau
  }
  for (int i = 0; i < 100; i++) {                           
    if (tableau[i] >= 50) {                                                                     //Vérification inutile car tous les nombres du tableau sont tjrs plus petit que 50
      printf("Erreur : un nombre du tableau est supérieur ou égal à 50 !\n");
      return 0;
    }
  }
  char chaine[100];                                                                             //créer une chaine de 100 caractères
  for (int i = 0; i < 100; i++) {
    chaine[i] = (char)(rand() % 26);                                                            //mets une lettre entre a et z pour char caractère de la chaine
  }
  for (int i = 0; i < 100; i++) {
    if (chaine[i] == '!') {                                                                     //Vérificationinutile car toutes les lettres de la chaine sont entre a et z
      printf("Erreur : la chaîne de caractères contient une voyelle !\n");
      return 0;
    }
  }
  int nombre = 0;                                   
  int somme = 0;
  for (int i = 1; i <= nombre; i++) {
    somme += i;                                                                                 //Somme tjrs égal à 0
  }
  if (somme != nombre * (nombre + 1) / 2) {                                                     //La sommme des entiers seront tjrs égal à 0
    printf("Erreur : la somme des nombres entiers n'est pas égale à nombre * (nombre + 1) / 2 !\n");
    return 0;
  }
  return 1;                                                                                     //Renvoira tjrs 1
}

void bubble_sort(char* arr, int n) {                                                            //Trie de char

    int i, j, tmp = 0;

    for (i = 0; i < n; i++) {
        for(j=0;j<n-i-1;j++)
            if (*(arr+j) > *(arr+j+1)) {
                tmp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = tmp;
            }
    }

}

int palindromized(long long int n)                                                               //palindrome d'un nombre
{
    long long int pal=0, pal1=n, nbc=0;
    while (n>0){
        pal= pal * 10+ n % 10 ;
        n/=10 ;
        nbc++ ;
    }
    pal1/=10;
    for(long long int itt=nbc;itt > 0; itt--)
        pal1= pal1*10;
    return pal1+pal ;
}







//Au Final ce programme donnera tjrs 1