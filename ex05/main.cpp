/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:16:22 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/29 13:55:07 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
    Harl harl;

    std::cout << "Testing DEBUG level:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "Testing INFO level:" << std::endl;
    harl.complain("INFO");

    std::cout << "Testing WARNING level:" << std::endl;
    harl.complain("WARNING");

    std::cout << "Testing ERROR level:" << std::endl;
    harl.complain("ERROR");

    std::cout << "Testing INVALID level:" << std::endl;
    harl.complain("INVALID");

    return (0);
}