/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:19:06 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/03 13:46:42 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "./ClapTrap.hpp"

class FragTrap: public virtual ClapTrap {

	protected:
		static const unsigned int _initHitPoints    = 100;
		static const unsigned int _initEnergyPoints = 100;
		static const unsigned int _initAttackDamage = 30;

    public:
        FragTrap();
		FragTrap(const FragTrap &fragTrap);
		FragTrap &operator=(const FragTrap &rhs);
		~FragTrap();

		FragTrap(std::string name);
		virtual void attack(const std::string& target);
        void highFivesGuys();
};

#endif