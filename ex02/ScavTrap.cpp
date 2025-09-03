/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:19:06 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/03 12:42:23 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

using namespace std;

ScavTrap::ScavTrap() : ClapTrap("Unknown scavtrap") {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    cout << "ScavTrap " << _name << " created" << endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    cout << "ScavTrap " << _name << " created" << endl;
}

ScavTrap::~ScavTrap() {
    cout << "ScavTrap " << _name << " deleted" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    cout << "ScavTrap " << _name << " created (copy)" << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
    if (this == &other)
        return (*this);
    ClapTrap::operator=(other);
    cout << "ScavTrap " << _name << " created (assignment)" << endl;
    return (*this);
}

void ScavTrap::attack(const std::string& target) {

    if (_energyPoints <= 0) {
        cout << "ScavTrap " << _name 
             << " has no energy left to attack!" << endl;
        return;
    }
    if (_hitPoints <= 0) {
        cout << "ScavTrap " << _name 
             << " cannot attack because it has no hit points left!" << endl;
        return;
    }
    _energyPoints--;
    cout << "ScavTrap " << _name 
        << " attacks " << target 
        << ", causing " << _attackDamage 
        << " points of damage!" << endl;
}

void ScavTrap::guardGate() {
    cout << "ScavTrap " << _name <<
        " is now in gate keeper mode!" << endl; 
}