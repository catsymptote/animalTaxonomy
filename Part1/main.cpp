#include <iostream>

#include "CAnimal.h"


int main()
{
    int animalCount = 2;

    /// Create object pointer array.
    CAnimal *pZoo[animalCount];

    /// Create and give value to each object.
    for(int i = 0; i < animalCount; i++)
    {
        /// Original solution not workin
        //Animal *pAnimal = new pZoo[i];
        pZoo[i] = new CAnimal();
        std::string tmp;

        std::cout << "Who am I?" << std::endl;
        std::getline(std::cin, tmp);
        pZoo[i]->setWhoAmI(tmp);

        std::cout << "\nHow do I move?" << std::endl;
        std::getline(std::cin, tmp);
        pZoo[i]->setHowDoIMove(tmp);

        std::cout << "\n" << std::endl;
    }

    /// Run cout functions for each element.
    for(int i = 0; i < animalCount; i++)
    {
        std::cout << i << "\t";
        pZoo[i]->whoAmI();
        pZoo[i]->howDoIMove();
    }

    return 0;
}
