/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:16:16 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/29 13:50:10 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug()
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl;
}

void Harl::warning()
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() 
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(const std::string& level)
{
    int i;
    i = 0;

    void (Harl::*complaints[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    while (i < 4)
    {
        if (levels[i] == level)
        {
            (this->*complaints[i])();
            return;
        }
        i++;
    }
    std::cout << "Invalid complaint level: " << level << std::endl;
}