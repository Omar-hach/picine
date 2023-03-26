/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:37:05 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/18 00:02:16 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	*p;
	int	reserve;

	p = tab;
	p++;
	while (p < (tab + size))
	{
		while (*p < *(p - 1))
		{
			reserve = *p;
			*p = *(p - 1);
			*(p - 1) = reserve;
			p = p - 1;
			if (tab == p)
				p = p + 1;
		}
		p++;
	}
}
