/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:46:30 by mniemaz           #+#    #+#             */
/*   Updated: 2025/09/03 13:46:32 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
: 	ClapTrap("Unknown_clap_name"),
	FragTrap(),
	ScavTrap(),
	name("Unknown_diamond")
{
    _hitPoints = FragTrap::_initHitPoints;
    _energyPoints = ScavTrap::_initEnergyPoints;
    _attackDamage = FragTrap::_initAttackDamage;
    std::cout << "DiamondTrap " << name << " created\n";
}

DiamondTrap::DiamondTrap(const std::string& newName)
:   ClapTrap(newName + "_clap_name"),
    FragTrap(newName + "_clap_name"),
    ScavTrap(newName + "_clap_name"),
    name(newName)
{
    _hitPoints = FragTrap::_initHitPoints;
    _energyPoints = ScavTrap::_initEnergyPoints;
    _attackDamage = FragTrap::_initAttackDamage;
    std::cout << "DiamondTrap " << name << " created\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
:	ClapTrap(other),
	FragTrap(other),
	ScavTrap(other),
	name(other.name) 
{
    std::cout << "DiamondTrap " << name << " created (copy)\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        name = other.name;
    }
    std::cout << "DiamondTrap " << name << " assigned\n";
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " deleted\n";
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << name
              << " | ClapTrap name: " << ClapTrap::_name << std::endl;
}