/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:19:40 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/18 12:40:24 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		Zombie*	newZombie(string name);
	private:
		string	name;
};

#endif
