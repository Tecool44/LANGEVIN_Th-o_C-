//
// Created by theolangevin on 10/01/24.
//

#include "Reptile.h"

// Constructeur par défaut
Reptile::Reptile() : scalePattern("Unknown") {}

// Constructeur paramétré
Reptile::Reptile(const std::string& name, const std::string& color, const std::string& diet,
                 const std::string& habitat, const std::string& sounds, bool isPet,
                 int age, double weight, double height, const std::string& scalePattern)
        : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), scalePattern(scalePattern) {}

// Constructeur de copie
Reptile::Reptile(const Reptile& other)
        : Animal(other), scalePattern(other.scalePattern) {}

// Méthodes getter et setter pour l'élément spécifique à Reptile
std::string Reptile::getScalePattern() const { return scalePattern; }
void Reptile::setScalePattern(const std::string& newScalePattern) { scalePattern = newScalePattern; }

//renvoie le type
string Reptile::getAnimalType() const {
    return "Reptile";
}
// Override de la fonction virtuelle de la classe de base
void Reptile::printInfo() const {
    cout << "Animal of type Reptile:" << std::endl;
    cout << "Name: " << name << endl;
    cout << "Color: " << color << endl;
    cout << "Scale Pattern: " << scalePattern << std::endl;
    cout << "Diet: " << diet << endl;
    cout << "Habitat: " << habitat << endl;
    cout << "Sounds: " << sounds << endl;
    cout << "Is pet: " << (isPet ? "Yes" : "No") << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " meters" << endl;

}
