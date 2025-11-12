#include "../includes/ScavTrap.hpp"
#include "iostream"

ScavTrap::ScavTrap() : ClapTrap(), gateKeeperMode(false) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->hitPoint = _setHitPoint;
    this->energyPoint = _setEnergyPoint;
    this->attackDamage = _setAttackDamage;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), gateKeeperMode(false) {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoint = _setHitPoint;
    this->energyPoint = _setEnergyPoint;
    this->attackDamage = _setAttackDamage;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other), gateKeeperMode(false) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->hitPoint = _setHitPoint;
    this->energyPoint = _setEnergyPoint;
    this->attackDamage = _setAttackDamage;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (hitPoint <= 0)
    {
        std::cout << "Unfortunately ScavTrap ";
        std::cout << name;
        std::cout << " has 0LP.." << std::endl;
        return ;
    }
    if (energyPoint <= 0)
    {
        std::cout << "Unfortunately ScavTrap ";
        std::cout << name;
        std::cout << " has 0EP.." << std::endl;
        return ;
    }
    std::cout << "ScavTrap ";
    std::cout << name;
    std::cout << " attacks ";
    std::cout << target;
    std::cout << ", causing " ;
    std::cout << attackDamage;
    std::cout << " points of damage !" << std::endl;
    energyPoint--;
}

void ScavTrap::debug() {
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "\n           DEBUG\n" << std::endl;
    std::cout << "- Name -> ";
    std::cout << name << std::endl;
    std::cout << "- Life Points -> ";
    std::cout << hitPoint << std::endl;
    std::cout << "- Energy Points -> ";
    std::cout << energyPoint << std::endl;
    std::cout << "- Damage output -> ";
    std::cout << attackDamage << std::endl;
    std::cout << "- Gate keeper mode -> ";
    std::cout << gateKeeperMode << std::endl;
    std::cout << "\n-----------------------------" << std::endl;
    std::cout << std::endl;
}

void ScavTrap::guardGate() {
    if (this->gateKeeperMode == true)
    {
        std::cout << name;
        std::cout << " has already in gate keeper mode !" << std::endl;
        return ;
    }
    this->gateKeeperMode = true;
    std::cout << name;
    std::cout << " passed in gate keeper mode !" << std::endl;
}
