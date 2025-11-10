#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "iostream"

int main( void ) {
    ClapTrap cl4ptrap("Hunter of the Arc");
    ScavTrap p5ych0("mutant psycho");
    FragTrap l1l1th("Siren");

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
    p5ych0.beRepaired(1);

    l1l1th.debug();
    l1l1th.highFivesGuys();
    l1l1th.takeDamage(100);
    l1l1th.debug();
}
