/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miloniemaz <mniemaz@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:20 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/08/12 01:14:42 by miloniemaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int main() {

    // cpp03 tests for claptrap functions
    ClapTrap claptrap1("ClapTrap1");
    ClapTrap claptrap2("ClapTrap2");

    claptrap1.attack("ClapTrap2");
    claptrap2.takeDamage(5);
    claptrap2.takeDamage(10);
    claptrap2.takeDamage(10);
    for (int i = 0; i < 3; i++) {
        claptrap2.beRepaired(10);
    }

    ClapTrap claptrap3 = claptrap1; // Copy constructor
    ClapTrap claptrap4;
    claptrap4 = claptrap2; // Assignment operator

    return 0;
}