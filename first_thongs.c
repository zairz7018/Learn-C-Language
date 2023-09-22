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

#include <stdio.h>
#include <math.h>

int main() {
    // Exemple 1 : Calcul de la racine carrée
    double nombre1 = 16.0;
    double racine_carree = sqrt(nombre1);
    printf("La racine carrée de %.2lf est %.2lf\n", nombre1, racine_carree);

    // Exemple 2 : Calcul de la valeur absolue (entier)
    int nombre2 = -7;
    int valeur_absolue_entier = abs(nombre2);
    printf("La valeur absolue de %d est %d\n", nombre2, valeur_absolue_entier);

    // Exemple 3 : Utilisation de la fonction trigonométrique sin
    double angle_degrees = 45.0;
    double angle_radians = angle_degrees * M_PI / 180.0; // Conversion en radians
    double sin_value = sin(angle_radians);
    printf("Le sinus de %.2lf degrés est %.2lf\n", angle_degrees, sin_value);

    // Exemple 4 : Exponentielle
    double nombre3 = 2.0;
    double exp_value = exp(nombre3);
    printf("L'exponentielle de %.2lf est %.2lf\n", nombre3, exp_value);

    // Exemple 5 : Logarithme naturel
    double nombre4 = 10.0;
    double log_value = log(nombre4);
    printf("Le logarithme naturel de %.2lf est %.2lf\n", nombre4, log_value);

    // Exemple 6 : Logarithme en base 10
    double nombre5 = 100.0;
    double log10_value = log10(nombre5);
    printf("Le logarithme en base 10 de %.2lf est %.2lf\n", nombre5, log10_value);

    // Exemple 7 : Puissance
    double base = 2.0;
    double exposant = 3.0;
    double power_value = pow(base, exposant);
    printf("%.2lf élevé à la puissance %.2lf est %.2lf\n", base, exposant, power_value);

    // Exemple 8 : Arrondi
    double nombre6 = 2.6;
    double rounded_value = round(nombre6);
    printf("L'arrondi de %.2lf est %.2lf\n", nombre6, rounded_value);

    // Exemple 9 : Valeur maximale et minimale
    double x = 5.0;
    double y = 3.0;
    double max_value = fmax(x, y);
    double min_value = fmin(x, y);
    printf("La valeur maximale entre %.2lf et %.2lf est %.2lf\n", x, y, max_value);
    printf("La valeur minimale entre %.2lf et %.2lf est %.2lf\n", x, y, min_value);

    // Exemple 10 : Valeur absolue (flottant)
    double nombre7 = -3.14;
    double abs_value = fabs(nombre7);
    printf("La valeur absolue de %.2lf est %.2lf\n", nombre7, abs_value);

    return 0;
}


}
