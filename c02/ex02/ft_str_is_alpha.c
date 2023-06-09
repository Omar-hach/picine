/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 00:26:48 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/18 20:03:58 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
	{
		if (*(str + 1) == '\0')
		{
			return (1);
		}
		str++;
	}
	return (0);
}
