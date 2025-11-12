#include "DiamondTrap.hpp"
#include "iostream"

int main( void ) {
    DiamondTrap cl4ptrap("Bot");

    cl4ptrap.ClapTrap::debug();
    cl4ptrap.attack("Handsome Jack");
    cl4ptrap.takeDamage(3);
    cl4ptrap.beRepaired(1);
    cl4ptrap.ClapTrap::debug();
    cl4ptrap.attack("Butt stallion");
    cl4ptrap.whoAmI();
    cl4ptrap.guardGate();
    cl4ptrap.highFivesGuys();
}
