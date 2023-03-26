/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:25:55 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/12 18:47:50 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabete;

	alphabete = 'z';
	while (alphabete != '`' )
	{
		write(1, &alphabete, 1);
		alphabete--;
	}
}	
