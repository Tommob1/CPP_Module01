/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:42:57 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/29 08:49:01 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <search> <replace>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string search = argv[2];
    std::string replace = argv[3];

    std::ifstream inputFile(filename);

    if (!inputFile)
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return (1);
    }
    
    return (0);
}