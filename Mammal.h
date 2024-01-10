//
// Created by theolangevin on 10/01/24.
//

#ifndef LANGEVIN_THEO_C_MAMMAL_H
#define LANGEVIN_THEO_C_MAMMAL_H


#include "Animal.h"

class Mammal : public Animal {
public:
    // Constructeurs
    Mammal();  // Constructeur par défaut
    Mammal(const std::string& name, const std::string& color, const std::string& diet,
           const std::string& habitat, const std::string& sounds, bool isPet,
           int age, double weight, double height, const std::string& furColor);  // Constructeur paramétré
    Mammal(const Mammal& other);  // Constructeur de copie

    // Méthodes getter et setter pour l'élément spécifique à Mammal
    std::string getFurColor() const;
    void setFurColor(const std::string& furColor);

    // Override de la fonction virtuelle de la classe de base
    void printInfo() const override;
    string getAnimalType() const override;

private:
    std::string furColor;
};



#endif //LANGEVIN_THEO_C_MAMMAL_H
