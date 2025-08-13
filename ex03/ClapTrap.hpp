/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miloniemaz <mniemaz@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:31 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/08/13 01:33:22 by miloniemaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {

    protected:
        const static unsigned int _initHitpoints = 10;
        const static unsigned int _initEnergyPoints = 10;
        const static unsigned int _initAttackDamage = 10;
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;

    public:
        ClapTrap();
        virtual ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &other);
        ClapTrap (const ClapTrap &other);

        ClapTrap(std::string name);
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        unsigned int getHitPoints() const { return _hitPoints; }
        unsigned int getEnergyPoints() const { return _energyPoints; }
        unsigned int getAttackDamage() const { return _attackDamage; }
};

#endif