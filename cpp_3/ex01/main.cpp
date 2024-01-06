/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:16:06 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/07 00:00:27 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavtrap(" JOHN ");
    scavtrap.attack(" JACK ");
    scavtrap.takeDamage(3);
    scavtrap.beRepaired(2);
    scavtrap.guardGate();
    scavtrap.attack(" JASMINE ");
    scavtrap.takeDamage(15);
    
    return 0;
}