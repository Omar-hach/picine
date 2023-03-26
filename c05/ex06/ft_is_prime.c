/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:43:07 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/25 21:06:19 by ohachami         ###   ########.fr       */
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
			return(x_1);
	}
	return (x);
}

int	ft_is_prime(int nb)
{
	int	x;
	int	i;
	int	root_nb;

	if (nb <= 1)
		return (0);
	else if(nb == 2)
		return (1);
	i = 2;
	root_nb = root(nb);
	while (i <= root_nb + 1)
	{
		x = nb % i;
		if (x == 0)
			return (0);
		i++;
	}
	return (1);
}

#include<stdio.h>
int main()
{
	int j = 1;
	while (j<251){
    	printf("!%d!(%d)\n",j,ft_is_prime(j));
		j++;}
}