/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 22:43:33 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/27 23:34:09 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
int *ft_range(int min, int max)
{
	int diff;
	int *array;
	int i;

	i = 0;
	diff = max - min;
	if (diff <= 0)
		return (0);
	array = malloc(4 * diff);
	while (i < diff)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
int main()
{
	int j;
	int *tab;
	int max  = 3;
	int min = 8;
	tab = ft_range(min,max);
	j = 0;
	while (j < 0)
	{
		printf(" %d ",tab[j]);
		j++;
	}
	return 0;
}
