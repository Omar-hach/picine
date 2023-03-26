/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 00:37:22 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/31 21:28:30 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_switch(char **dest, char **src)
{
	char	*reserve;

	reserve = *dest;
	*dest = *src;
	*src = reserve;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;

	i = 2;
	while (i < argc)
	{
		while (ft_strcmp(argv[i], argv[i - 1]) < 0)
		{
			ft_switch(&argv[i], &argv[i - 1]);
			i--;
			if (i == 1)
				i++;
		}
		i++;
	}
	ft_print_params(argc, argv);
}
