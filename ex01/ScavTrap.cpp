#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
	if (DEBUG)
		std::cout << "ScavTrap default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	if (DEBUG)
		std::cout << "ScavTrap constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap()
{
	if (DEBUG)
		std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_name = src.getName();
	this->_health = src.getHealth();
	this->_energy = src.getEnergy();
	this->_attackDamage = src.getAttackDamage();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	if (DEBUG)
		std::cout << "ScavTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if (DEBUG)
		std::cout << "ScavTrap assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_name = (rhs.getName());
		this->_health = (rhs.getHealth());
		this->_energy = (rhs.getEnergy());
		this->_attackDamage = (rhs.getAttackDamage());
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " has entered in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy <= 0)
	{
		std::cout << _name << " doesn't have enough energy to attack " << target << std::endl;
		return ;
	}
	_energy--;
	std::cout << "(ScavTrap) " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */