/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:52:06 by ohachami          #+#    #+#             */
/*   Updated: 2022/05/14 19:59:23 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void   ft_print_table(int min, int max)
{
    char digit;
    int i;

    i=min;
    while(i <= max)
    {
        digit = '0' + i;
        write(1,&digit,1);
        i++;
    }
    write(1,", ",1);
}

void ft_print_combn(int n)
{
	if(n == 1)
    {
        ft_print_table(0,9);
    }
    else
    {
        ft_print_table(n - 1,9);
        ft_print_combn(n-1);
    }
}

/*                             */
void ft_print_combn2(void)
{
	char digit1;
    char digit2;

    digit2= '0';
    while (digit2 <= '9')
    {
        digit1=digit2+1;
        while(digit1 <= '9')
        {
            write(1,&digit2,1);
            write(1,&digit1,1);
            digit1++;
        }
        digit2++;
    }
}
void ft_print_combn1(void)
{
    char digit1;

    digit1= '0';
    while (digit1 <= '8')
    {
        write(1,&digit1,1);
        write(1,", ",2);
        digit1++;
    }
    write(1,"9",3);
}

int main()
{
    ft_print_combn(5);
}