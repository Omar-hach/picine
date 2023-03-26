/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:27:32 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/22 18:28:19 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str = str + 1;
	}
}