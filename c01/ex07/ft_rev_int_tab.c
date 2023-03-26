/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:35:50 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/17 23:53:25 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	reserve;

	i = 0;
	while (i < size / 2)
	{
		reserve = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = reserve;
		i++;
	}
}
