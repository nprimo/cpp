/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:43:44 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/21 17:13:30 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void (Harl::*fn[4])();
public:
	void test(void);
	void testCaller(void);
	void complain(std::string level);
	Harl(void);
	~Harl(void);
};

#endif