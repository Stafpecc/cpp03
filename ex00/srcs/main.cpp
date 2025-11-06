#include "ClapTrap.hpp"
#include "iostream"

int main( void ) {
    ClapTrap cl4ptrap("Hunter of the Arc");

    cl4ptrap.debug();
    cl4ptrap.attack("Handsome");
    cl4ptrap.beRepaired(10);
    cl4ptrap.takeDamage(3);
    cl4ptrap.beRepaired(1);
    cl4ptrap.debug();
    cl4ptrap.takeDamage(10);
    cl4ptrap.attack("Butt stallion");
    cl4ptrap.debug();

    ClapTrap p5ych0("mutant psycho");
    p5ych0.debug();
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
    p5ych0.debug();
}
