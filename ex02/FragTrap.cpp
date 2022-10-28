#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
	if (DEBUG)
		std::cout << "FragTrap default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	if (DEBUG)
		std::cout << "FragTrap constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap()
{
	if (DEBUG)
		std::cout << "FragTrap copy constructor called" << std::endl;
	this->_name = src.getName();
	this->_health = src.getHealth();
	this->_energy = src.getEnergy();
	this->_attackDamage = src.getAttackDamage();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	if (DEBUG)
		std::cout << "FragTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	if (DEBUG)
		std::cout << "FragTrap assignation operator called" << std::endl;
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

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " : Anyone for a high five ?" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_energy <= 0)
	{
		std::cout << _name << " doesn't have enough energy to attack " << target << std::endl;
		return ;
	}
	_energy--;
	std::cout << "(FragTrap) " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */