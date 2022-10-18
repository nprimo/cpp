/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:44:43 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/18 13:07:30 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int ac, char **av)
{
	int i;

	if (ac == 1)
		std::std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 0;
		while (av[++i])
		{
			for (char c: (std::string) av[i])
				std::cout << (char) toupper(c);
		}
	}
	std::cout << std::endl;
	return (0);
}