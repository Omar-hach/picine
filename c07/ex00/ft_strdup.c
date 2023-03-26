/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:52:44 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/29 22:03:34 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char *ft_strdup(char *src)
{
	char	*dest;
	int		counter;
	
	counter = 0;
	while (*src)
	{
		counter++;
		src++;
	}
	src = src - counter;
	dest = malloc(counter * 1);
	while(dest)
	{
		*src = *dest;
		src++;
		dest++;
	}
	dest = dest - counter;
	return (dest);
}
#include<stdio.h>
int main()
{
	char word[] = "hello";
	printf("%s", word);
}
