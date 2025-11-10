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

        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        virtual void debug();

        virtual ~ClapTrap();

    protected:
        std::string _name;
        int         _hitPoint;
        int         _energyPoint;
        int         _attackDamage;
};

#endif /* CLAPTRAP_HPP */