/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:46:30 by mniemaz           #+#    #+#             */
/*   Updated: 2025/09/08 16:02:26 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
: 	ClapTrap("Unknown_clap_name"),
	FragTrap("Unknown_clap_name"),
	ScavTrap("Unknown_clap_name"),
	_name("Unknown_diamond")
{
    _hitPoints = FragTrap::_initHitPoints;
    _energyPoints = ScavTrap::_initEnergyPoints;
    _attackDamage = FragTrap::_initAttackDamage;
    std::cout << "DiamondTrap " << _name << " created\n";
}

DiamondTrap::DiamondTrap(const std::string& name)
:   ClapTrap(name + "_clap_name"),
    FragTrap(name + "_clap_name"),
    ScavTrap(name + "_clap_name"),
    _name(name)
{
    _hitPoints = FragTrap::_initHitPoints;
    _energyPoints = ScavTrap::_initEnergyPoints;
    _attackDamage = FragTrap::_initAttackDamage;
    std::cout << "DiamondTrap " << _name << " created\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
:	ClapTrap(copy),
	FragTrap(copy),
	ScavTrap(copy),
	_name(copy._name) 
{
    std::cout << "DiamondTrap " << _name << " created (copy)\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        _name = other._name;
    }
    std::cout << "DiamondTrap " << _name << " assigned\n";
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " deleted\n";
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name
              << " | ClapTrap name: " << ClapTrap::_name << std::endl;
}