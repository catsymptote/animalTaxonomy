#include "CAnimal.h"

std::string strWhoAmI;
std::string strHowDoIMove;


CAnimal::CAnimal()
{
    //ctor
}

CAnimal::~CAnimal()
{
    //dtor
}


void CAnimal::setWhoAmI(std::string input)
{
    /*
    std::string tmp;
    std::cout << "#test" << std::endl;
    std::getline(std::cin, tmp);
    std::cout << "#test" << std::endl;
    this->strWhoAmI = tmp;
    std::cout << "#test" << std::endl;
    */
    this->strWhoAmI = input;
}

void CAnimal::setHowDoIMove(std::string input)
{
    //std::getline(std::cin, strHowDoIMove);
    this->strHowDoIMove = input;
}


void CAnimal::whoAmI()
{
    std::cout << strWhoAmI << " ";
}

void CAnimal::howDoIMove()
{
    std::cout << strHowDoIMove << std::endl;
}
