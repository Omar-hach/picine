/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:58:52 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/19 22:58:42 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	count;

	count = 0;
	i = size - 1;
	while (*src != '\0')
	{
		if (i > 0)
		{
			*dest = *src;
			dest++;
			i--;
		}
		count++;
		src++;
	}
	*dest = '\0';
	return (count);
}
