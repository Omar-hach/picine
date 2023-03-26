/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:27:52 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/25 19:29:31 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	x = 1;
	while (i <= nb)
	{
		x = x * i;
		i++;
	}
	return (x);
}
