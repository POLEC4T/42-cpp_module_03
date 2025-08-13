/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miloniemaz <mniemaz@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:31 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/08/12 01:45:47 by miloniemaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
using namespace std;

class ClapTrap {
    private:
        string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;

    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &other);
        ClapTrap (const ClapTrap &other);
    
        ClapTrap(string name);
        void attack(const string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif