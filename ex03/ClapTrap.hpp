/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:31 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/08 16:17:17 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {

    protected:
        const static unsigned int _initHitpoints = 10;
        const static unsigned int _initEnergyPoints = 10;
        const static unsigned int _initAttackDamage = 0;
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
        virtual void guardGate();
        virtual void highFivesGuys();
		virtual void whoAmI();

};

#endif