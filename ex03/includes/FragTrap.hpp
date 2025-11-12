#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "string"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap &other);
        FragTrap(std::string name);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();

        void highFivesGuys();

    protected:
        static unsigned int const    _setHitPoint = 100;
        static unsigned int const    _setEnergyPoint = 100;
        static unsigned int const    _setAttackDamage = 30;
};

#endif /* FRAGTRAP_HPP */