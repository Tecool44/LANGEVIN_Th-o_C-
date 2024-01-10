//
// Created by theolangevin on 10/01/24.
//

#include "Bird.h"

// Constructeur par défaut
Bird::Bird() : wingspan(0.0) {}

// Constructeur paramétré
Bird::Bird(const std::string& name, const std::string& color, const std::string& diet,
           const std::string& habitat, const std::string& sounds, bool isPet,
           int age, double weight, double height, double wingspan)
        : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), wingspan(wingspan) {}

// Constructeur de copie
Bird::Bird(const Bird& other)
        : Animal(other), wingspan(other.wingspan) {}

//renvoie le type
string Bird::getAnimalType() const {
    return "Bird";
}
// Méthodes getter et setter pour l'élément spécifique à Bird
double Bird::getWingspan() const { return wingspan; }
void Bird::setWingspan(double newWingspan) { wingspan = newWingspan; }

// Override de la fonction virtuelle de la classe de base
void Bird::printInfo() const {
    cout << "Animal of type Bird:" << std::endl;
    cout << "Name: " << name << endl;
    cout << "Color: " << color << endl;
    cout << "Wingspan: " << wingspan << " centimeters" << std::endl;
    cout << "Diet: " << diet << endl;
    cout << "Habitat: " << habitat << endl;
    cout << "Sounds: " << sounds << endl;
    cout << "Is pet: " << (isPet ? "Yes" : "No") << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " meters" << endl;
}


