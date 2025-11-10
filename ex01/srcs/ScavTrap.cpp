#include "ScavTrap.hpp"
#include "iostream"

ScavTrap::ScavTrap() : ClapTrap(), _hitPoint(100), _energyPoint(50), _attackDamage(20), _gateKeeperMode(false) {
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _name(name), _hitPoint(100), _energyPoint(50), _attackDamage(20), _gateKeeperMode(false) {
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other), _hitPoint(100), _energyPoint(50), _attackDamage(20), _gateKeeperMode(false) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_hitPoint <= 0)
    {
        std::cout << "Unfortunately ";
        std::cout << _name;
        std::cout << " has 0LP.." << std::endl;
        return ;
    }
    if (_energyPoint <= 0)
    {
        std::cout << "Unfortunately ";
        std::cout << _name;
        std::cout << " has 0EP.." << std::endl;
        return ;
    }
    std::cout << _name;
    std::cout << " attacks ";
    std::cout << target;
    std::cout << ", causing " ;
    std::cout << _attackDamage;
    std::cout << " points of damage !" << std::endl;
    _energyPoint--;
}

void ScavTrap::debug() {
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "\n           DEBUG\n" << std::endl;
    std::cout << "- Name -> ";
    std::cout << _name << std::endl;
    std::cout << "- Life Points -> ";
    std::cout << _hitPoint << std::endl;
    std::cout << "- Energy Points -> ";
    std::cout << _energyPoint << std::endl;
    std::cout << "- Damage output -> ";
    std::cout << _attackDamage << std::endl;
    std::cout << "- Gate keeper mode -> ";
    std::cout << _gateKeeperMode << std::endl;
    std::cout << "\n-----------------------------" << std::endl;
    std::cout << std::endl;
}

void ScavTrap::guardGate() {
    if (this->_gateKeeperMode == true)
    {
        std::cout << _name;
        std::cout << " has already in gate keeper mode !" << std::endl;
        return ;
    }
    this->_gateKeeperMode = true;
    std::cout << _name;
    std::cout << " passed in gate keeper mode !" << std::endl;
}
