/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miloniemaz <mniemaz@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:20 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/08/12 02:35:20 by miloniemaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main() {

    ScavTrap scavtrap1("ScavTrap1");
    scavtrap1.takeDamage(5);
    ScavTrap scavtrap2(scavtrap1); // Copy constructor

    scavtrap2.takeDamage(5);
    // assignment operator
    ScavTrap scavtrap3;
    scavtrap3 = scavtrap2;

    scavtrap3.attack("another scavtrap");

    scavtrap1.guardGate();
    return 0;
}