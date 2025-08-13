/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miloniemaz <mniemaz@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:19:06 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/08/13 01:24:34 by miloniemaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "./ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap {
	protected:
		static const unsigned int _initHitPoints    = 100;
		static const unsigned int _initEnergyPoints = 50;
		static const unsigned int _initAttackDamage = 20;

    public:
        ScavTrap();
		ScavTrap(const ScavTrap &scavTrap);
		ScavTrap &operator=(const ScavTrap &rhs);
		~ScavTrap();

		ScavTrap(std::string name);
		void attack(const std::string& target);
        void guardGate();
};

#endif