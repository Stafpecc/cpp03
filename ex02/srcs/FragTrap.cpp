#include "FragTrap.hpp"
#include "iostream"

FragTrap::FragTrap() : ClapTrap(), _hitPoint(100), _energyPoint(100), _attackDamage(30) {
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _name(name), _hitPoint(100), _energyPoint(100), _attackDamage(30) {
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other), _hitPoint(100), _energyPoint(100), _attackDamage(30) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_hitPoint <= 0)
    {
        std::cout << "Unfortunately ";
        std::cout << _name;
        std::cout << " has 0LP.." << std::endl;
        return ;
    }
    if (_energyPoint == 0)
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
    _energyPoint -= 1;
}

void FragTrap::debug() {
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

void FragTrap::highFivesGuys(void) {
    std::cout << "High-fives bro ?" << std::endl;
}