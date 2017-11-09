#include <iostream>
#include <string>

#include "CAnimal.h"
#include "CFissipedia.h"
#include "CBears.h"


int main()
{
    std::cout << "Animal Taxonomy class inheritance example code." << std::endl;

    CAnimal *pZoo[3];

    /// Create objects.
    CBears *brownBear;
    brownBear = new CBears("Ursidae", "Winnie the Pooh", "growl", 5.0);
    CBears *grizzlyBear = new CBears("Ursidae", "Dat bear from the telly", "growlie", 7.0);
    CBears *kodaBear = new CBears("Ursidae", "Brother Bear", "growlzz", 2.4);
    pZoo[0] = brownBear;
    pZoo[1] = grizzlyBear;
    pZoo[2] = kodaBear;

    /// Run assignment specific functions.
    for(int i = 0; i < 3; i++)
    {
        std::cout << "*" << pZoo[i]->getSound() << "*" << std::endl;
        std::cout << "My name is " << pZoo[i]->getName() << ", and my taxonomic rank is " << pZoo[i]->getSpecimen() << "." << std::endl;
        std::cout << "I can move at " << pZoo[i]->getVelocity() << " m/s." << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
