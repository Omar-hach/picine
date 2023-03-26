/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:11:44 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/25 17:11:50 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	element_check(char *str, char *base, int len)
{
	int i;
	int	check;

	i = 0;
	while (*str > 0)
	{
		if (i > len)
			return (0);
		if (base[i] != *str)
			i++;
		else 
		{
			str++;
			i = 0;
		}
	}
	return (1);
}

int	base_check(char	*base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		if ((base[i] == '+' || base[i] == '-')
		 || !(base[i] >= ' ' && base[i] <= '~'))
			return (1);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int str_check(char *str, char *base, int len)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			check = -1;
		else
			check = 1;
		str++;
	}
    return (check * element_check(str, base,len));
}

int ft_atoi_base(char *str, char *base)
{
	int	len;
	int	check;
	int	count;
	int	number;

	len = 0;
	count = 0;
	number = 0;
	while (*base != '\0')
	{
		len++;
		base++;
	}
	base = base - len;
	check = base_check(base) * str_check(str, base, len);
	if (len < 2 || check == 0)
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (number * check);
}
#include<stdio.h>
int main()
{
    printf("%d",ft_atoi_base("2148743", "01234567"));
}
// 