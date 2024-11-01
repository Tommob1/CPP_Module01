/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:10:44 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/01 17:14:50 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();

    public:
        Harl();
        ~Harl();
        void complain(const std::string& level);
};

#endif