/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:47:56 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/19 16:13:34 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Default weapon created" << std::endl;
	return ;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << this->type << " created" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destroyed" << std::endl;
	return ;
}

const std::string	Weapon::getType(void)
{
	std::string &type = this->type;
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	std::cout << "Weapon type is now: " << this->type << std::endl;
}