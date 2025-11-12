#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name(), hitPoint(10), energyPoint(10), attackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(10), attackDamage(0) {
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : hitPoint(10), energyPoint(10), attackDamage(0) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->energyPoint = other.energyPoint;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoint <= 0)
    {
        std::cout << "Unfortunately ClapTrap ";
        std::cout << name;
        std::cout << " has 0LP.." << std::endl;
        return ;
    }
    if (energyPoint <= 0)
    {
        std::cout << "Unfortunately ClapTrap ";
        std::cout << name;
        std::cout << " has 0EP.." << std::endl;
        return ;
    }
    std::cout << "ClapTrap ";
    std::cout << name;
    std::cout << " attacks ";
    std::cout << target;
    std::cout << ", causing " ;
    std::cout << attackDamage;
    std::cout << " points of damage !" << std::endl;
    energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoint <= 0)
    {
        std::cout << "Unfortunately ";
        std::cout << name;
        std::cout << " has 0LP.. STOP HIT HIM !" << std::endl;
        return ;
    }
    hitPoint -= amount;
    std::cout << name;
    std::cout << " was attacked and lost ";
    std::cout << amount;
    std::cout << " points of damage !" << std::endl;
    if (hitPoint <= 0)
    {
        std::cout << name;
        std::cout << ": STAIRS ?! NOOOOOO! Good grief Jack";
        std::cout << ", how did you know stairs were my ONLY weakness ?!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoint <= 0)
    {
        std::cout << "Unfortunately ";
        std::cout << name;
        std::cout << " has 0LP.." << std::endl;
        return ;
    }
    if (energyPoint <= 0)
    {
        std::cout << "Unfortunately ";
        std::cout << name;
        std::cout << " has 0EP.." << std::endl;
        return ;
    }
    hitPoint += amount;
    std::cout << name;
    std::cout << " repairs itself by ";
    std::cout << amount;
    std::cout << " life points." << std::endl;
    energyPoint--;
}

void ClapTrap::debug() {
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
    std::cout << "\n-----------------------------" << std::endl;
    std::cout << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}