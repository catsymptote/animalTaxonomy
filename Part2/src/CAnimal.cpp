#include "CAnimal.h"


const std::string   taxonomy;
std::string         specimen;
std::string         name;
std::string         sound;
float               velocity;


/// Constructors.
CAnimal::CAnimal(){}
CAnimal::CAnimal(std::string specimen, std::string name, std::string sound, float velocity)
{
    this->specimen  = specimen;
    this->name      = name;
    this->sound     = sound;
    this->velocity  = velocity;
}
CAnimal::~CAnimal(){}


/// Set methods.
void CAnimal::setSpecimen(std::string specimen)
{
    this->specimen  = specimen;
}
void CAnimal::setName(std::string name)
{
    this->name      = name;
}
void CAnimal::setSound(std::string sound)
{
    this->sound     = sound;
}
void CAnimal::setVelocity(float velocity)
{
    this->velocity  = velocity;
}


/// Get methods
std::string CAnimal::getTaxonomy()
{
    return taxonomy;
}
std::string CAnimal::getSpecimen()
{
    return specimen;
}
std::string CAnimal::getName()
{
    return name;
}
std::string CAnimal::getSound()
{
    return sound;
}
float CAnimal::getVelocity()
{
    return velocity;
}


/// Assignment specific methods.
std::string CAnimal::wakeUp()
{
    return sound;
}

std::string CAnimal::specimenPresentation()
{
    std::string specPres = "My name is " + name + " and I am a " + specimen + ".";
    return specPres;
}

float CAnimal::moveAll(float seconds)
{
    float distance = velocity * seconds;
    return distance;
}
