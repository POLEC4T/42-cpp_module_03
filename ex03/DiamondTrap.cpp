// DiamondTrap.cpp
#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
: ClapTrap("Unknown_clap_name"), FragTrap(), ScavTrap(), _name("Unknown") {
    _hitPoints = FragTrap::_initHitPoints;
    _energyPoints = ScavTrap::_initEnergyPoints;
    _attackDamage = FragTrap::_initAttackDamage;
    std::cout << "DiamondTrap " << _name << " created\n";
}

DiamondTrap::DiamondTrap(const std::string& name)
: ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name) {
    _hitPoints = FragTrap::_initHitPoints;
    _energyPoints = ScavTrap::_initEnergyPoints;
    _attackDamage = FragTrap::_initAttackDamage;
    std::cout << "DiamondTrap " << _name << " created\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
: ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name) {
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
    std::cout << "DiamondTrap " << _name << " destroyed\n";
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name
              << " | ClapTrap name: " << ClapTrap::_name << std::endl;
}