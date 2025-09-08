/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:20 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/08 16:33:50 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main() {
	ScavTrap scavtrap1("ScavTrap1");
	scavtrap1.takeDamage(5);
	
	ClapTrap *copy = new ScavTrap(scavtrap1);
	copy->takeDamage(5);
	copy->attack("another scavtrap");
	copy->guardGate();
	delete copy;
	return 0;
}	