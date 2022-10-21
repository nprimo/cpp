/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:02:58 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/21 17:18:20 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl on" << std::endl;
	this->fn[0] = &Harl::debug;
	this->fn[1] = &Harl::info;
	this->fn[2] = &Harl::warning;
	this->fn[3] = &Harl::error;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "Harl off" << std::endl;
	return ;
}

void Harl::debug(void)
{
	std::cout << "debug msg" << std::endl;
	return ;
}

void Harl::info(void)
{
	std::cout << "info msg" << std::endl;
	return ;
}

void Harl::warning(void)
{
	std::cout << "warning msg" << std::endl;
	return ;
}

void Harl::error(void)
{
	std::cout << "error msg" << std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	std::string	level_list[] = {
		"debug", "info", "warning", "error" 
	};
	int pos = -1;

	while (++pos < 4)
		if (level_list[pos] == level)
			(this->*fn[pos])();
	return ;
}
