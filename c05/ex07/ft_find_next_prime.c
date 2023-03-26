/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:44:02 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/26 23:22:03 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	root(int nb)
{	
	long int	x;
	int			x_1;

	x_1 = 0;
	if (nb <= 0)
		return (0);
	x = 1;
	while (x != x_1)
	{
		x_1 = x;
		x = (x + nb / x) / 2;
		if (x == 1 + x_1)
			return (x_1);
	}
	return (x);
}

int	ft_find_next_prime(int nb)
{
	int	x;
	int	i;
	int	root_nb;

	x = 0;
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (x == 0)
	{
		i = 2;
		root_nb = root(nb);
		while (i <= root_nb + 1)
		{
			x = nb % i;
			if (x == 0)
				break ;
			i++;
		}
		nb = nb + 2;
	}
	return (nb - 2);
}
