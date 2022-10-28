/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:41:50 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/28 16:57:22 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void printStats(FragTrap &ft)
{
	std::cout << "----------------------" << std::endl;
	std::cout << ft.getName() << ":" << std::endl;
	std::cout << "Type		: FragTrap" << std::endl;
	std::cout << "Health		: " << ft.getHealth() << std::endl;
	std::cout << "Energy		: " << ft.getEnergy() << std::endl;
	std::cout << "Attack Damage	: " << ft.getAttackDamage() << std::endl;
	std::cout << "----------------------" << std::endl << std::endl;
}

void printStats(ScavTrap &st)
{
	std::cout << "----------------------" << std::endl;
	std::cout << st.getName() << ":" << std::endl;
	std::cout << "Type		: ScavTrap" << std::endl;
	std::cout << "Health		: " << st.getHealth() << std::endl;
	std::cout << "Energy		: " << st.getEnergy() << std::endl;
	std::cout << "Attack Damage	: " << st.getAttackDamage() << std::endl;
	std::cout << "----------------------" << std::endl << std::endl;
}

void printStats(ClapTrap &ct)
{
	std::cout << "----------------------" << std::endl;
	std::cout << ct.getName() << ":" << std::endl;
	std::cout << "Type		: ClapTrap" << std::endl;
	std::cout << "Health		: " << ct.getHealth() << std::endl;
	std::cout << "Energy		: " << ct.getEnergy() << std::endl;
	std::cout << "Attack Damage	: " << ct.getAttackDamage() << std::endl;
	std::cout << "----------------------" << std::endl << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./run <1,2,3>" << std::endl;
		return (1);
	}
	std::string arg = av[1];

	// Test des constructeurs & attack
	if (arg == "1")
	{
		FragTrap jean;
		if (DEBUG){std::cout << "---------" << std::endl;}
		ScavTrap muche;
		if (DEBUG){std::cout << "---------" << std::endl;}
		ClapTrap truc;

		printStats(jean);
		printStats(muche);
		printStats(truc);
		jean.attack("bad guy");
		muche.attack("bad guy");
		truc.attack("bad guy");
	}


	// Test des méthodes
	else if (arg == "2")
	{
		FragTrap louis("Louis");
		printStats(louis);
		louis.attack("a random enemy");
		louis.highFivesGuys();
		louis.takeDamage(5);
		louis.beRepaired(3);
		printStats(louis);
	}

	// Test des copies
	else if (arg == "3")
	{
		FragTrap machin("machin");
		if (DEBUG){std::cout << "---------" << std::endl;}
		FragTrap bidule = machin;
		if (DEBUG){std::cout << "---------" << std::endl;}
		bidule.setName("bidule");
		FragTrap chouette(bidule);
		chouette.setName("chouette");
		bidule.takeDamage(3);
		chouette.takeDamage(7);
		printStats(machin);
		printStats(bidule);
		printStats(chouette);
	}

	else
	{
		std::cout << "Usage: ./run <1,2,3>" << std::endl;
		return (1);
	}
	return 0;
}