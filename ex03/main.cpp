/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miloniemaz <mniemaz@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:20 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/08/13 01:33:59 by miloniemaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

static void sep(const char* t) { 
    std::cout << "\n-- " << t << " --\n"; 
}

int main() {
    sep("construction + whoAmI + capacities");
    DiamondTrap d1("Diamond");
    d1.whoAmI();
    d1.guardGate();
    d1.highFivesGuys();

    sep("Attributes");
    std::cout << "Hit Points: " << d1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << d1.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << d1.getAttackDamage() << std::endl;


    sep("attack (ScavTrap::attack)");
    d1.attack("target");

   
    sep("Destroyers");
    return 0;
}