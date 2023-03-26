/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:59:39 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/19 22:49:12 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	printer_hexadecimal(int number)
{
	char	printer1;
	char	printer10;

	if (number % 16 < 10)
    {
		printer1 = '0' + number % 16;
	}
	else if (number % 16 < 17 && number % 16 > 9)
	{
		printer1 = '0' + number % 16 + 39;
	}
	printer10 = '0' + number / 16 ;
	write(1, "\\", 1);
	write(1, &printer10, 1);
	write(1, &printer1, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	number;

	while (*str)
	{
		number = *str;
		if ((number > 0 && number < 31) || number == 127)
		{
			printer_hexadecimal(number);
		}
		else
			write(1, str, 1);
		str++;
	}
}
