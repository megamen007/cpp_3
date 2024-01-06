/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:16:26 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/07 00:02:13 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Default Constructor Called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << Name << "High Five!" << std::endl;
}

FragTrap::FragTrap(const std::string Name) : ClapTrap(Name)
{
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    std::cout << "FragTrap Constructor called " << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    this->Name = copy.Name;
    this->Hit_points = copy.Hit_points;
    this->Energy_points = copy.Energy_points;
    this->Attack_damage = copy.Attack_damage;
    std::cout << "Copy assignement operator called" << std::endl;
    return *this;
}

FragTrap::FragTrap(const FragTrap &NewFragTrap)
{
    *this = NewFragTrap;
    std::cout << "copy Constructor called" << std::endl;
}