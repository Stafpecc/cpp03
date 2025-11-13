#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _hitPoint(10), _energyPoint(10), _attackDamage(0) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoint = other._hitPoint;
        this->_energyPoint = other._energyPoint;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
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

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoint <= 0)
    {
        std::cout << "Unfortunately ";
        std::cout << _name;
        std::cout << " has 0LP.. STOP HIT HIM !" << std::endl;
        return ;
    }
    _hitPoint -= amount;
    std::cout << _name;
    std::cout << " was attacked and lost ";
    std::cout << amount;
    std::cout << " points of damage !" << std::endl;
    if (_hitPoint <= 0)
    {
        std::cout << _name;
        std::cout << ": STAIRS ?! NOOOOOO! Good grief Jack";
        std::cout << ", how did you know stairs were my ONLY weakness ?!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
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
    if (_hitPoint == 10)
    {
        std::cout << _name;
        std::cout << " is already at full HP, look at it !" << std::endl;
        std::cout << _name;
        std::cout << ": Look at me everyone, I'm dancing, I'M DANCING !" << std::endl;
        return ;
    }
    if (_hitPoint + amount > 10)
        _hitPoint = 10;
    else
        _hitPoint += amount;
    std::cout << _name;
    std::cout << " repairs itself by ";
    std::cout << amount;
    std::cout << " life points." << std::endl;
    _energyPoint--;
}

void ClapTrap::debug() {
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
    std::cout << "\n-----------------------------" << std::endl;
    std::cout << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}