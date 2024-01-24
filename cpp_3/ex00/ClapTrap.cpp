/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:15:50 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/24 20:58:35 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor Called ." << std::endl;
    this->Name = "";
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string WName)
{
    std::cout << "ClapTrap Constructor Called for" << WName << std::endl;
    this->Name = WName;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &newClassTrap)
{
    std::cout << "ClapTrap Copy Constructor Called ." << std::endl;
    *this = newClassTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap Copy assignement operator called" << std::endl;
    this->Name = copy.Name;
    this->Hit_points = copy.Hit_points;
    this->Energy_points = copy.Energy_points;
    this->Attack_damage = copy.Attack_damage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Deconstructor Called ." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        Energy_points--;
            std::cout << "ClapTrap " << Name << "attack " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;    
    }
    else 
        std::cout << "ClapTrap " << Name << " has no enery Points " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount <= 0)
        std::cout << "U cant repaire the damage with negative value or 0" << std::endl;

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