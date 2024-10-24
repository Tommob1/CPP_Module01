/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:30:15 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 14:58:49 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *newzombie;
    
    newzombie = newZombie("New Zombie");
    newzombie->announce();
    randomChump("Random Zombie");
    delete newzombie;
    return(0);
}