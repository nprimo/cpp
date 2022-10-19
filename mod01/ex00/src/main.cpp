/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:24:53 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/19 11:37:37 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Zombie.hpp"

int	main(void) {
	Zombie	zombie;
	Zombie*	adam;

	adam = newZombie("Adam");
	adam->announce();
	zombie.announce();
	delete(adam);
}
