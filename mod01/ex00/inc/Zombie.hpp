/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:19:40 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/19 11:37:50 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


#ifndef ZOMBIE_H
# define ZOMBIE_H

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	set_name(std::string name);
	private:
		std::string	_name = "default";
};

#endif
