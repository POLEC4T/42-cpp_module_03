/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:19:06 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/08 16:07:14 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "./ClapTrap.hpp"

class FragTrap: public ClapTrap {
    public:
        FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &other);
		~FragTrap();

		FragTrap(std::string name);
        virtual void highFivesGuys();
};

#endif