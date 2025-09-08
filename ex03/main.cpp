/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:20 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/08 16:42:22 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap *d1 = new DiamondTrap ("Diamond");
    std::cout << "\n-------\n"; 
    d1->whoAmI();
    d1->guardGate();
    d1->highFivesGuys();

    std::cout << "\n-------\n"; 
    d1->attack("target");

    std::cout << "\n-------\n"; 
	delete d1;
    return 0;
}