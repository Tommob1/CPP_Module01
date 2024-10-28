/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:42:57 by btomlins          #+#    #+#             */
/*   Updated: 2024/10/29 09:13:42 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <fstream>

std::string replaceOccurrences(const std::string& content, const std::string& s1, const std::string& s2)
{
    std::string modifiedContent;
    size_t pos;
    size_t findPos;
    pos = 0;

    while ((findPos = content.find(s1, pos)) != std::string::npos)
    {
        modifiedContent += content.substr(pos, findPos - pos) + s2;
        pos = findPos + s1.length();
    }
    modifiedContent += content.substr(pos);
    return modifiedContent;
}

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

    std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();

    std::string modifiedContent = replaceOccurrences(content, s1, s2);

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);

    if (!outputFile)
    {
        std::cerr << "Error: Could not write to file " << outputFilename << std::endl;
        return (1);
    }

    outputFile << modifiedContent;
    outputFile.close();

    std::cout << "Replacement complete. Output saved to " << outputFilename << std::endl;
    return (0);
}