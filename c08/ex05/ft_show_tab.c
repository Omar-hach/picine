/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:56:29 by ohachami          #+#    #+#             */
/*   Updated: 2022/06/02 17:11:16 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include<unistd.h>

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str = str + 1;
	}
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	while (par)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		write(1, "\n", 1);
		par++;
		if (par->str == 0)
			break ;
	}
}
