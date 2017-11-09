#ifndef CANIMAL_H
#define CANIMAL_H

#include <string>


class CAnimal
{
    public:
        /// Constructors.
        CAnimal();
        CAnimal(std::string specimen, std::string name, std::string sound, float velocity);
        virtual ~CAnimal();

        /// Set methods.
        void            setSpecimen(std::string specimen);
        void            setName(std::string name);
        void            setSound(std::string sound);
        void            setVelocity(float velocity);

        /// Get methods
        std::string     getTaxonomy();
        std::string     getSpecimen();
        std::string     getName();
        std::string     getSound();
        float           getVelocity();

        /// Assignment specific methods.
        std::string     wakeUp();                   /// Get animal sound (as a sentence).
        std::string     specimenPresentation();     /// Get animal name and specimen (as a sentence).
        float           moving(float seconds);      /// Return how far the animal moves in x amount of seconds (as a sentence).

    protected:
        const std::string   taxonomy;   /// The taxonomic order of the animal.
        std::string         specimen;   /// The animal specimen.
        std::string         name;       /// The animals name.
        std::string         sound;      /// The sound the animal makes (woof, meow, etc).
        float               velocity;   /// How fast the animal moves (meters per second).

    private:
};

#endif // CANIMAL_H
