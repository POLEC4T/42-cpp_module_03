/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:20 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/08 16:35:10 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

int main() {
	FragTrap fragtrap1("FragTrap1");
	fragtrap1.takeDamage(5);

	ClapTrap *copy = new FragTrap(fragtrap1);
	copy->takeDamage(5);
	copy->attack("another fragtrap");
	copy->highFivesGuys();
	delete copy;
	return 0;
}