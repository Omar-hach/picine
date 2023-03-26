/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:59:15 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/15 18:20:24 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_xx_digits(int number)
{
	char	digit_x0;
	char	digit_0x;

	digit_x0 = '0' + number / 10;
	digit_0x = '0' + number % 10;
	write(1, &digit_x0, 1);
	write(1, &digit_0x, 1);
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 1;
	number2 = 0;
	while (number2 <= 97)
	{
		while (number1 <= 99)
		{
			ft_print_xx_digits(number2);
			write(1, " ", 1);
			ft_print_xx_digits(number1);
			write(1, ", ", 2);
			number1++;
		}
		number2++;
		number1 = number2 + 1;
	}
	write(1, "98 99", 5);
}
