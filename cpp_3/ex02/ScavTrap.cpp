/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:16:37 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/24 20:47:57 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Constructor Called " << std::endl;
    this->Name = "";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap Constructor Called" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &NewScavTrap)
{
    std::cout << "ScavTrap copy Constructor called" << std::endl;
    *this = NewScavTrap ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "ScavTrap Copy assignement operator called" << std::endl;
    this->Name = copy.Name;
    this->Hit_points = copy.Hit_points;
    this->Energy_points = copy.Energy_points;
    this->Attack_damage = copy.Attack_damage;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode "<< std::endl; 
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        Energy_points--;
        // Hit_points--;
            std::cout << "ClapTrap " << Name << "attack " << target << ", causing " << Attack_damage << "points of damage!" << std::endl;    
    }
    else 
        std::cout << "ClapTrap " << Name << " has no enery Points " << std::endl;
}