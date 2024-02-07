/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:07:29 by svanmarc          #+#    #+#             */
/*   Updated: 2024/01/18 15:35:03 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	printUpper(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			std::cout << (char)std::toupper((unsigned char)av[i][j]);
			j++;
		}
		if (i < ac - 1)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
}

int		main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		printUpper(ac, av);
	return (0);
}