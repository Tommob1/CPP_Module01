/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:10:47 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/01 17:28:33 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./Harl_filter <level>" << std::endl;
        return (1);
    }
    Harl harl;
    std::string level = argv[1];
    harl.complain(level);
    
    return (0);
}