/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:46:50 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/19 16:13:28 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	const std::string	getType(void);
	void		setType(std::string type);
};

#endif