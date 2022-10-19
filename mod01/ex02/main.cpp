/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:28:48 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/19 12:39:46 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << std::setw(30) << std::right << "Mem address of str: " << &str << std::endl;
	std::cout << std::setw(30) << std::right << "Mem address of stringPTR: " << &stringPTR << std::endl;
	std::cout << std::setw(30) << std::right << "Mem address of stringREF: " << &stringREF << std::endl;

	std::cout << std::setw(20) << std::right << "Value str: " << str << std::endl;
	std::cout << std::setw(20) << std::right << "Value stringPTR: " << *stringPTR << std::endl;
	std::cout << std::setw(20) << std::right << "Value stringREF: " << stringREF << std::endl;

}