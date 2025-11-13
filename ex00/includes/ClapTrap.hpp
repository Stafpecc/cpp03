#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "string"

class ClapTrap
{
	public:
		ClapTrap();

		ClapTrap(const ClapTrap &other);
		ClapTrap(std::string name);
		ClapTrap& operator=(const ClapTrap& other);


		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void debug();

		~ClapTrap();

	private:
		std::string 		_name;
		int					_hitPoint;
		int					_energyPoint;
		int					_attackDamage;
};

#endif /* CLAPTRAP_HPP */