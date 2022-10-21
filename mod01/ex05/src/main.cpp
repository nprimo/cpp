/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:50:17 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/21 17:18:24 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Harl.hpp"

int main(void)
{
	Harl harl;

	harl.complain("info");
	harl.complain("debug");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("error1");
	harl.complain("er ror");

	return (0);
}