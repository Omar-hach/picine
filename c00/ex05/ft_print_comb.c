/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:59:18 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/15 18:10:48 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit3 = '0';
	while (digit3 <= '6')
	{
		digit2 = digit3 + 1;
		while (digit2 <= '9')
		{
			digit1 = digit2 + 1;
			while (digit1 <= '9' )
			{
				write(1, &digit3, 1);
				write(1, &digit2, 1);
				write(1, &digit1, 1);
				write(1, ", ", 2);
				digit1++;
			}
			digit2++;
		}
		digit3++;
	}
	write(1, "789", 3);
}
int main ()
{
	ft_print_comb();
}