#include "DiamondTrap.hpp"
#include "iostream"

DiamondTrap::DiamondTrap() : ClapTrap(), name() {
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->hitPoint = FragTrap::_setHitPoint;
    this->energyPoint = ScavTrap::_setEnergyPoint;
    this->attackDamage = FragTrap::_setAttackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name) {
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->hitPoint = FragTrap::_setHitPoint;
    this->energyPoint = ScavTrap::_setEnergyPoint;
    this->attackDamage = FragTrap::_setAttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
        this->name = other.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am ";
    std::cout << this->name; 
    std::cout << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
