#include <stdio.h> 


int main()
{
    printf("hello world \n");
    return 0 ;
}

// Exercice : Calcul de la somme des entiers de 1 à N

// Écrivez une fonction en C appelée sommeEntiers qui prend un entier positif N comme argument et renvoie la somme de tous les entiers de 1 à N. Par exemple, si N est égal à 5, la fonction devrait renvoyer 15 (1 + 2 + 3 + 4 + 5).

#include <stdio.h>

int sommeEntiers(int N) {
    int somme = 0;
    for (int i = 1; i <= N; i++) {
        somme += i;
    }
    return somme;
}

int main() {
    int N;
    printf("Entrez un entier positif N : ");
    scanf("%d", &N);
    
    if (N < 1) {
        printf("N doit être un entier positif.\n");
        return 1; // Code d'erreur
    }

    int resultat = sommeEntiers(N);
    printf("La somme des entiers de 1 à %d est : %d\n", N, resultat);
    
    return 0; // Fin normale du programme
}