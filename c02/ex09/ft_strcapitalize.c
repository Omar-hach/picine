/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:56:26 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/19 23:04:41 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			if ((*(str - 1) >= 'A' && *(str - 1) <= 'Z')
					|| (*(str - 1) >= 'a' && *(str - 1) <= 'z')
					|| (*(str - 1) >= '0' && *(str - 1) <= '9'))
				*str = *str + 32;
		}
		else if (*str >= 'a' && *str <= 'z')
		{
			if (!((*(str - 1) >= 'A' && *(str - 1) <= 'Z')
					|| (*(str - 1) >= 'a' && *(str - 1) <= 'z')
					|| (*(str - 1) >= '0' && *(str - 1) <= '9')))
				*str = *str - 32;
		}
		str++;
		count++;
	}
	return (str - count);
}
#include<stdio.h>
int main()
{
	char word[] = "salUt, coMMent Tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *a = ft_strcapitalize(word);
	printf("a = %s",a);
}
