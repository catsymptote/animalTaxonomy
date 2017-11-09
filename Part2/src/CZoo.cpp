#include "CZoo.h"


const int arraySize = 3;
CAnimal *pZoo[arraySize];


CZoo::CZoo()
{
    //ctor
}

CZoo::~CZoo()
{
    //dtor
}


void CZoo::setArrayElement(CAnimal &animal, int index)
{
    pZoo[index] = &animal;
}

void CZoo::wakeUp()
{
    for(int i = 0; i < arraySize; i++)
    {
        std::cout << "*" << pZoo[i]->getSound() << "*" << std::endl;
    }
    std::cout << std::endl;
}

void CZoo::specimenPresentation()
{
    for(int i = 0; i < arraySize; i++)
    {
        std::cout << "My name is " << pZoo[i]->getName() << ", and I my specimen is " << pZoo[i]->getSpecimen() << "." << std::endl;
    }
    std::cout << std::endl;
}

void CZoo::moveAll()
{
    float seconds = 3;
    for(int i = 0; i < arraySize; i++)
    {
        std::cout   << "When I (" << pZoo[i]->getName() << ") have moved for "
                    << seconds << " seconds I have moved a total of "
                    << pZoo[i]->moving(seconds) << " meters." << std::endl;
    }
    std::cout << std::endl;
}
