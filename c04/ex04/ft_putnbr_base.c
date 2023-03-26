/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:31:21 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/22 18:31:59 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	base_printer(int nb, char *base, int len)
{
	char			result[34];
	int				i;
	unsigned int	number;

	i = 0;
	number = nb;
	while (number > 0)
	{
		result[i] = base[number % len];
		number = number / len;
		i++;
	}
	if (nb == 0)
		result[0] = base[number % len];
	while (i >= 0)
	{
		write(1, &result[i], 1);
		i--;
	}
}

int	base_check(char	*base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		if ((base[i] == '+' || base[i] == '-')
			|| !(base[i] >= ' ' && base[i] <= '~'))
			return (1);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	check;

	len = 0;
	check = 0;
	while (*base != '\0')
	{
		len++;
		base++;
	}
	base = base - len;
	check = base_check(base);
	if (len < 2 || check == 1)
		return ;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		write(1, "-", 1);
	}
	base_printer(nbr, base, len);
}
