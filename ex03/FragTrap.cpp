/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:19:06 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/08 16:35:55 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Unknown fragtrap") {
    _hitPoints = _initHitPoints;
    _energyPoints = _initEnergyPoints;
    _attackDamage = _initAttackDamage;
    std::cout << "FragTrap " << _name << " created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    _hitPoints = _initHitPoints;
    _energyPoints = _initEnergyPoints;
    _attackDamage = _initAttackDamage;
    std::cout << "FragTrap " << _name << " created" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " deleted" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap " << _name << " created (copy)" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
    if (this == &other)
        return (*this);
    ClapTrap::operator=(other);
    std::cout << "FragTrap " << _name << " created (assignment)" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name <<
        " is now in high fives mode!" << std::endl; 
}