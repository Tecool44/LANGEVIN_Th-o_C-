//
// Created by theolangevin on 10/01/24.
//

#ifndef LANGEVIN_THEO_C_ZOO_H
#define LANGEVIN_THEO_C_ZOO_H


#include <iostream>
#include <vector>
#include "Animal.h"


class Zoo {
public:

    Zoo();  // Constructeur par défaut
    explicit Zoo(const std::string& name);  // Constructeur paramétré avec le nom du Zoo
    Zoo(const std::string& name, const std::vector<Animal*>& animals);  // Constructeur avec le nom et les animaux
    Zoo(const Zoo& other);  // Constructeur de copie

    // Destructeur
    ~Zoo();

    // Getter et Setter pour le nom du Zoo
    std::string getName() const;
    void setName(const std::string& name);

    void listAnimals() const;

    void addAnimal(Animal* animal);
    int searchAnimalByName(const string &searchName) const;
    void removeAnimalByName(const string &searchName);
    double averageAgeForType(const string &animalType) const;


private:
    static int MAX_CAPACITY;
    std::string name;
    std::vector<Animal*> animals;



};





#endif //LANGEVIN_THEO_C_ZOO_H
