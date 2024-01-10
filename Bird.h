//
// Created by theolangevin on 10/01/24.
//

#ifndef LANGEVIN_THEO_C_BIRD_H
#define LANGEVIN_THEO_C_BIRD_H


#include "Animal.h"

#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
public:
    // Constructeurs
    Bird();  // Constructeur par défaut
    Bird(const std::string& name, const std::string& color, const std::string& diet,
         const std::string& habitat, const std::string& sounds, bool isPet,
         int age, double weight, double height, double wingspan);  // Constructeur paramétré
    Bird(const Bird& other);  // Constructeur de copie

    // Méthodes getter et setter pour l'élément spécifique à Bird
    double getWingspan() const;
    void setWingspan(double wingspan);

    // Override de la fonction virtuelle de la classe de base
    void printInfo() const override;
    string getAnimalType() const override;



private:
    double wingspan;
};

#endif // BIRD_H




#endif //LANGEVIN_THEO_C_BIRD_H
