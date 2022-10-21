/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:36:09 by nprimo            #+#    #+#             */
/*   Updated: 2022/10/21 17:22:13 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

bool	readFile(char *fname, std::string *content)
{
	std::ifstream	file;
	std::string		line;
	
	file.open(fname);
	if (file.is_open() && !file.fail())
	{
		while (getline(file, line))
		{
			if ((*content).size() > 1)
				*content += "\n";
			*content += line; 
		}
		file.close();
		return true;
	}
	content = NULL;
	std::cout << fname << " cannot be open!" << std::endl;
	return false;
}

void	createFile(char *fname, std::string content)
{
	std::ofstream	file;

	file.open(fname);
	if (file.is_open() && !file.fail())
	{
		file << content;
		file.close();
	}
	else
		std::cout << "Error creating new file" << std::endl;
	return ;		
}

std::string	replace(std::string content, char *str1, char *str2)
{
	std::size_t pos;
	std::string	newContent = "";
	std::string	base;

	pos = content.find(str1);
	while (pos < content.size())
	{
		newContent += base.assign(content, 0, pos);
		newContent += str2;
		content.assign(content.substr(pos + strlen(str1)));
		pos = content.find(str1);
	}
	newContent += content;
	return (newContent);
}

bool	checkInput(int ac)
{
	if (ac != 4)
	{
		std::cout << "Run program with 3 args: fname, str1, str2" << std::endl;
		return false;
	}
	return true;
}

char*	getReplaceFname(char *fname)
{
	std::string	replaceFname = ((std::string)fname + ".replace");
	char*	replaceFnameChar = new char[replaceFname.size() + 1];
	std::strcpy(replaceFnameChar, replaceFname.c_str());
	return (replaceFnameChar);
}

int main(int ac, char **av)
{
	std::string	content;
	std::string newContent;

	if (!checkInput(ac))
		return (1);
	if (readFile(av[1], &content))
	{
		char *replaceFname = getReplaceFname(av[1]);

		std::string newContent = replace(content, av[2], av[3]);
		createFile(replaceFname, newContent);
		delete[] replaceFname;
		return (0);
	}
	return (1);
}
