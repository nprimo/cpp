/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:19:40 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/19 15:29:56 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	set_name(std::string name);
	private:
		std::string	_name;
};

#endif
