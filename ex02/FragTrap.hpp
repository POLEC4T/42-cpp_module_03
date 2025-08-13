/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miloniemaz <mniemaz@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:19:06 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/08/12 02:53:54 by miloniemaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "./ClapTrap.hpp"

class FragTrap: public ClapTrap {
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