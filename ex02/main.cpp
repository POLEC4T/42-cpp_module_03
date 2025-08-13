/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miloniemaz <mniemaz@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:20 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/08/12 02:38:48 by miloniemaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

int main() {

    // replace every scav by frag

    FragTrap fragtrap1("FragTrap1");
    fragtrap1.takeDamage(5);
    FragTrap fragtrap2(fragtrap1); // Copy constructor

    fragtrap2.takeDamage(5);
    // assignment operator
    FragTrap fragtrap3;
    fragtrap3 = fragtrap2;

    fragtrap3.attack("another fragtrap");

    fragtrap1.highFivesGuys();
    return 0;
}