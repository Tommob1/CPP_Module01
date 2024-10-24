/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:01:56 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 15:11:09 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    int i;
    i = 0;

    Zombie *zombieHorde;
    zombieHorde = new Zombie[N];

    while(i < N)
    {
        zombieHorde[i] = Zombie(name);
        i++;
    }
    return(zombieHorde);
}