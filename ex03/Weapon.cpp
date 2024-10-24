/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:21:42 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 21:23:03 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string type)
{
    _type = type;
}

const std::string &Weapon::getType() const
{
    return (_type);
}