/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:20 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/03 13:40:08 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main() {

    ScavTrap scavtrap1("ScavTrap1");
    scavtrap1.takeDamage(5);
    ScavTrap scavtrap2(scavtrap1);

    scavtrap2.takeDamage(5);

    scavtrap2.attack("another scavtrap");

    scavtrap1.guardGate();
    return 0;
}	