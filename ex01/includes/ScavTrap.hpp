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

    private:
        std::string _name;
        int         _hitPoint;
        int         _energyPoint;
        int         _attackDamage;
        bool        _gateKeeperMode;
};

#endif /* SCAVTRAP_HPP */