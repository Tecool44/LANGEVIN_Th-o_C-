//
// Created by theol on 10/01/2024.
//

#include "Animal.h"
using namespace std;

//Constructeur par défaut
Animal::Animal() : isPet(false), age(0), weight(0.0), height(0.0) {}

//Constructeur paramétré
Animal::Animal(const string& name, const string& color, const string& diet,
               const string& habitat, const string& sounds, bool isPet,
               int age, double weight, double height)
        : name(name), color(color), diet(diet), habitat(habitat),
          sounds(sounds), isPet(isPet), age(age), weight(weight), height(height) {}

// Constructeur de copie
Animal::Animal(const Animal& other)
        : name(other.name), color(other.color), diet(other.diet), habitat(other.habitat),
          sounds(other.sounds), isPet(other.isPet), age(other.age), weight(other.weight), height(other.height) {}

// Méthodes getter et setter pour chaque élément
string Animal::getName() const { return name; }
void Animal::setName(const string& newName) { name = newName; }

string Animal::getColor() const { return color; }
void Animal::setColor(const string& newColor) { color = newColor; }

string Animal::getDiet() const { return diet; }
void Animal::setDiet(const string& newDiet) { diet = newDiet; }

string Animal::getHabitat() const { return habitat; }
void Animal::setHabitat(const string& newHabitat) { habitat = newHabitat; }

string Animal::getSounds() const { return sounds; }
void Animal::setSounds(const string& newSounds) { sounds = newSounds; }

bool Animal::getIsPet() const { return isPet; }
void Animal::setIsPet(bool newIsPet) { isPet = newIsPet; }

int Animal::getAge() const { return age; }
void Animal::setAge(int newAge) { age = newAge; }

double Animal::getWeight() const { return weight; }
void Animal::setWeight(double newWeight) { weight = newWeight; }

double Animal::getHeight() const { return height; }
void Animal::setHeight(double newHeight) { height = newHeight; }

// Fonction pour faire le son de l'animal
void Animal::makeSound() const {
    cout << name << " makes the sound: " << sounds << endl;
}



// Fonction virtuelle pour afficher les infos de l'animal
void Animal::printInfo() const {
    std::cout << "Animal unknown type :" << std::endl;
    cout << "Name: " << name << endl;
    cout << "Color: " << color << endl;
    cout << "Diet: " << diet << endl;
    cout << "Habitat: " << habitat << endl;
    cout << "Sounds: " << sounds << endl;
    cout << "Is pet: " << (isPet ? "Yes" : "No") << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " meters" << endl;
}

std::string Animal::getAnimalType() const {
    return "Animal";
}
