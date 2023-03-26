/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:15:46 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/12 18:41:03 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabete;

	alphabete = 'a';
	while (alphabete != '{' )
	{
		write(1, &alphabete, 1);
		alphabete++;
	}
}
