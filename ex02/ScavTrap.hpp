/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miloniemaz <mniemaz@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:19:06 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/08/12 02:54:00 by miloniemaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "./ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
		ScavTrap(const ScavTrap &scavTrap);
		ScavTrap &operator=(const ScavTrap &rhs);
		~ScavTrap();

		ScavTrap(std::string name);
		virtual void attack(const std::string& target);
        void guardGate();
};

#endif