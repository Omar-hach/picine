/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:39:59 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/28 02:52:55 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*check(char *str, char *to_find, int count)
{
	if (*to_find == '\0')
	{
		str = str - count;
		return (str);
	}
	if (count == 0)
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	count;

	count = 0;
	while (*str != '\0' && *to_find != '\0')
	{
		if (*to_find == *str)
		{
			count++;
			to_find++;
		}
		else
		{
			to_find = to_find - count;
			if (count != 0)
				str--;
			count = 0;
		}
		str++;
	}
	return (check(str, to_find, count));
}
