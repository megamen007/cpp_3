/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:16:14 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/06 23:09:43 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(const std::string Name);
    ScavTrap(const ScavTrap &NewScavTrap);
    ScavTrap &operator=(const ScavTrap& copy);
    void guardGate();
    void attack(const std::string& target);
    ~ScavTrap();
};

#endif 