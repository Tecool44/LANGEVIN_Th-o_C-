//
// Created by theolangevin on 10/01/24.
//

#include "Mammal.h"
// Constructeur par défaut
Mammal::Mammal() : furColor("Unknown") {}

// Constructeur paramétré
Mammal::Mammal(const std::string& name, const std::string& color, const std::string& diet,
               const std::string& habitat, const std::string& sounds, bool isPet,
               int age, double weight, double height, const std::string& furColor)
        : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), furColor(furColor) {}

// Constructeur de copie
Mammal::Mammal(const Mammal& other)
        : Animal(other), furColor(other.furColor) {}

// Méthodes getter et setter pour l'élément spécifique à Mammal
std::string Mammal::getFurColor() const { return furColor; }
void Mammal::setFurColor(const std::string& newFurColor) { furColor = newFurColor; }

//fonction qui renvoir le type de l'animal
std::string getAnimalType() {
return "Mammal";
}

// Override de la fonction virtuelle de la classe de base
void Mammal::printInfo() const {
    std::cout << "Animal of type Mammal:" << std::endl;
    cout << "Name: " << name << endl;
    cout << "Color: " << color << endl;
    cout << "Fur Color: " << furColor << std::endl;
    cout << "Diet: " << diet << endl;
    cout << "Habitat: " << habitat << endl;
    cout << "Sounds: " << sounds << endl;
    cout << "Is pet: " << (isPet ? "Yes" : "No") << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " meters" << endl;

}

string Mammal::getAnimalType() const {
    return "Mammal";
};
