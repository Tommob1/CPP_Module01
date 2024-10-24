/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:01:51 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 17:04:34 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie(){}

void Zombie::announce()
{
    std::cout << _name << ": Braiiiiiiinnnzzzz..." << std::endl;
}