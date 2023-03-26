/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 01:01:02 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/19 23:18:22 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n++;
	}
	*dest = '\0';
	return (dest - n);
}
/*#include<stdio.h>
#include<string.h>
int main()
{


    printf("original = %s \nhome made = %s",strcpy("righ", "wrong"),ft_strcpy("righ", "wrong"));
}*/