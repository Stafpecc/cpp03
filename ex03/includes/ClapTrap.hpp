#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "string"

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &other);
        ClapTrap(std::string name);
        ClapTrap& operator=(const ClapTrap& other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void debug();

        virtual ~ClapTrap();

    protected:
        std::string name;
        int         hitPoint;
        int         energyPoint;
        int         attackDamage;
};

#endif /* CLAPTRAP_HPP */