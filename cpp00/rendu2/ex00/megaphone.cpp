/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:32:11 by esanchez          #+#    #+#             */
/*   Updated: 2022/04/04 20:32:13 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	x = 0;
	int	i = -1;
	char *tmp;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (++x < argc)
		{
			i = -1;
			tmp = argv[x];
			while (tmp[++i])
					tmp[i] = std::toupper(tmp[i]);
			std::cout << argv[x];
		}
	}
	std::cout << std::endl;
}
