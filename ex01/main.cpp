/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:01:45 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/24 15:15:07 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    int N;
    int i;
    N = 3;
    i = 0;

    horde = zombieHorde(N, "Horde");

    while (i < N)
    {
        std::cout << "Index " << i << ": ";
        horde[i].announce();
        i++;
    }

    delete[] horde;
    return (0);
}