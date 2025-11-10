#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "string"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap &other);
        FragTrap(std::string name);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();

        void attack(const std::string& target);
        void debug();
        void highFivesGuys(void);
};

#endif /* FRAGTRAP_HPP */