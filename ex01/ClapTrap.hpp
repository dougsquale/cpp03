/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:41:57 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/28 16:59:23 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define DEBUG 1

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName() const;
		int			getHealth() const;
		int			getEnergy() const;
		int			getAttackDamage() const;
		void		setName(std::string name);
		void		setHealth(int health);
		void		setEnergy(int energy);
		void		setAttackDamage(int attackDamage);


		ClapTrap &		operator=( ClapTrap const & rhs );

	protected:

		std::string	_name;
		int			_health;
		int			_energy;
		int			_attackDamage;

};

#endif /* ******************************************************** CLAPTRAP_H */