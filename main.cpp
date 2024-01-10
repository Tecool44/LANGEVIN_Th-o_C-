//
// Created by theolangevin on 10/01/24.
//
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Zoo.h"

int main() {


    Mammal chien("Buddy", "Brown", "Omnivore", "Home", "Bark", true, 3, 20.5, 0.5, "White");

    chien.printInfo();

    std::cout << "----------------------" << std::endl;


    Bird Mésange("Cuicui", "Brown", "Graines", "Home", "cuicui", true, 3, 20.5, 0.5, 20);

    Mésange.printInfo();

    std::cout << "----------------------" << std::endl;


    Reptile Boa("Cuicui", "Brown", "Graines", "Home", "cuicui", true, 3, 20.5, 0.5, "red and white");

   Boa.printInfo();
    Mammal* leo = new Mammal("Leo", "Brown", "Omnivore", "Home", "Bark", true, 20, 20.5, 0.5, "White");
    Mammal* dog = new Mammal("Buddy", "Brown", "Omnivore", "Home", "Bark", true, 3, 20.5, 0.5, "White");
    Bird* parrot = new Bird("Polly", "Green", "Seeds", "Forest", "Squawk", true, 2, 0.5, 0.3, 0.2);
    Reptile* snake = new Reptile("Sly", "Black", "Rodents", "Desert", "Hiss", false, 4, 2.5, 1.0, "Striped");


    Zoo myZoo("City Zoo");


    myZoo.addAnimal(leo);
    std::cout << "----------------------" << std::endl;
    myZoo.addAnimal(dog);
    std::cout << "----------------------" << std::endl;
    myZoo.addAnimal(parrot);
    std::cout << "----------------------" << std::endl;
    myZoo.addAnimal(snake);
    std::cout << "----------------------" << std::endl;

    myZoo.listAnimals();
    string searchName = "Leo";
    int index = myZoo.searchAnimalByName(searchName);
    std::cout << "----------------------" << std::endl;
    if (index != -1) {
        std::cout << "Animal with name " << searchName << " found at index " << index << std::endl;
    } else {
        std::cout << "Animal with name " << searchName << " not found in the zoo." << std::endl;
    }
    string removeName = "Leo";
    myZoo.removeAnimalByName(removeName);
    myZoo.listAnimals();

    string animalType = "Mammal";
    double avgAge = myZoo.averageAgeForType(animalType);
    cout <<"average age of Mammal :"<<avgAge << std::endl;


    return 0;
}
