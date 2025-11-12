#include "../includes/FragTrap.hpp"
#include "iostream"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
    this->hitPoint = _setHitPoint;
    this->energyPoint = _setEnergyPoint;
    this->attackDamage = _setAttackDamage;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoint = _setHitPoint;
    this->energyPoint = _setEnergyPoint;
    this->attackDamage = _setAttackDamage;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    this->hitPoint = _setHitPoint;
    this->energyPoint = _setEnergyPoint;
    this->attackDamage = _setAttackDamage;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "High-fives bro ?" << std::endl;
}
