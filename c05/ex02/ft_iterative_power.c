/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 22:34:43 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/25 19:58:06 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	x;
	int	i;

	if (power < 0)
		return (0);
	i = 1;
	x = 1;
	while (i <= power)
	{
		x = x * nb;
		i++;
	}
	return (x);
}
