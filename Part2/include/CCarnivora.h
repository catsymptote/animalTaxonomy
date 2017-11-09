#ifndef CCARNIVORA_H
#define CCARNIVORA_H

#include <CAnimal.h>


class CCarnivora : public CAnimal
{
    using CAnimal::CAnimal;

    public:
        CCarnivora();
        virtual ~CCarnivora();

    protected:

    private:
};

#endif // CCARNIVORA_H
