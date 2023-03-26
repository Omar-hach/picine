/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:30:23 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/22 18:30:45 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	count;
	int	number;

	number = 0;
	sign = 1;
	count = 0;
	while ((*str == ' ' || *str == '\f')
		|| (*str == '\n' || *str == '\r') || *str == '\v')
		str++;
	while (*str == '+' || *str == '-' )
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (number * sign);
}
