/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:20 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/08 15:49:57 by mniemaz          ###   ########.fr       */
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
    ClapTrap *d1 = new DiamondTrap ("Diamond");
    d1->whoAmI();
    d1->guardGate();
    d1->highFivesGuys();

    sep("attack (ScavTrap::attack)");
    d1->attack("target");

    sep("Destroyers");
    return 0;
}