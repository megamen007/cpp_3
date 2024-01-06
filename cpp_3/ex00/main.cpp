/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:15:55 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/06 23:01:30 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap(" JOHN ");
    claptrap.attack(" JACK ");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);
    claptrap.attack(" JASMINE ");
    claptrap.takeDamage(15);
    return 0;
}