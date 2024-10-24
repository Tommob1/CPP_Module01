/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:30:25 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 14:54:24 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    this->_name = name;
    std::cout << _name << ": created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << ": destroyed" << std::endl;
}

void Zombie::announce() const
{
    std::cout << _name << ": Braiiiiiiinnnzzz..." << std::endl;
}
