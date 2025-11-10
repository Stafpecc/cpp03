#include "ScavTrap.hpp"
#include "iostream"

int main( void ) {
    ClapTrap cl4ptrap("Hunter of the Arc");
    ScavTrap p5ych0("mutant psycho");

    cl4ptrap.debug();
    cl4ptrap.attack("Handsome Jack");
    cl4ptrap.beRepaired(10);
    cl4ptrap.takeDamage(3);
    cl4ptrap.beRepaired(1);
    cl4ptrap.debug();
    cl4ptrap.takeDamage(10);
    cl4ptrap.attack("Butt stallion");
    cl4ptrap.debug();

    
    p5ych0.debug();
    p5ych0.guardGate();
    p5ych0.debug();
    p5ych0.beRepaired(1);
    p5ych0.attack("another psycho");
    p5ych0.attack("another psycho");
    p5ych0.attack("another psycho");
    p5ych0.attack("another psycho");
    p5ych0.attack("another psycho");
    p5ych0.attack("another psycho");
    p5ych0.attack("another psycho");
    p5ych0.attack("another psycho");
    p5ych0.attack("another psycho");
    p5ych0.attack("another psycho");
    p5ych0.attack("another psycho");
    p5ych0.attack("another psycho");
    p5ych0.takeDamage(100);
    p5ych0.debug();
}
