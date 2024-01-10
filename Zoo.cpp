//
// Created by theolangevin on 10/01/24.
//

#include "Zoo.h"


// Initialisation de la capacité maximale
int Zoo::MAX_CAPACITY = 4;

// Constructeur par défaut
Zoo::Zoo() : name("Unknown") {}

// Constructeur paramétré avec le nom du Zoo
Zoo::Zoo(const std::string& name) : name(name) {}

// Constructeur avec le nom et les animaux
Zoo::Zoo(const std::string& name, const std::vector<Animal*>& animals) : name(name), animals(animals) {}


// Constructeur de copie
Zoo::Zoo(const Zoo& other) : name(other.name), animals(other.animals.size()) {
    for (size_t i = 0; i < animals.size(); ++i) {
        animals[i] = new Animal(*other.animals[i]);
    }
}

// Destructeur
Zoo::~Zoo() {
    for (const auto& animal : animals) {
        delete animal;
    }
}
// Getter pour le nom du Zoo
std::string Zoo::getName() const {
    return name;
}

// Setter pour le nom du Zoo
void Zoo::setName(const std::string& newName) {
    name = newName;
}

// Fonction pour lister les informations des animaux dans le Zoo
void Zoo::listAnimals() const {
    std::cout << "Animals in " << name << " :" << std::endl;
    for (const auto& animal : animals) {
        animal->printInfo();
        std::cout << "----------------------" << std::endl;
    }
}

#include <algorithm>


// fonction de tri alphabétique
bool compareAnimalsByName(const Animal* a, const Animal* b) {
    return a->getName() < b->getName();
}

void Zoo::addAnimal(Animal* animal) {
    if (animals.size() < MAX_CAPACITY) {
        auto compteur = lower_bound(animals.begin(), animals.end(), animal, compareAnimalsByName);
        animals.insert(compteur, animal);
    } else {
        std::cout << "Cannot add animal. " << name << " Zoo is at full capacity." << std::endl;
    }
}

int Zoo::searchAnimalByName(const std::string& searchName) const {
    for (int i = 0; i < animals.size(); ++i) {
        if (animals[i]->getName() == searchName) {
            return static_cast<int>(i); // L'indice devient un int
        }
    }
    return -1; // Retourne -1 si l'animal n'est pas trouvé
}

#include <algorithm>

void Zoo::removeAnimalByName(const std::string& searchName) {
    int index = searchAnimalByName(searchName);
    //Vérification si l'animal existe avec son index
    if (index != -1) {
        delete animals[index];
        std::cout << "Animal with name " << searchName << " removed from " << name << " ." << std::endl;
    } else {
        std::cout << "Animal with name " << searchName << " not found in the zoo." << std::endl;
    }

}


double Zoo::averageAgeForType(const std::string& animalType) const {
    double totalAge = 0.0;
    int count = 0;
    for (const auto& animal : animals) {
        if (animal->getAnimalType() == animalType) {
            totalAge += double(animal->getAge());
            count++;
        }
    }
    if (count > 0) {
        return totalAge / static_cast<double>(count);
    } else {
        std::cout << "No animals of type '" << animalType << "' found in the zoo." << std::endl;
        return 0.0; // Retourne 0 si aucun animal du type spécifié n'est trouvé
    }
}


