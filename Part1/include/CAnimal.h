#ifndef CANIMAL_H
#define CANIMAL_H

#include <string>
#include <iostream>

class CAnimal
{
    public:
        /// Constructor/destructor
        CAnimal();
        virtual ~CAnimal();

        /// Set functions
        void setWhoAmI(std::string input);
        void setHowDoIMove(std::string input);

        /// cout functions
        void whoAmI();
        void howDoIMove();

    protected:

    private:
        std::string strWhoAmI;
        std::string strHowDoIMove;
};

#endif // CANIMAL_H
