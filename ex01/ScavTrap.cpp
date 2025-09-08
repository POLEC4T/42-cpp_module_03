/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:19:06 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/08 15:41:19 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Unknown scavtrap") {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " created" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " deleted" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap " << _name << " created (copy)" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
    if (this == &other)
        return (*this);
    ClapTrap::operator=(other);
    std::cout << "ScavTrap " << _name << " created (assignment)" << std::endl;
    return (*this);
}

void ScavTrap::attack(const std::string& target) {

    if (_energyPoints <= 0) {
        std::cout << "ScavTrap " << _name 
             << " has no energy left to attack!" << std::endl;
        return;
    }
    if (_hitPoints <= 0) {
        std::cout << "ScavTrap " << _name 
             << " cannot attack because it has no hit points left!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name 
        << " attacks " << target 
        << ", causing " << _attackDamage 
        << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name <<
        " is now in gate keeper mode!" << std::endl; 
}