/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 10:16:29 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/06 23:44:26 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(const FragTrap &NewFragTrap);
    FragTrap(const std::string Name);
    FragTrap &operator=( const FragTrap &copy);
    void highFivesGuys();
    ~FragTrap();
};

#endif