#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap( FragTrap const & src );
		~FragTrap();

		void highFivesGuys(void);
		void attack(const std::string& target);

		FragTrap &		operator=( FragTrap const & rhs );

	private:

};

#endif /* ******************************************************** FRAGTRAP_H */