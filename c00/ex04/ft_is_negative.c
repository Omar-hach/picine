/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:52:41 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/12 19:56:29 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	positif;
	char	negatif;

	negatif = 'N';
	positif = 'P';
	if (n >= 0)
	{
		write(1, &positif, 1);
	}
	else
	{
		write(1, &negatif, 1);
	}
}
