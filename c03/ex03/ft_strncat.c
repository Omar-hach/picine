/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:40:00 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/21 23:20:58 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				count;
	unsigned int	i;

	count = 0;
	while (*dest != '\0')
	{
		count++;
		dest++;
	}
	if (*dest == '\0')
			*dest = *src;
	i = 0;
	while (nb > i && *src)
	{
		count++;
		i++;
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	dest = dest - count ;
	return (dest);
}
