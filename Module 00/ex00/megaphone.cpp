/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 08:48:01 by dareias-          #+#    #+#             */
/*   Updated: 2022/02/18 09:01:04 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		if (i != 1)
			std::cout << " ";
		for (size_t j = 0; j < std::strlen(argv[i]); j++)
			argv[i][j] = std::toupper(argv[i][j]);
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
