/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:16:17 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/06 23:33:15 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name = "";
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    std::cout << "Default Constructor Called ." << std::endl;
}

ClapTrap::ClapTrap(std::string WName)
{
    this->Name = WName;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    std::cout << "Constructor Called for" << WName << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &newClassTrap)
{
    *this = newClassTrap;
    std::cout << "Copy Constructor Called ." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    this->Name = copy.Name;
    this->Hit_points = copy.Hit_points;
    this->Energy_points = copy.Energy_points;
    this->Attack_damage = copy.Attack_damage;
    std::cout << "Copy assignement operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Deconstructor Called ." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        Energy_points--;
        Hit_points--;
            std::cout << "ClapTrap " << Name << "attack " << target << ", causing " << Attack_damage << "points of damage!" << std::endl;    
    }
    else 
        std::cout << "ClapTrap " << Name << " has no enery Points " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points > 0 && Hit_points > 0)
    {
        Hit_points += amount;
        Energy_points--;
        std::cout << "ClapTrap  " << Name << "is repaired for " << amount << " hit points! " << std::endl;  
    }
    else
       std::cout << "ClapTrap  " << Name << "can't be repaired, it has no hit points! " << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points > 0)
    {   
        if (Hit_points <= amount)
            Hit_points = 0;
        else 
            Hit_points -= amount;
            
        std::cout << "ClapTrap " << Name << "takes " << amount << " points of damage ! " << std::endl;
    }
    else
        std::cout <<  "ClapTrap " << Name << "can't take damage ! BECAUSE IS ALREADY out of hit points" << std::endl;
}