/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miloniemaz <mniemaz@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:28 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/08/13 01:20:01 by miloniemaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

using namespace std;

ClapTrap:: ClapTrap() {
    _name = "Unknown claptrap";
    _hitPoints = _initHitpoints;
    _energyPoints = _initEnergyPoints;
    _attackDamage = _initAttackDamage;
    cout << "ClapTrap " << _name << " created" << endl;
}

ClapTrap:: ~ClapTrap() {
    cout << "ClapTrap " << _name << " deleted" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    _name = other._name;
    _attackDamage = other._attackDamage;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    cout << "ClapTrap " << _name << " created (copy)" << endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
    if (this == &other)
        return (*this);
    _name = other._name;
    _attackDamage = other._attackDamage;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    cout << "ClapTrap " << _name << " created (assignment)" << endl;
    return (*this);
}

ClapTrap:: ClapTrap(string name) {
    _name = name;
    _hitPoints = _initHitpoints;
    _energyPoints = _initEnergyPoints;
    _attackDamage = _initAttackDamage;
    cout << "ClapTrap " << _name << " created" << endl;
}

void ClapTrap::attack(const std::string& target) {

    if (_energyPoints <= 0) {
        cout << "ClapTrap " << _name 
             << " has no energy left to attack!" << endl;
        return;
    }
    if (_hitPoints <= 0) {
        cout << "ClapTrap " << _name 
             << " cannot attack because it has no hit points left!" << endl;
        return;
    }
    _energyPoints--;
    cout << "ClapTrap " << _name 
        << " attacks " << target 
        << ", causing " << _attackDamage 
        << " points of damage!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount > _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    
    cout << "ClapTrap " << _name 
         << " takes " << amount 
         << " points of damage! Remaining hit points: " 
         << _hitPoints << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints <= 0) {
        cout << "ClapTrap " << _name 
             << " has no energy left to repair!" << endl;
        return;
    }
    _hitPoints += amount;
    _energyPoints--;
    cout << "ClapTrap " << _name 
         << " repairs itself for " << amount 
         << " hit points! Remaining hit points: " 
         << _hitPoints << ", remaining energy points: " 
         << _energyPoints << endl;
}





