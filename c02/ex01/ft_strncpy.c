/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 00:25:27 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/19 23:16:23 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	char word1[] = "righ";
	char word2[] = "wrong";
	int n = 2;

    printf("original = %s \nhome made = %s",strncpy(word2 , word1, n),ft_strncpy(word2, word1, n));
}*/
