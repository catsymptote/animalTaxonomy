#ifndef CZOO_H
#define CZOO_H

#include <iostream>

#include "CAnimal.h"


class CZoo
{
    public:
        CZoo();
        virtual ~CZoo();

        void setArrayElement(CAnimal &animal, int index);

        void wakeUp();
        void specimenPresentation();
        void moveAll();

    protected:

    private:
};

#endif // CZOO_H
