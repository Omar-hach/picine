/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:54:22 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/30 00:55:08 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int i;

	i = 0;
	diff = max - min;
	if (diff <= 0)
	{
		*range=NULL;
		return(0);
	}
	else 
		*range = malloc(4*diff);
	while (i < diff)
	{
		*range[i] = min;
		min++;
		i++;
	}
	return (i);
}
int main()
{
	int j;
	int *tab;
	int size;

	size = ft_ultimate_range(&tab ,12,22);
	j = 0;
	printf(" %d ",size);
	if (!tab)
		printf(" %d ",tab[j]);
	else
	{
		while (j<20)
		{
			printf(" %d ",tab[j]);
			j++;
		}
	}
}
