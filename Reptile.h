//
// Created by theolangevin on 10/01/24.
//

#ifndef LANGEVIN_THEO_C_REPTILE_H
#define LANGEVIN_THEO_C_REPTILE_H




#include "Animal.h"

class Reptile : public Animal {
public:
    // Constructeurs
    Reptile();  // Constructeur par défaut
    Reptile(const std::string& name, const std::string& color, const std::string& diet,
            const std::string& habitat, const std::string& sounds, bool isPet,
            int age, double weight, double height, const std::string& scalePattern);  // Constructeur paramétré
    Reptile(const Reptile& other);  // Constructeur de copie

    // Méthodes getter et setter pour l'élément spécifique à Reptile
    std::string getScalePattern() const;
    void setScalePattern(const std::string& scalePattern);

    // Override de la fonction virtuelle de la classe de base
    void printInfo() const override;
    string getAnimalType() const override;

private:
    std::string scalePattern;


};


#endif //LANGEVIN_THEO_C_REPTILE_H
