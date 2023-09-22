#include <stdio.h> 


int main()
{
    printf("hello world \n");
    return 0 ;
}

#include <stdio.h>

int sommeEntiers(int N) {
    int somme = 0;
    for (int i = 1; i <= N; i++) {
        somme += i;
    }
    return somme;
}

// Exercice : Calcul de la somme des entiers de 1 à N
// Écrivez une fonction en C appelée sommeEntiers qui prend un entier positif N comme argument et renvoie la somme de tous les entiers de 1 à N. Par exemple, si N est égal à 5, la fonction devrait renvoyer 15 (1 + 2 + 3 + 4 + 5).


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

#include <stdio.h> // Include the standard input/output library

int main() {
    // Declare variables to store the two numbers and the result
    int num1, num2, sum;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    
    // Read the first number from the user
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    
    // Read the second number from the user
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0; // Return 0 to indicate successful program execution
}


// Define a class called "Person"
class Person {
public:
    // Constructor to initialize object properties
    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Member function to display person's information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

private:
    std::string name; // Private member variable for name
    int age;         // Private member variable for age
};

#include <iostream>
#include <string>

// Define a class called "Person"
class Person {
public:
    // Constructor to initialize object properties
    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Member function to display person's information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

private:
    std::string name; // Private member variable for name
    int age;         // Private member variable for age
};

int main() {
    // Create two Person objects
    Person person1("Alice", 25);
    Person person2("Bob", 30);

    // Call the displayInfo() member function for each person
    std::cout << "Person 1:" << std::endl;
    person1.displayInfo();
    
    std::cout << "\nPerson 2:" << std::endl;
    person2.displayInfo();

    return 0;

    
#include <math.h>

int main() {
    // Exemple 1 : Calcul de la racine carrée
    double nombre = 16.0;
    double racine_carree = sqrt(nombre);
    printf("La racine carrée de %.2lf est %.2lf\n", nombre, racine_carree);

    // Exemple 2 : Calcul de la valeur absolue
    int nombre_negatif = -7;
    int valeur_absolue = abs(nombre_negatif);
    printf("La valeur absolue de %d est %d\n", nombre_negatif, valeur_absolue);

    // Exemple 3 : Utilisation de la fonction trigonométrique sin
    double angle_degrees = 45.0;
    double angle_radians = angle_degrees * M_PI / 180.0; // Conversion en radians
    double sin_value = sin(angle_radians);
    printf("Le sinus de %.2lf degrés est %.2lf\n", angle_degrees, sin_value);

    return 0;
}

}
