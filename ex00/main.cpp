/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:41:50 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/28 15:40:33 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void printStats(ClapTrap &ct)
{
	std::cout << "----------------------" << std::endl;
	std::cout << ct.getName() << ":" << std::endl;
	std::cout << "Health		: " << ct.getHealth() << std::endl;
	std::cout << "Energy		: " << ct.getEnergy() << std::endl;
	std::cout << "Attack Damage	: " << ct.getAttackDamage() << std::endl;
	std::cout << "----------------------" << std::endl << std::endl;
}

int	main(void)
{
	ClapTrap jean("Jean");
	jean.setAttackDamage(3);
	printStats(jean);

	jean.attack("Bob");
	jean.takeDamage(5);
	jean.beRepaired(3);
	printStats(jean);
	
	ClapTrap bob = jean;
	bob.setName("Bob");
	bob.takeDamage(4);
	printStats(bob);
	printStats(jean);

	return 0;
}