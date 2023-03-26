/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:38:34 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/21 23:20:07 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;

	count = 0;
	while (*dest != '\0')
	{
		count++;
		dest++;
	}
	if (*dest == '\0')
			*dest = *src;
	while (*src)
	{
		count++;
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	dest = dest - count ;
	return (dest);
}
