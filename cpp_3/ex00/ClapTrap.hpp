/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:15:52 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/06 22:41:38 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
    private:
    std::string Name;
    unsigned int Hit_points;
    unsigned int Energy_points;
    unsigned int Attack_damage;
    public:
    ClapTrap();
    ClapTrap(const ClapTrap &new_ClasTrap);
    ClapTrap &operator=(const ClapTrap &copy);
    ClapTrap(std::string WName);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
    
};

#endif