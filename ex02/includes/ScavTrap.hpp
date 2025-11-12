#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "string"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &other);
        ScavTrap(std::string name);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
        void debug();

    protected:
        bool    gateKeeperMode;

    private:
        static unsigned int const    _setHitPoint = 100;
        static unsigned int const    _setEnergyPoint = 50;
        static unsigned int const    _setAttackDamage = 20;
};

#endif /* SCAVTRAP_HPP */