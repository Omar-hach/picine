/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:42:19 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/21 23:25:25 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	size_src = 0;
	size_dest = 0;
	while (src[i] != '\0')
	{
		i++;
		size_src++;
	}
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
		size_dest++;
	}
	if (size < 0 || size_dest < size_src)
		return (0);
	if (size <= size_dest)
		return (size_src + size);
	else
		return (size_dest + size_src);
}
