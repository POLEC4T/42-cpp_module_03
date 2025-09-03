/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniemaz <mniemaz@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 00:35:20 by miloniemaz        #+#    #+#             */
/*   Updated: 2025/09/03 12:40:53 by mniemaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

int main() {

    FragTrap fragtrap1("FragTrap1");
    fragtrap1.takeDamage(5);
    FragTrap fragtrap2(fragtrap1);

    fragtrap2.takeDamage(5);

    fragtrap1.attack("another fragtrap");

    fragtrap1.highFivesGuys();
    return 0;
}