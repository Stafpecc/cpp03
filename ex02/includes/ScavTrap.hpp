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
};

#endif /* SCAVTRAP_HPP */