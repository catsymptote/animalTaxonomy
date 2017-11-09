#include <iostream>
#include <string>

#include "CZoo.h"
#include "CAnimal.h"
    #include "CFissipedia.h"
        #include "CDogs.h"
        #include "CBears.h"
        #include "CCats.h"
    #include "CPinniped.h"
        #include "CEaredSeal.h"
        #include "CWalrus.h"
        #include "CSeals.h"


int main()
{
    std::cout << "Animal Taxonomy class inheritance example code.\n" << std::endl;

    CZoo *zootopia = new CZoo();

    /// Create objects.
    CBears  *growlie    = new CBears("Ursidae", "Winnie the Pooh", "growl", 5.0);
    CCats   *meow       = new CCats("Felidae", "Mjau", "meow ;3", 3.0);
    CDogs   *woof       = new CDogs("Canidae", "Woofsie", "raff raff", 3.5);

    /// Add objects to object array.
    zootopia->setArrayElement(*growlie, 0);
    zootopia->setArrayElement(*meow, 1);
    zootopia->setArrayElement(*woof, 2);

    /// Run zoo functions.
    zootopia->wakeUp();
    zootopia->specimenPresentation();
    zootopia->moveAll();

    /*
    CAnimal *pZoo[3];

    pZoo[0] = growlie;
    pZoo[1] = meow;
    pZoo[2] = woof;

    /// Run assignment specific functions.
    for(int i = 0; i < 3; i++)
    {
        std::cout << "*" << pZoo[i]->getSound() << "*" << std::endl;
        std::cout << "My name is " << pZoo[i]->getName() << ", and my taxonomic rank is " << pZoo[i]->getSpecimen() << "." << std::endl;
        std::cout << "I can move at " << pZoo[i]->getVelocity() << " m/s." << std::endl;
        std::cout << std::endl;
    }
    */

    return 0;
}
