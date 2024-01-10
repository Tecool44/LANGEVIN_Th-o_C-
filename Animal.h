//
// Created by theolangevin on 10/01/24.
//

//
// Created by theol on 10/01/2024.
//

#ifndef LANGEVIN_THEO_C_ANIMAL_H
#define LANGEVIN_THEO_C_ANIMAL_H


#include <iostream>
#include <string>
using namespace std;

class Animal {
public:

    Animal();
    Animal(const string& name, const string& color, const string& diet,
           const string& habitat, const string& sounds, bool isPet,
           int age, double weight, double height);  // Constructeur paramétré
    Animal(const Animal& other);  // Constructeur de copie

    // Méthodes getter et setter pour chaque élément
    string getName() const;
    void setName(const string& name);



    string getColor() const;
    void setColor(const string& color);

    string getDiet() const;
    void setDiet(const string& diet);

    string getHabitat() const;
    void setHabitat(const string& habitat);

    string getSounds() const;
    void setSounds(const string& sounds);

    bool getIsPet() const;
    void setIsPet(bool isPet);

    int getAge() const;
    void setAge(int age);

    double getWeight() const;
    void setWeight(double weight);

    double getHeight() const;
    void setHeight(double height);

    // Fonction pour faire le son de l'animal
    void makeSound() const;

    virtual std::string getAnimalType() const ;

    // Fonction virtuelle pour afficher les infos de l'animal
    virtual void printInfo() const;

    string name;
    string color;
    string diet;
    string habitat;
    string sounds;
    bool isPet;
    int age;
    double weight;
    double height;

private:

};

#endif //LANGEVIN_THEO_C_ANIMAL_H