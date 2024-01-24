/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:16:32 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/24 20:51:16 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ClapTrap claptrap(" JOHN ");
    claptrap.attack(" JACK ");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);
    claptrap.attack(" JASMINE ");
    claptrap.takeDamage(15);
    std::cout << "--------------------------" << std::endl;
    ScavTrap scavtrap(" [*1] ");
    scavtrap.attack(" [*2] ");
    scavtrap.takeDamage(3);
    scavtrap.beRepaired(2);
    scavtrap.guardGate();
    scavtrap.attack(" [*3] ");
    scavtrap.takeDamage(15);
    std::cout << "--------------------------" << std::endl;
    FragTrap fragtrap("Frag");
    fragtrap.highFivesGuys();
    fragtrap.attack("garf");
    fragtrap.takeDamage(20);

}