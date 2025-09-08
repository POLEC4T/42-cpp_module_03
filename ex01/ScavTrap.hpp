/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:19:06 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/08 15:05:13 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "./ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();

		ScavTrap(std::string name);
		virtual void attack(const std::string& target);
        virtual void guardGate();
};

#endif