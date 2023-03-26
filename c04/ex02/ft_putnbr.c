/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:28:42 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/22 18:29:06 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	nb_printer(int nb)
{
	char	printer;
	int		nb_reserve;
	int		nb_table[10];
	int		i;

	i = 0;
	printer = '0';
	nb_reserve = nb ;
	while (nb_reserve > 0)
	{
		nb_table[i] = nb_reserve % 10;
		nb_reserve = nb_reserve / 10;
		i++;
	}
	while (i > 0)
	{
		printer = '0';
		printer = printer + nb_table[i - 1];
		write(1, &printer, 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb_printer((-1) * nb);
	}
	else
		nb_printer(nb);
}
