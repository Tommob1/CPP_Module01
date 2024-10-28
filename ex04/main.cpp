/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:42:57 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/29 08:55:42 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <search> <replace>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: The search string (s1) cannot be empty." << std::endl;
        return (1);
    }

    std::ifstream inputFile(filename);
    if (!inputFile)
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return (1);
    }
    
    return (0);
}